t = int(input())

for i in range(t):
  moves = 0
  x = input()
  y = x.split()
  #print(y)
  a, b = map(int, y)
  #print("a:", a, "||", "b:", b)

#------------------------------------------------------------------------------------------------------

  if a > b:
    d = a - b
    #print("D:",d)    # D is the absolute value of diffence between a and b.

    if d % 2 != 0:    # This block is for the odd d.
      d += 1    # Incremented D by 1 to make it even.
      #print("D+1:", d)
      a -= d
      #print("a-d:",a)  # Now, substracting D from a.
      moves += 1
      #print("Moves_1: ", moves)
      a -= 1
      #print("a-1:",a)    # The 1 that is substracted from here is the extra 1 that was added in line 10.
      moves += 1
      #print("moves_2:", moves)
      print(moves)
    
    else:     # This block is for the even d.
      a -= d
      #print("a-d:",a)
      moves += 1
      #print("Moves_1:", moves)
      print(moves)

#------------------------------------------------------------------------------------------------------

  elif a == b: 
    #print("Moves:", moves)
    print(moves)

#------------------------------------------------------------------------------------------------------

  elif a < b:
    d = b - a
    #print("D:", d) 

    if d %2 != 0:   # Odd block
      a += d
      #print("a+d", a)
      moves += 1
      #print("Moves:", moves)
      print(moves)
    
    else:
      d += 1 # Incrementing d by 1 since even number can not be added
      #print("d+1:", d)
      a += d
      #print("a+d:", a)
      moves += 1
      #print("Moves_1:", moves)
      a -= 1
      #print("a-1:", a)    # Decrementing a by 1 since one extra 1 was added in line number 45.
      moves += 1
      #print("Moves_2:", moves)
      print(moves)
