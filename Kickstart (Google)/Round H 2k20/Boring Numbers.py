
def boringno(x):
    y=str(x)
    D=len(y)
    numbers= 5*(5**(D-1) - 1)//4
    
    # print(numbers)
    for i in range(D):
        # print(i)
        significant=int(y[i])
        if (i+1)%2==(int(y[i])%2):
            numbers+= ((significant//2)*(5**(D-i-1)))
            if i==D-1:
                numbers+=1
        else:
            if significant%2==0:
                numbers+= ((significant//2)*(5**(D-i-1)))
            else:
                numbers+= ((significant//2 + 1)*(5**(D-i-1)))
            break
        # print(numbers)
    # print(x, numbers)    
    return numbers
    

T=int(input())
for i in range(1,T+1):
    L,R=[int(x) for x in input().split()]
    ans= boringno(R)-boringno(L-1)
    print("Case #{}:".format(i),ans)
