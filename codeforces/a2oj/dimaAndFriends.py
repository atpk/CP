n=int(input())
s=input()
s=s.split(' ')
k=0
for x in s:
  k=k+int(x)
n=n+1
k=k%n
total=0
for i in range(5):
  t=k+i+1
  t=t%n
  if(t!=1):
    total=total+1
print(total)