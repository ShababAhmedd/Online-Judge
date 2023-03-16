def lr_summation(n):
  l_sum = 0
  for i in range(len(n)//2):      # Summation of first three digits.
      #print(n[i])
      l_sum += int(n[i])
  #print(l_sum)

  r_sum = 0
  for i in range(len(n), len(n)//2, -1):      # Summation of last three digits.
      idx = i-1
      #print(idx)
      r_sum += int(n[idx])

  return l_sum, r_sum


def verdict(l, r):
  if l == r:
    print("YES")
  else:
    print("NO")

t = int(input())

for i in range(t):
  n = input()
  l, r = lr_summation(n)
  verdict(l, r)
