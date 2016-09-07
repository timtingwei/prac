#13.7_object_bind_method call.py

class AddrBookEntry(object):
    'address book entry class'
    def __init__(self,nm,ph):
        self.name = nm
        self.phone = ph
        print ('Created instance for:',self.name)
    def updatePhone(self,newph):
        self.phone = newph
        print ('Updated phone # for:',self.name)

class EmplAddrBookEntry(AddrBookEntry):
    'Employee Address Book Entry class'
    def __init__(self,nm,ph,id,em):
        AddrBookEntry.__init__(self,nm,ph) #///重载了父类的构造器__init__()
        self.empid = id
        self.email = em
    
    def updateEmail(self,newem):
        self.email = newem
        print ('Updated e-mail address for:',self.name)
    
john = EmplAddrBookEntry('John Joe','488-555-1212',42,'jogh@hotmail.com')
#Created instance for: John Joe
print (john.name)
#John Joe