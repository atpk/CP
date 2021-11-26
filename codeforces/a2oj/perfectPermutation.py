a=input()
s=''
l=int(a)
if l%2==0:
  for x in range(1,l+1,2):
    s=s+str(x+1)+' '+str(x)+' '
else:
  s='-1'
print(s)