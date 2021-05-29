def modpower(x,y,mod):
    ans = 1
    x = x % mod
    while y:
        if ((y & 1) == 1) :
            ans = (ans * x) % mod
        y = y >> 1  
        x = (x * x) % mod
    return ans


T=int(input())
for tt in range(1,T+1):
    N,K=[int(x) for x in input().split()]
    S=input()
    copyS=list(S)
    total=0
    MOD=10**9 +7
    middle=(N+1)//2
    for i in range(0,middle):
        available=min(ord(copyS[i])-ord('a'),K)
        total+= (available*modpower(K,middle-i-1,MOD))%MOD
        copyS[N-i-1]=copyS[i]
    x=''
    for i in copyS:
        x=x+i
    if x<S:
        total+=1
        total%=MOD
    print("Case #{}:".format(tt),total%MOD)
