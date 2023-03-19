def grab_the_candies(a_i):
  mihai = 0
  bianca = 0
  a_i.sort()
  
  for i in a_i:
    if i % 2 == 0:
      mihai += i
    else:
      bianca += i
 
  if mihai > bianca:
    return "YES" 
  else:
    return "NO" 
 
t = int(input())
 
for i in range(t):
  n = int(input())     # number of bags.
  x = input().split()
  a_i = list(map(int, x))
  #print(a_i)
  print(grab_the_candies(a_i))
