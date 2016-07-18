#try...except...finally

#试试try机制
try:
    print ('try...')
    r = 10/0
    print ('result:',r) #前面r发生了错误，print()不被执行
except ZeroDivisionError as e: #how ZeroDivisionError run??
    print ('except:',e)
finally:
    print('finally...')
print('END')
#return
'''
try...
except: division by zero
finally...
END
'''