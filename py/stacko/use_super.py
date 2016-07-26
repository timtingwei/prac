#use_super.py

class SomeBaseClass(object):
    def __init__(self):
        print('SomeBaseClass.__init__(self) called')

class Child(SomeBaseClass):
    def __init__(self):
        print('Child.__init__(self) called')
        SomeBaseClass.__init__(self)

class SuperChild(SomeBaseClass):
    def __init__(self):
        print('SuperChild.__init__(self) called')
        super(SuperChild,self).__init__()

#add another class to your object
class InjectMe(SomeBaseClass):
    def __init__(self):
        print('InjectMe.__init__(self) called')
        super(InjectMe,self).__init__()

class UnsuperInjector(Child,InjectMe):pass

class SuperInjecor(SuperChild,InjectMe):pass

o = UnsuperInjector()
'''
Child.__init__(self) called
SomeBaseClass.__init__(self) called
'''
o2 = SuperInjecor()
'''
SuperChild.__init__(self) called
InjectMe.__init__(self) called
SomeBaseClass.__init__(self) called
'''

