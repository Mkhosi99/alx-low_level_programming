import random
import ctypes

cps = ctypes.CDLL('./100-operations.so')
m = random.randint(-111, 111)
k = random.randint(-111, 111)
print("{} + {} = {}".format(m, k, cps.add(m, k)))
print("{} - {} = {}".format(m, k, cps.sub(m, k)))
print("{} x {} = {}".format(m, k, cps.mul(m, k)))
print("{} / {} = {}".format(m, k, cps.div(m, k)))
print("{} % {} = {}".format(m, k, cps.mod(m, k)))
