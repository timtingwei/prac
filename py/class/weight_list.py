import random


class WeightList():
    def __init__(self,P,change_a,a_index):
        self.P = P
        self.sum = sum(P)
        self.L = P
        self.n = len(P)
        weight_list = [0 for i in range(self.n-1)]
        weight_list.append(1)
        self.weight =  weight_list
        self.weight_i = len(P)-1
        self.min = [3,3,3,3,3,3]                                 #there number is 6
        self.a_index = a_index
        #print 'self.L',self.L
        
        self.dt  = change_a
        self.toggle = True

    def sortList(self):
        #self.index = sorted(self.L)
        self.sortL = sorted(self.L)
        self.index  = [self.sortL.index(self.L[i]) for i in range(self.n)]
        #self.L = temp_L
        #print 'self.L after sorted:',self.L
        #print 'self.sortL after sorted:',self.sortL
        #print 'self.index in sortList():' , self.index
    
    """
    def suppleMin(self):
        for index in range(self.n):
            dt_min = self.min[index] - self.L[index] 
            if abs(dt_min) > 0:
                self.L[index] += dt_min
    """

    def changeList(self):
        self.L[self.a_index] += self.dt
        #print 'self.L in changList',self.L

    def updateWeight(self):
        pass
    
    def distributeWeight(self):
        self.dt = self.sum - sum(self.L)
        #print 'self.dt in distributeWeight:',self.dt                       ### need to simplyify
        for i in range(self.n):
            self.L[self.index[i]] += self.dt * self.weight[i]
            #print 'self.L in distributeWeight',self.L
        self.dt = self.sum - sum(self.L)
        #print 'self.dt in distributeWeight after:',self.dt
        self.dt = 0
        self.toggle = False                                                #off the toggle when distributeWeight finished,there is no dt
    
    def testBelowMin(self):
        #if value below min,toggle = Ture,dt produced
        for i in range(self.n):
            if self.L[self.index[i]] - self.min[self.index[i]] < 0 :
                self.L[self.index[i]] = self.min[self.index[i]]
                self.dt = self.sum - sum(self.L)
                print 'self.dt in testBelowMin',self.dt
                if self.dt < 0:                            #change weight when last number up to Min
                    self.weight_i -= 1
                    print 'self.weight_i:',self.weight_i
                    weight_list = [0 for i in range(self.n - 1)]
                    weight_list.insert(self.weight_i,1)
                    self.weight = weight_list
                    print 'self.weight in testBelowMin',self.weight
                self.toggle = True
    def isRight(self):
        #print 'self.L in isRight() :',sum(self.L)
        #print 'self.sum in isRight() :',self.sum
        return sum(self.L) == self.sum

def start():
    P = [5,4,6,8,7,9]
    print 'P:',P
    a_index = 0
    change_a = 5
    w = WeightList(P,change_a,a_index)
    w.sortList()
    w.changeList()
    while w.toggle:             #while w.dt == True ,list is instability
        w.distributeWeight()
        w.testBelowMin()
        #w.toggle = False
    #print 'is right??:',w.isRight()
        
    print 'finally l:',w.L

start()


