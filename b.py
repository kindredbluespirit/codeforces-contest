t = int(input())

for _ in range(t):

    n = int(input())
    l = []
    for _ in range(n):
        s = input()
        p = s.find('#') + 1
        l = [p] + l
    
    print(' '.join(str(p) for p in l))
