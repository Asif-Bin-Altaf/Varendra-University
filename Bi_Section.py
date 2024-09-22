def fun(x):
    return x**3-x-1

def bi_sectio(a,b):
    if (fun(a)*fun(b))>0:
        print("We assume wrong a,b")
        return
    while(abs(b-a)>=0.001):
        c=(a+b)/2
        if(fun(c)==0.000):
            return c
        elif fun(a)*fun(c)>0 :
            a=c
        else:
            b=c
    return c

x=1
y=2
c=bi_sectio(x,y)
print(f"Root is {c:.3f}")
