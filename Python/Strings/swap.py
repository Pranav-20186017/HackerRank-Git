def swap_case(s):
    ans = ""
    for i in s:
        if i.islower():
            ans += i.upper()
        elif i.isupper():
            ans += i.lower()
        else:
            ans += i
    return ans