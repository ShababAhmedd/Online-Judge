n, k = map(int, input().split())
#print(n,k)

a = list(map(int, input().split()))
#print(a)

for i in range(k):
  for i in range(1,len(a)):
    a[i-1] = a[i]
  a[len(a)-1] = 0

for i in a:
  print(i, end =' ')
