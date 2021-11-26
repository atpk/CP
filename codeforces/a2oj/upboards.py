r=0
l=0
n=int(input())
for x in range(0,n):
  string=input()
  string=string.split(' ')
  if(string[0]=='0'):
    l=l+1
  if(string[1]=='0'):
    r=r+1
su=0
s=n-l
if s < l:
  su=su+s
else:
  su=su+l
s=n-r
if s < r:
  su=su+s
else:
  su=su+r
print(su)