import math
s=input()
s=s.split(' ')
xy=int(s[0])
yz=int(s[1])
zx=int(s[2])
zz=int(yz*zx/xy)
z=int(math.sqrt(zz))
y=int(yz/z)
x=int(xy/y)
print((x+y+z)*4)