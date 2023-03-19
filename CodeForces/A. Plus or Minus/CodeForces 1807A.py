def plus_or_minus(a, b, c):
  
  if a + b == c:
    return "+"
  else:
    return "-"
 
 
t = int(input())
 
for i in range(t):
  x = input().split()
  a, b, c = map(int, x)
  print(plus_or_minus(a, b, c))
