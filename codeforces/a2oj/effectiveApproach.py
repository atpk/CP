n=int(input())
s=input()
s=s.split(' ')
m=int(input())
v=0
p=0
b=input()
b=b.split(' ')
for x in range(0,m):
  a=int(b[x])
  for i in range(0,n):
    if a==int(s[i]):
      v=v+i+1
      p=p+n-i
print(str(v)+' '+str(p))