def squareroot(n):
    first = 0
    last = n
    range = 0.0000000001
    while (last - first) >= range:
        mid = (first + last) / 2.0;
        if abs((mid*mid) - n) <= range:
            return mid
        elif  (mid*mid)< n:
            first = mid
        else:
            last = mid 
    return mid


n = float(raw_input())
if n==0:
   print 0
if n>0 and n<1:
    s =  squareroot(n*100) / 10
    print s
    print (s*s - n)
else:
    print(squareroot(n))
    print (squareroot(n)*squareroot(n) - n)