n=int(input())
s=input()
s=s.split(" ")
mi=int(s[0])
i=0
f=1
for x in range(1,n):
  if int(s[x])<=mi:
    mi=int(s[x])
    i=x
for x in range(0,i):
  if int(s[x])==mi:
    f=0
if f==1:
  print(i+1)
else:
  print('Still Rozdil')