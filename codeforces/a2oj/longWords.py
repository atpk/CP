n=int(input())
for x in range(n):
  s=input()
  a=len(s)
  if a > 10:
    print(s[0]+str(a-2)+s[a-1])
  else:
    print(s)