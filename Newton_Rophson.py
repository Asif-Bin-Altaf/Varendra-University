def fun(x):
    return x**3-x-1

def df(x):
    return (3*(x)**2-1)

def newton_rophson(a):
    x=a
    while abs(fun(x)-0)>0.001:
        x=x-(fun(x)/df(x))
    return x

c=newton_rophson(0)
print(f"{c:.3f}")