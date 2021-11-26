s=input()
s=s.split(' ')
n=int(s[0])
m=int(s[1])
s=input()
s=s.split(' ')
l=0
ma=0
k=0
for x in range(n):
  k=int(s[x])//m
  if int(s[x])%m != 0:
    k+=1
  if k>=ma:
    ma=k
    l=x
print(l+1)