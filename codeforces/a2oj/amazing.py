n=int(input())
s=input()
s=s.split(' ')
ma=int(s[0])
mi=ma
total=0
for x in range(1,n):
  a=int(s[x])
  if ma < a:
    ma=a
    total=total+1
  if mi > a:
    mi=a
    total=total+1
print(total)