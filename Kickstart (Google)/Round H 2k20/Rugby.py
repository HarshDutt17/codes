T=int(input())
for tt in range(1,T+1):
    N=int(input())
    X=[]
    Y=[]
    for i in range(N):
        N-=1
        xi,yi=[int(x) for x in input().split()]
        X.append(xi)
        Y.append(yi)
    X.sort()
    for i in range(0,n):
        X[i]-=i
    X.sort()
    Y.sort()
    xmid=X[N//2]
    ymid=Y[N//2]
    ans=0
    for j in Y:
       ans+=abs(ymid-j)
    #print(ydist)
    for k in X:
        ans+= abs(xmid - k)
            
    print("Case #{}:".format(tt),ans)
