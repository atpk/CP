n=int(input())
s=input()
s=s.split(" ")
a=[]
tot=0
for x in s:
  a.append(int(x))
  tot+=int(x)
for x in range(-7,0):
  if a[x]>0:
    l=8+x
n=n%tot
if n==0:
  print(l)
else:
  for x in range(7):
    if n<=a[x]:
      print(x+1)
      break
    else:
      n=n-a[x]