def judge_score(name,score):
    if 0<=score<=100 :
        if score >= 90:
            result = "A"
        elif score >= 60:
            result = "B"
        else:
            result = "C"
        print ('%s : %s, score= %s' % (name,result,score))
    else :
        print ("error score,pleas write again!!!")

judge_score('Tim',89.5)