n=int(input("Enter number of terms: "))
t1=0
t2=1
nxt=t1+t2
if(n==0):
    print(0)
else:
    i=3
    while(i<n):
        t1=t2
        t2=nxt
        nxt=t1+t2
        i+=1
    print(nxt)