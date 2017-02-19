#BugBaidu.py
#-*- coding:utf-8 -*-

import string
import urllib2
import re
"""
class HTML_Tool:
    #用非 贪婪模式 匹配 \t 或者 \n 或者 空格 或者 超链接 或者 图片
    BgnCharToNoneRex = re.compile("(\t|\n| |<a.*?>|<img.*?>)")

    #用非 贪婪模式 匹配 任意<>标签
    EndCharToNoneRex = re.compile("<.*?>")

    #用非 贪婪模式 匹配 任意<p>标签
    BgnPartRex = re.compile("<p.*?>")
    CharToNewLineRex = re.compile("(<br/>|</p>|<tr>|<div>|</div>)")
    CharToNextTabRex = re.compile("<td>")

    #将一些 html 的符号实体转变为原始符号
    replaceTab = [("<","<"),(">",">"),("&","&"),("&","\""),(" "," ")]

    def Replace_Char(self,x):
        x = self.BgnCharToNoneRex.sub("",x)
        x = self.BgnPartRex.sub("\n   ",x)
        x = self.CharToNewLineRex.sub("\n",x)
        x = self.CharToNextTabRex.sub("\t",x)
        x = self.EndCharToNoneRex.sub("",x)

        for t in self.replaceTab:
            x = x.replace(t[0],t[1])
        return x

"""
class HTML_Tool:  
    # 用非 贪婪模式 匹配 \t 或者 \n 或者 空格 或者 超链接 或者 图片  
    BgnCharToNoneRex = re.compile("(\t|\n| |<a.*?>|<img.*?>)")  
      
    # 用非 贪婪模式 匹配 任意<>标签  
    EndCharToNoneRex = re.compile("<.*?>")  
  
    # 用非 贪婪模式 匹配 任意<p>标签  
    BgnPartRex = re.compile("<p.*?>")  
    CharToNewLineRex = re.compile("(<br/>|</p>|<tr>|<div>|</div>)")  
    CharToNextTabRex = re.compile("<td>")  
  
    # 将一些html的符号实体转变为原始符号  
    replaceTab = [("<","<"),(">",">"),("&","&"),("&","\""),(" "," ")]  
      
    def Replace_Char(self,x):  
        x = self.BgnCharToNoneRex.sub("",x)  
        x = self.BgnPartRex.sub("\n    ",x)  
        x = self.CharToNewLineRex.sub("\n",x)  
        x = self.CharToNextTabRex.sub("\t",x)  
        x = self.EndCharToNoneRex.sub("",x)  
  
        for t in self.replaceTab:    
            x = x.replace(t[0],t[1])    
        return x  

class Baidu_spider():

    def __init__(self,url):
        self.datas = []
        self.myUrl = url + '?see_lz=1'  #url = "https://tieba.baidu.com/p/4952371316?see_lz=1"   + &pn=2
        self.myTool = HTML_Tool()
        print u'已经启动百度贴吧爬虫，咔嚓咔嚓'
    
    
    def baidu_tieba(self):
        #读取页面的原始信息并将其从utf-8砖码
        myPage = urllib2.urlopen(self.myUrl).read().decode('utf-8')
        #计算楼主发布内容一共有多少页
        endPage = self.page_counter(myPage)
        #获取该贴的标题
        title = self.find_title(myPage)
        print u'文章名称：' +  title
        #获取最终数据
        self.save_data(self.myUrl,title,endPage)

        


    def page_counter(self,myPage):
        #匹配 "共有<span class="red">12</span>页"来获取一个有多少页
        myMatch = re.search(r'class="red">(\d+?)</span>',myPage,re.S)
        if myMatch:
            endPage = int(myMatch.group(1))
            print u'爬虫报告：发现楼主共有%d页的原创内容' % endPage
        else:
            endPage = 0
            print u'爬虫报告：无法计算楼主发布内容共有多少页'

        return endPage


    #用来寻找该贴的标题
    def find_title(self,myPage):
        #计算总共的页数和当前的页面
        myMatch = re.search(r'<h1.*?>(.*?)</h1>', myPage, re.S)
        title = u'暂无标题'
        if myMatch:
            title = myMatch.group(1)
        else:
            print u'爬虫报告：无法加载文章标题！'

        #文件名不能包含以下字符： \ / : * ? " < > |
        title = title.replace('\\','').replace('/','').replace(':','').replace('*','').replace('?','').replace('"','').replace('>','')
        return title




    def save_data(self,url,title,endPage):
        #储存数据到txt
        self.get_data(url,endPage)
        #打开本地文件
        f = open(title+'.txt','w+')
        f.writelines(self.datas)
        f.close()
        print u'爬虫报告：文件已下载到本地并打包成txt文件'
        print u'请按任意键退出'
        raw_input();
        
        
    
    def get_data(self,url,endPage):
        #获得数据
        url = url + '&pn='
        for i in range(1,endPage+1):
            print u'爬虫报告:爬虫%d号正在加载中......' % i
            req = urllib2.Request(url + str(i))
            myPage = urllib2.urlopen(req).read()
            self.deal_data(myPage)   
            
            

    
    def deal_data(self,myPage):  
        myItems = re.findall('id="post_content.*?>(.*?)</div>',myPage,re.S)  
        for item in myItems:  
            data = self.myTool.Replace_Char(item.replace("\n","").encode('utf-8'))  
            self.datas.append(data+'\n')  


    """
    def deal_data(self,myPage):
        #对page中的字符进行处理以及编码
        myItems = re.findall('id="post_content.*?>(.*?)</div>',myPage,re.S)
        for item in myItems:
            data = self.myTool.Replace_Char(item.replace("\n","").encode('utf-8'))
            self.datas.append(data + '\n')
    """

print u'请输入百度贴吧网址最后的数字串：'
bdurl = 'http://tieba.baidu.com/p/' + str(raw_input(u'http://tieba.baidu.com/p/'))

#调用
mySpider = Baidu_spider(bdurl)
mySpider.baidu_tieba()