s=input()
f=0
for x in s:
  if x=='H' or x=='Q' or x=='9':
    f=1
    break
if f==1:
  print("YES")
else:
  print("NO")