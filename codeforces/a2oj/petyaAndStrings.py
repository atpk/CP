a=input()
b=input()
a=a.lower()
b=b.lower()
f=0
for i in range(0,len(a)):
  if a[i]<b[i]:
    f=-1
    break
  elif a[i]>b[i]:
    f=1
    break
print(f)