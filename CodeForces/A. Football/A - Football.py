n = input()
sum_0 = 0
sum_1 = 0
flag = False
 
for i in range(len(n)):
 
  if n[i] == "1":
    sum_1 += 1    
    
    if sum_1 == 7:
      flag = True
      print("YES")
      break
    else:
      sum_0 = 0
  
  if n[i] == "0":
    sum_0 += 1
    
    if sum_0 == 7:
      print("YES")
      flag = True
      break
    else:
      sum_1 = 0
 
if flag == False:
  print("NO")
