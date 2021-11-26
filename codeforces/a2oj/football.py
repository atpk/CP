n=int(input())
a=input()
s1=1
b=''
s2=0
for i in range(n-1):
  s=input()
  if s==a:
    s1=s1+1
  else:
    b=s
    s2=s2+1
if s1>s2:
  print(a)
else:
  print(b)