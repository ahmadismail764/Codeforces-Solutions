import math
n, x, y = map(int, input().split())
print(math.ceil(y*n/100) - x if math.ceil(y*n/100) - x > 0 else 0)
