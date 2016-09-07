#13.9_object_combine.py 
class NewAddrBookEntry(object):
    'new address book entry class'
    def __init__(self,nm,ph):
        self.name = Name(nm)
        self.phone = Phone(ph)
        print ('Created instance for:',self.name)

class Name(object):
    def __init__(self,nm):
        self.name = nm

class Phone(object):
    def __init__(self,ph):
        self.phone = ph


c = NewAddrBookEntry('tim','15968333522')
print (c.name.name)
#tim
print (c.phone.phone)
#15968333522

#///当类之间有显著的不同，并且（较小的类）是较大的类所需要的组件时候，组合表现的更好
#///但当你设计“相同的类但是一些不同的功能”时，派生就是一个更加合理的选择了