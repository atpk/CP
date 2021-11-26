s=input()
a=[]
n=0
for x in s:
  if x not in a:
    a.append(x)
    n+=1
if n%2==0:
  print('CHAT WITH HER!')
else:
  print('IGNORE HIM!')