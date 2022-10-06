sum = 0
total = 0

n = int(input())

for i in range (n):
  x = input() 
  #print(x) 
  for i in x:
    #print(i)
    if i == str(1):
      sum += 1
  
  if sum >= 2:
    sum = 0
    total += 1
    

print(total)
  
