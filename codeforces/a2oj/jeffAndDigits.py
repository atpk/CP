n=int(input())
s=input()
s=s.split(' ')
z=0
f=0
for x in s:
  if x=='5':
    f+=1
  else:
    z+=1
if f>=9:
  f=f//9
  l=''
  for x in range(f):
    for i in range(9):
      l=l+'5'
  if z==0:
    l='-1'
  else:
    for x in range(z):
      l=l+'0'
  print(l)
elif z>0:
  print(0)
else:
  print(-1)