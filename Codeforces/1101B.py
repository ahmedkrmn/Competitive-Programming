s = input()
start_bracket,end_bracket,start_col,end_col,count=-1,-1,-1,-1,0
for i in range(len(s)):
    if s[i]=='[' and start_bracket==-1:
        start_bracket = i
    if s[i]==':' and start_col ==-1 and start_bracket != -1:
        start_col = i
        break
for i in range(len(s)-1,-1,-1):
    if s[i]==']' and end_bracket==-1:
        end_bracket = i
    if s[i]==':' and end_col ==-1 and end_bracket != -1:
        end_col = i
        break
if start_bracket>=end_bracket or start_col >= end_col or start_col==-1:
    print(-1)
else:
    for i in range(start_col+1, end_col):
        if s[i]=='|':
            count+=1
    print(count+4)