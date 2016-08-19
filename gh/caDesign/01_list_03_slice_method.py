#01_list_03_slice_method.py

#///slice
lst = list(range(6)) #使用list函数建立列表
print (lst)
#[0, 1, 2, 3, 4, 5]
lst.append(99) #在列表末尾追加新的对象
print (lst)
#[0, 1, 2, 3, 4, 5, 99]
lst.append(list(range(50,80,5))) #在末尾追加新的列表作为单独的索引位置选项
print (lst)
#[0, 1, 2, 3, 4, 5, 99, [50, 55, 60, 65, 70, 75]]
lstb = [3,5,67]
print (lstb)
#[3, 5, 67]
lst.extend(lstb) #一次性追加一个列表的多个值，各自分配单独的索引值///extend
print (lst)
#[0, 1, 2, 3, 4, 5, 99, [50, 55, 60, 65, 70, 75], [3, 5, 67]]

#///method
print (lst.count(3)) #计算指定值在列表中出现的次数
#1
print (lst.index(3)) #根据指定的项值，找到该列表第一次出现的索引值
lst.insert(1,list(range(200,210,3))) #在现有列表中插入新值，这里是一个列表
print (lst)
lst.insert(1,230) #插入新值230到list的1位置
print (lst.pop(9)) #移除指定索引值位置的项值，并返回移除的项值
#[50, 55, 60, 65, 70, 75]
print (lst)
#[0, 230, [200, 203, 206, 209], 1, 2, 3, 4, 5, 99, 3, 5, 67]
lst.remove(3) #根据输入的项值，移除列表中第一个与其匹配的值
print (lst)
#[0, 230, [200, 203, 206, 209], 1, 2, 4, 5, 99, 3, 5, 67]
#///pop()与remove()的区别，pop是按索引位置移除，remove是按第一个值移除
print (lst.pop(2))
#[200, 203, 206, 209]
lst.reverse() #反转列表
print (lst)
#[67, 5, 3, 99, 5, 4, 2, 1, 230, 0]
lst.sort() #列表排序
print (lst)
#[0, 1, 2, 3, 4, 5, 5, 67, 99, 230]
