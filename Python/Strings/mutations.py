def mutate_string(string, position, character):
    new_str = string[0:position]
    n = character + string[position+1:]
    ans = new_str + n
    return ans