import sys


result = []
t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    sumOfTheSquare = (n*(n+1)*(2*n+1)//6)
    squareOftheSum = (n*(n+1)//2)**2
    result.append(squareOftheSum - sumOfTheSquare)

for i in result:
    print(i)
