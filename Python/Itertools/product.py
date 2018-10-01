from itertools import product
# A = [1,2]
# B = [3,4]
# C = (list(product(A,B)))
A = input().split(" ")
B = input().split(" ")
for i in range(0,len(A)):
    A[i] = int(A[i])
for i in range(0,len(B)):
    B[i] = int(B[i])
C = (list(product(A,B)))
for i in C:
    print(i,"",end ='')
