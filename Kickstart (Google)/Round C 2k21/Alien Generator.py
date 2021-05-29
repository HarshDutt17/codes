T=int(input())
for tt  in range(1,T+1):
    G=int(input())
    a=1
    possible=0
    G2=2*G
    while a*a <= G2 :
        if G2%a==0:
            b=G2//a
            if a%2!=b%2:
                n=(a+b-1)//2
                k=(b-a-1)//2
                if (n-k)*(n+k+1) == G2:
                    possible+=1
        a+=1
    print("Case #{}:".format(tt),possible)
