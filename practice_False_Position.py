def fun(x):
    return x**3+x**2+x+7

def bi_section(a,b):
    if (fun(a)*fun(b))>0:
        print("We assume wrong a,b")
        return 0
    while(abs(b-a)>=0.001):
        c=(fun(b)*a-fun(a)*b)/(fun(b)-fun(a))
        if(fun(c)==0):
            return c
        elif (fun(a)*fun(c))<0:
            b=c
        else:
            a=c
    return c

x=bi_section(-2,-3)
print(f"Root is {x:.3f}")
