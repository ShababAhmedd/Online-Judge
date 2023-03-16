t = int(input())


for i in range(t):
  
  x = input().split()
  #print(x)
  a, b = map(int, x)
  #print(a, b)
  
  if a > b:
    print(">")
  
  elif a < b:
    print("<")

  elif a == b:
    print("=")
