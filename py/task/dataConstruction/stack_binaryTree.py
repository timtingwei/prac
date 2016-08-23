#stack_binaryTree.py

from pythonds.basic.stack import Stack
from pythonds.trees.binaryTree import BinaryTree
def buildParseTree(fpexp):
    fplist = fpexp.spilt()
    pStack = Stack()
    eTree = BinaryTree('')
    pStack.push(eTree)