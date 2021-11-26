n=int(input())
s=input()
s=s.split(" ")
ma=1000
l=-1
for x in range(n-1):
  a=int(s[x])
  b=int(s[x+1])
  d=abs(a-b)
  if d<ma:
    ma=d
    l=x
d=abs(int(s[0])-int(s[n-1]))
if d<ma:
  print(n,1)
else:
  print(l+1,l+2)