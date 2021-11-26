import math
k=int(input())
l=int(input())
m=int(input())
n=int(input())
d=int(input())
i=0
def lcm(n1,n2):
  gcd = math.gcd(n1,n2)
  result = (n1*n2)/gcd
  return int(result)
a=lcm(k,l)
a=lcm(a,m)
a=lcm(a,n)
for x in range(1,a+1):
  if x%k==0 or x%l==0 or x%m==0 or x%n==0:
    i=i+1
total=(d//a)*i
d=d%a
for x in range(1,d+1):
  if x%k==0 or x%l==0 or x%m==0 or x%n==0:
    total=total+1
print(total)