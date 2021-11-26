n=int(input())
a=[]
for x in range(n):
  s=input()
  s=s.split(' ')
  b=[None]*2
  b[0]=int(s[0])
  b[1]=int(s[1])
  a.append(b)
l=[]
r=[]
u=[]
b=[]
for x in range(n):
  l.append(0)
  r.append(0)
  u.append(0)
  b.append(0)
for x in range(n):
  for i in range(x+1,n):
    if a[x][0]==a[i][0]:
      if a[x][1]>a[i][1]:
        b[x]=1
        u[i]=1
      else:
        b[i]=1
        u[x]=1
    elif a[x][1]==a[i][1]:
      if a[x][0]>a[i][0]:
        l[x]=1
        r[i]=1
      else:
        l[i]=1
        r[x]=1
count=0
for x in range(n):
  if l[x]==1 and r[x]==1 and u[x]==1 and b[x]==1:
    count=count+1
print(count)  