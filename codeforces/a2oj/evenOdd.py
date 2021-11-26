s=input()
s=s.split(" ")
n=int(s[0])
k=int(s[1])
m=n//2
if n%2==1:
  m+=1
if k<=m:
  print(2*k-1)
else:
  k=k-m
  print(2*k)