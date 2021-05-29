T=int(input())
for tt  in range(1,T+1):
    G=int(input())
    a=1
    possible=0
    while a*a <= G :
        if G%a==0:
            if a!=G//a:
                if a%2==1:
                    possible+=1
                if (G//a)%2==1:
                    possible+=1
            else:
                if a%2==1:
                    possible+=1
        a+=1
    print("Case #{}:".format(tt),possible)
