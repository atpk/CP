s=input()
s=s.split(' ')
n=int(s[0])
m=int(s[1])
s=input()
s=s.split(' ')
o=1
total=0
for i in range(m):
  t=int(s[i])
  if t==o:
    continue
  if t>o:
    total=total+t-o
  else:
    total=n-o+t+total
  o=t
print(total)