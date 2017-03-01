#weight_list version 0.2
#simplify program from class to normal ,reduce common compute

def main():
    P = [5,4,6,8,7,9]
    a_index = 0
    change_a = 30
    n = len(P)
    min_list = [3,3,3,3,3,3]
    toggle = True
    
    #//product weight list
    weight_i = n-1
    weight_list = [0 for wl in range(n-1)]
    weight_list.append(1)

    L = [P[i]for i in range(n)]
    original_sum = sum(L)
    #// give the input to change the L[a_index]
    L[a_index] += change_a
    #//sorted the list and match the weight index
    sortL = sorted(L)
    #sortIndex = [ sortL.index(L[i]) for i in range(n)]         #//maybe [L.index(sortL[i]) for i in range(n)]
    sortIndex = [L.index(sortL[i]) for i in range(n)]
    
    #dt = sum(L) - original_sum                        #//original_sum - sum(L)
    dt = original_sum - sum(L)
    while toggle:                                     #//when toggle off indicate dt=0 and each value > value's min
        #//distributeWeight
        #dt = sum(L) - original_sum
        for j in range(n):
            #L[sortIndex[j]] += dt * weight_list[j]    #//multiply list as sort order  
            L[j] += dt * weight_list[j]                #//multiply list as origianl order
        dt = original_sum - sum(L)
        if dt == 0  :                                   #// maybe needn\'t
            toggle = False

        #//testBelowMin
        for k in range(n):
            if L[k] - min_list[k] < 0 :               #//Error maybe L[sortIndex[i]] - min_list[sortIndex[i]] < 0 // or sortL[sortIndex[i]] - min_list[sortIndex[i]] < 0
                L[k] = min_list[k]
                dt = original_sum - sum(L)             #// compute sum of list after supplyment the minimum
                #if (dt < 0):                          #// when other items are minimum ,reduce first one
                if (dt < 0) and (weight_i>1):          #// ( weight_i > 1 )survive the condition reduce first item,and then continue add first item
                    weight_i -= 1                      #//recontribute weight after supplyment  ex:00001 ---> 00010                     
                    weight_list = [0 for wl in range(n-1)]
                    weight_list.insert(weight_i,1)
                    toggle = True                          #//toggle is on to multiply list as weight which has been revised
    print 'P:',P
    print 'L:',L

    #//test
    if sum(L) == original_sum:
        print 'True'
    else:
        print 'False'
main()

"""
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
    

    def suppleMin(self):
        pass


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
        self.dt = self.sum - sum(self.L)                                     ### Error???
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

#start()
"""



