def move(n, a, b, c):
    if n == 1:
        print('move', a, '-->', c)
        return 0
    else:
        move(n-1, a, c, b)  # (开始柱--->中转柱)
        move(1, a, b, c)  # (开始柱--->目标柱)
        move(n-1, b, a, c)  # (中转柱--->目标柱)
# 2^n -1
move(3, 'A', 'B', 'C')
