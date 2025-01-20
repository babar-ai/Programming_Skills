#Lagged Fibonacci Generator
#additive LFG

def lagged_fibonacci_generator(n, m, j, k):
    X = []

    # Get initial
    print(f"Please enter {max(j, k)} random numbers for initialization:")
    for i in range(max(j, k)):
        num = int(input(f"Enter number {i + 1}: "))
        X.append(num)

    # Generate n random numbers
    for i in range(n):
        next_value = (X[i - j] + X[i - k]) % m  # Lagged Fibonacci formula
        X.append(next_value)  # Store the next value in the list

    return X[max(j, k):]  # Return only the generated random numbers, excluding the initial input

# Parameters
n = 10  # Total numbers to generate
m = 100  # Modulus (defines the range)
j = 3  # Lag index j
k = 5  # Lag index k

# Run the Lagged Fibonacci Generator
random_numbers = lagged_fibonacci_generator(n, m, j, k)
print("Generated random numbers:", random_numbers)

    
    
    