s = input()
stack = []
c = 0
for i in range(len(s)):
    if len(stack) == 0 or s[i] != stack[-1]:
        stack.append(s[i])
    else:
        stack.pop()
        c += 1
print("YES" if c % 2 else "NO")