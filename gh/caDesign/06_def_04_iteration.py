#06_def_04_iteration.py

def fact(n):
    if n == 1:
        return 1
    else:
        return n*fact(n-1)

print (fact(5))
#120

#///Python 自带的乌龟绘图库
from turtle import * #使用*表示导入模块中所有的函数

def f(length,depth): #最小可能性，迭代次数为0的时候，向前一个单位长度
    if depth == 0:
        forward(length)
    else:
        f(length/3,depth-1)
        right(60)
        f(length/3,depth-1)
        right(120)
        f(length/3,depth-1)
        right(60)
        f(length/3,depth-1)
    
#f(500,4)

import turtle
#///查看模块中的方法
#print (dir(turtle))
#['Canvas', 'Pen', 'RawPen', 'RawTurtle', 'Screen', 'ScrolledCanvas', 'Shape', 'TK', 'TNavigator', 'TPen', 'Tbuffer', 'Terminator', 'Turtle', 'TurtleGraphicsError', 'TurtleScreen', 'TurtleScreenBase', 'Vec2D', '_CFG', '_LANGUAGE', '_Root', '_Screen', '_TurtleImage', '__all__', '__builtins__', '__cached__', '__doc__', '__file__', '__forwardmethods', '__initializing__', '__loader__', '__methodDict', '__methods', '__name__', '__package__', '__stringBody', '_alias_list', '_getpen', '_getscreen', '_screen_docrevise', '_tg_classes', '_tg_screen_functions', '_tg_turtle_functions', '_tg_utilities', '_turtle_docrevise', '_ver', 'addshape', 'back', 'backward', 'begin_fill', 'begin_poly', 'bgcolor', 'bgpic', 'bk', 'bye', 'circle', 'clear', 'clearscreen', 'clearstamp', 'clearstamps', 'clone', 'color', 'colormode', 'config_dict', 'deepcopy', 'defstr', 'degrees', 'delay', 'distance', 'done', 'dot', 'down', 'end_fill', 'end_poly', 'exitonclick', 'fd', 'fillcolor', 'filling', 'forward', 'get_poly', 'get_shapepoly', 'getcanvas', 'getmethparlist', 'getpen', 'getscreen', 'getshapes', 'getturtle', 'goto', 'heading', 'hideturtle', 'home', 'ht', 'inspect', 'isdown', 'isfile', 'isvisible', 'join', 'left', 'listen', 'lt', 'mainloop', 'math', 'methodname', 'mode', 'numinput', 'onclick', 'ondrag', 'onkey', 'onkeypress', 'onkeyrelease', 'onrelease', 'onscreenclick', 'ontimer', 'pd', 'pen', 'pencolor', 'pendown', 'pensize', 'penup', 'pl1', 'pl2', 'pos', 'position', 'pu', 'radians', 'read_docstrings', 'readconfig', 'register_shape', 'reset', 'resetscreen', 'resizemode', 'right', 'rt', 'screensize', 'seth', 'setheading', 'setpos', 'setposition', 'settiltangle', 'setundobuffer', 'setup', 'setworldcoordinates', 'setx', 'sety', 'shape', 'shapesize', 'shapetransform', 'shearfactor', 'showturtle', 'simpledialog', 'speed', 'split', 'st', 'stamp', 'textinput', 'tilt', 'tiltangle', 'time', 'title', 'towards', 'tracer', 'turtles', 'turtlesize', 'types', 'undo', 'undobufferentries', 'up', 'update', 'width', 'window_height', 'window_width', 'write', 'write_docstringdict', 'xcor', 'ycor']

#///help()查看方法的具体解释
help(turtle.right)
"""
Help on function right in module turtle:
right(angle)
    Turn turtle right by angle units.
    
    Aliases: right | rt
    
    Argument:
    angle -- a number (integer or float)
    
    Turn turtle right by angle units. (Units are by default degrees,
    but can be set via the degrees() and radians() functions.)
    Angle orientation depends on mode. (See this.)
    
    Example:
    >>> heading()
    22.0
    >>> right(45)
    >>> heading()
    337.0
"""
