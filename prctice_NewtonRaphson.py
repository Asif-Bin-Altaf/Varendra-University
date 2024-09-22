def fun(x):
    return x**3-x-1


def dfun(x):
    return 3*(x)**2-1


def Newton_Raphson(a):
    x=a
    while abs(fun(x)-0)>0.001:
        x=x-(fun(x)/dfun(x))
    return x


c=Newton_Raphson(0)
print(f"{c:.3f}")