p = int(input())
q = input()
r = q.split(" ")
s = list(map(int,r))
a = int(input())
b = input()
c = b.split(" ")
d = list(map(int,c))
A = set(s)
B = set(d)
ans = []
for i in A:
    if i in A and i not in B:
        ans.append(i)
for i in B:
    if i in B and i not in A:
        ans.append(i)
ans.sort()
for i in ans:
    print(i)
