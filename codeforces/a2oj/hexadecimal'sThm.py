n=int(input())
a=0
b=1
c=1
x=2
while x<n:
  x=x+c
  a=b
  b=c
  c=x-b
if n==0:
  print(0,0,0)
elif n==1:
  print(0,0,1)
else: 
  print(a,b,b)