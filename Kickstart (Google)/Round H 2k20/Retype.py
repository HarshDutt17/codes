T=int(input())
for i in range(1,T+1):
    N,K,S=[int(x) for x in input().split()]
    option1= K-1 + N+1
    option2= K-1 + (K-S) + (N-S + 1)
    print("Case #{}:".format(i),min(option1,option2))
