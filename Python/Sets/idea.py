n = input()
m = input().split(" ")
p = list(map(int, m))
r = input().split(" ")
A = set(map(int,r))
s = input().split(" ")
B = set(map(int, s))
happy = 0
for i in p:
    if i in B:
        happy = happy -1
    if i in A:
        happy = happy + 1
print(happy)