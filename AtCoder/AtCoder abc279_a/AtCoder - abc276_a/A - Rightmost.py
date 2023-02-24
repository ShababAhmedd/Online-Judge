s = input()
no = 0
idx = 0

for i in s:
  no += 1
  if i == "a":
    idx = no

if idx == 0:
  idx = -1

#print(no)
print(idx)
