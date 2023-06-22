# GCD-LCM-Calculator

The code uses recursive functions in C to find the Greatest Common Divisor (GCD) and Least Common Multiple (LCM) of two numbers.
Here's how the code works:
The recursiveGCD function takes two integers, num1 and num2, as parameters. It uses the Euclidean algorithm to find the GCD of the two numbers.
Inside the recursiveGCD function, it checks if num2 is equal to 0. If it is, then it returns num1 as the GCD.
If num2 is not 0, it recursively calls the recursiveGCD function with num2 as the new num1 and num1 % num2 as the new num2. This step is repeated until num2 becomes 0.
The recursiveLCM function takes two integers, num1 and num2, as parameters. It uses a static variable, lcm, to find the LCM of the two numbers.
Inside the recursiveLCM function, it checks if lcm is divisible by both num1 and num2. If it is, then it returns lcm as the LCM.
If lcm is not divisible by num1 and num2, it increments lcm by one and recursively calls the recursiveLCM function with the same num1 and num2 values.
The primary function prompts the user to enter and store two numbers in the num1 and num2 variables.
It then calls the recursiveGCD function with num1 and num2 to calculate the GCD and stores the result in the `gcd.
