import time
import random

def karatsuba(x, y):
    
    """
        multiplica dois inteiros usando o algoritmo de karatsuba
    """
    
   
    if x < 10 or y < 10:
    #caso base 
        return x * y

    sx, sy = str(x), str(y)
    n = max(len(sx), len(sy))

   #zeros à esquerda
    sx = sx.rjust(n, "0")
    sy = sy.rjust(n, "0")

    m = n // 2

    x_high = int(sx[:-m])
    x_low  = int(sx[-m:])
    y_high = int(sy[:-m])
    y_low  = int(sy[-m:])

    z0 = karatsuba(x_low, y_low)
    z1 = karatsuba(x_low + x_high, y_low + y_high)
    z2 = karatsuba(x_high, y_high)

    return z2 * 10**(2*m) + (z1 - z2 - z0) * 10**m + z0



def measure_time(fun, a, b):
    """
    mede o tempo de execução de uma funçao:
    """
    start = time.perf_counter()
    result = fun(a, b)
    end = time.perf_counter()
    return result, end - start


    """
    example 1 test:
    """
pairs_one = [
    (1234, 5678),
    (11111111, 22222222),
    (12345678, 87654321)
]

print("\n====== exercise one ======\n")
for a, b in pairs_one:
    result = karatsuba(a, b)
    print(f"\nUsing the algortihm: {a} * {b} = {result}")
    print(f"\nUsing the simple method: {a * b}")
   
   
    """
    exercise 2 test
    """
pairs_two = [
    (123, 456789),
    (12345, 678),
    (123456, 78901234)
]

print("\n====== exercise two ======\n")
for a, b in pairs_two:
    r = karatsuba(a, b)
    print(f"\nUsing the algortihm: {a} * {b} = {result}")
    print(f"\nUsing the simple method: {a * b}")
   


    """
    exercise 3 performance
    """
def generating(d):
    return random.randint(10**(d-1), 10**d - 1)

print("\n====== exercise three - performance ======\n")

for d in [10, 50, 100]:
    a, b = generating(d), generating(d)

    """
    Usando o algoritmo:
    """
    _, karatsuba_time = measure_time(karatsuba, a, b)

    """
    Multiplicacao normal
    """
    start = time.perf_counter()
    _ = a * b
    normal_time = time.perf_counter() - start

    print(f"--> {d} digits in total:")
    print(f"With Karatsuba:     {karatsuba_time:.8f} seconds")
    print(f"With Simple Multiplication: {normal_time:.8f} seconds\n")
