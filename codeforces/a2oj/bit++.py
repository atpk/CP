n=int(input())
sol=0
for x in range(0,n):
  s=input()
  if '+' in s:
    sol+=1
  elif '-' in s:
    sol-=1
print(sol)