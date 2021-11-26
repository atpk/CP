s=input()
s=s.split(' ')
n=0;
h=[]
for x in s:
  a=int(x)
  if a not in h:
    h.append(a)
    n+=1
print(4-n)