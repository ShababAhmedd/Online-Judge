t = int(input())

for i in range(t):
  
  moves = 0

  n = input().split()
  x1, y1, x2, y2 = map(int, n)

  if x1 < x2:
    while x1 != x2:
      x1 += 1
      moves += 1
  
  if x1 > x2:
    while x1 != x2:
      x1 -= 1
      moves += 1
  
  if y1 < y2:
    while y1 != y2:
      y1 += 1
      moves += 1
  
  if y1 > y2:
    while y1 != y2:
      y1 -= 1
      moves += 1

  print(moves)
