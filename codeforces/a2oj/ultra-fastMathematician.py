a=input()
b=input()
l=len(a)
if(a[0]==b[0]):
  s='0'
else:
  s='1'
for x in range(1,l):
  if(a[x]==b[x]):
    s=s+'0'
  else:
    s=s+'1'
print(s)