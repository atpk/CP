s=input()
f=0
if len(s)<2:
  if s[0]=='1':
    print("YES")
  else:
    print("NO")
  exit()
if s[0]!='1' or (s[1]!='1' and s[1]!='4'):
  f=1
  print('NO')
  exit()
for i in range(2,len(s)):
  if s[i]=='1':
    continue
  elif s[i]=='4':
    if s[i-1]=='1' or s[i-2]=='1':
      continue
    else:
      f=1
  else:
    f=1
if f==0:
  print('YES')
else:
  print('NO')