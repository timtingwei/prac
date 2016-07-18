class Less(object):
    def __init__(self,num1,num2,MyStr):
        self._num1 = num1
        self._num2 = num2
        self._str = list(MyStr)
        self.iter = 0
    def __iter__(self):
        return self
    def __next__(self):
        self.iter += 1
        if self.iter > len(self._str):
            raise StopIteration
        return self.iter
    def __call__(self):
        return self._num1 - self._num2
    def __str__(self):
       #print  ('套餐剩余时长为：%s 分钟 ' % (self._num1 - self._num2))
        return '套餐剩余时长为：%s 分钟 =  %s 小时 ' % (self._num1 - self._num2,(self._num1 - self._num2)/60)


s = Less(6000,5211,'谁给我个chinanet或者edu')
print (s)
#print (s._str[8])
for n in s:
    print (n,' ',s._str[n-1])