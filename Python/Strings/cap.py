def solve(s):
    space = " "
    if space not in s:
        return s
    else:
        l = s.split(" ")
        ans = ""
        for i in l:
            temp = i
            k = ""
            for j in range(0,len(temp)):
                if j == 0:
                    k += temp[j].upper()
                else:
                    k+= temp[j]
            ans = ans + k + " "
        return ans