import random
import functools
l1 = []
for i in range(5):
    l1.append(random.uniform(1.0, 10.0))


def cmp(x): return -x


print(sorted(l1, key=cmp))
