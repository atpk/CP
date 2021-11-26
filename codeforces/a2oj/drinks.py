n=int(input())
sum=0
string=input()
string=string.split(" ")
for x in string:
  sum=sum+int(x)
s=sum/n
print(round(s,4))