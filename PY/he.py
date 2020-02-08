def triangles(x):
    b=[1]
    if x == 1:
        yield 1
    if x == 2:
        for i in range(2):
            yield 1
    else:
        one.clear()
        one.append = triangles(x-1)
        yield 1
        for i in one[0:-1]:
            yield 
