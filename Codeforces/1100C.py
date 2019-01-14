from math import pi, sin
n, r = [int(x) for x in input().split()]
print(round(r*sin(pi/n)/(1-sin(pi/n)), 7))