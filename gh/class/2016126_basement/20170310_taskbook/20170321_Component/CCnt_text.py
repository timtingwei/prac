from Grasshopper.Kernel.GH_Component import Name,Category,SubCategory
#version 0.1 解决统计运算器数量问题
#version 0.2 修改空格
def testWrite(path):
    #输出到text
    f = open(path,'w')
    for name in categoryNames:
        s1 = str(name) + ' '+str(len(c[name]))
        f.write(s1)
        f.write('\n')
        for key in c[name].keys():
            s2 = '    '+str(key)+' ' +str(c[name][key][0])
            f.write(s2+'\n')
            for i_value in range(1,len(c[name][key])):
                s3 =  '        '+str(c[name][key][i_value])
                f.write(s3+'\n')
    f.close()
categoryNames = ['Params','Maths','Sets','Vector','Curve','Surface','Mesh','Intersect','Transform','Display']
c = {}
for name in categoryNames:
    c[name]={}   #字典c为两层嵌套
#print c
if (toggle):
    doc = ghenv.Component.OnPingDocument() #获取当前gh文档
    sel_objs = doc.SelectedObjects()   #获取文档中选择的电池
    for sel_obj in sel_objs:
        obj_name = Name.GetValue(sel_obj)
        obj_c = Category.GetValue(sel_obj)
        obj_subc = SubCategory.GetValue(sel_obj)
        #若子类别value已被初始化为1，且运算器没有重复：
        if (c[obj_c].has_key(obj_subc)):
            c[obj_c][obj_subc][0] += 1  #个数+1
            c[obj_c][obj_subc].append(obj_name) #运算器名称添加至栈末
        else:#尚未初始化
            c[obj_c][obj_subc] = [1,obj_name] #个数为1，紧跟运算器名称
    
    #打印界面，未输出到text
    for name in categoryNames:
        print name,len(c[name])
        for key in c[name].keys():
            print '    ',key,c[name][key][0]
            for i_value in range(1,len(c[name][key])):
                print '        ',c[name][key][i_value]
        print
     
    #输出到text
    f = open(path,'w')
    for name in categoryNames:
        s1 = str(name) + ' '+str(len(c[name]))
        f.write(s1)
        f.write('\n')
        for key in c[name].keys():
            s2 = str(key)+' ' +str(c[name][key][0])
            f.write(s2+'\n')
            for i_value in range(1,len(c[name][key])):
                s3 = str(c[name][key][i_value])
                f.write(s3+'\n')
    f.close()
    