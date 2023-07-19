fibonacci(int n) {
    if (n <= 0) {
        return 0; // Base case: fibonacci(0) is 0
    } else if (n == 1) {
        return 1; // Base case: fibonacci(1) is 1
    } else {
        // Recursive call to calculate the nth Fibonacci number
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// give e factorial function for c
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial(0) is 1
    } else {
        // Recursive call to calculate the factorial of n
        return n * factorial(n - 1);
    }
}