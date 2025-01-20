
#BABAR RAHEEM 

def congruential_generator(a, seed, c, m, n):
    
    X = []
    X.append(seed)  # Initial seed value
    
    for i in range(1, n):  # Run n iterations for random numbers
        next_value = (a * X[i - 1] + c) % m  # LCG formula
        X.append(next_value)
        
    return X

# Parameters
a = 4      # Multiplier
c = 1      # Increment
m = 2**32  # Modulus (defines the range of values) take the value of m in 2 power to avoid repetation 
seed = 5   # Initial seed value
n = 10     # Number of random values to generate

random_num = congruential_generator(a, seed, c, m, n)
print(random_num)

        
    