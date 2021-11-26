s1=input()
s2=input()
f=0
if len(s1)!=len(s2):
  print('NO')
  exit()
n=len(s2)
s2=s2[::-1]
for i in range(n):
  if s1[i]!=s2[i]:
    f=1
    break
if f==1:
  print('NO')
else:
  print('YES')