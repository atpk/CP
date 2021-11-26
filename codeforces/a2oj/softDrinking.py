s=input()
s=s.split(' ')
n=int(s[0])
k=int(s[1])
l=int(s[2])
c=int(s[3])
d=int(s[4])
p=int(s[5])
nl=int(s[6])
np=int(s[7])
x=(k*l)//nl
y=c*d
z=p//np
a=min(x,y,z)//n
print(a)