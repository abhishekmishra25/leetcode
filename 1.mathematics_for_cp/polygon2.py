q1=[]
n=int(input())
q=[[0 for i in range(n)] for j in range(n)]
for i in range(n):
    q3=list(map(int,input().split()))
    for j in q3:
        q[i][j-1]=1
       

  a,b=map(int,input().split())
    a-=1
 b-=1
def qwe(nn,q3,cout):
    for i in range(n):
        if q[nn][i]==1:
            if i==b:
                q1.append(cout+1)
            q[nn][i]=0
            qwe(i,q3,cout+1)
            q[nn][i]=1
qwe(a,q,0)
if len(q1)==0:
    print(-1)
else:
    print(min(q1))