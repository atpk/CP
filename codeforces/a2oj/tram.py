n=int(input())
su=0
ma=0
for x in range(0,n):
  s=input()
  s=s.split(' ')
  su=su-int(s[0])+int(s[1])
  if ma<su:
    ma=su
print(ma)