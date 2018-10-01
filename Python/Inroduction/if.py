#!/bin/python3
def is_weird(N):
    if (N%2!=0) or (N%2==0 and N>=6 and N<=20):
        return "Weird"
    if(N%2==0 and N>=2 and N<=5) or (N%2==0 and N>20):
        return "Not Weird"
N = int(input())
print(is_weird(N))

