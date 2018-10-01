from itertools import permutations
string = input().split(" ")
list_str = list(string[0])
tuple_str = sorted(list(permutations(list_str,int(string[1]))))
for i in tuple_str:
    temp =""
    for j in range(0,len(i)):
        temp += i[j]
    print(temp)
