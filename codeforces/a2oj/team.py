n=int(input())
sol=0
for x in range(0,n):
  s=input()
  s=s.split(' ')
  a=0
  for i in s:
    if i=='1':
      a+=1
  if a>1:
    sol+=1
print(sol)