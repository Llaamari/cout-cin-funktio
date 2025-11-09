# Cout, cin and functions
![C++](https://img.shields.io/badge/C++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![Qt](https://img.shields.io/badge/Qt-%23217346.svg?style=for-the-badge&logo=Qt&logoColor=white)

This project was created for a C++ programming course exercise.  
The program asks the user for two integers and calculates their sum and quotient.  
It demonstrates both direct-output functions and functions that return values.

## Description

The program:
1. Asks the user for two integers (`a` and `b`)
2. Prints the sum and quotient using the following functions:
   - `calcSum(int a, int b)` – prints the sum, returns nothing  
   - `calcDiv(int a, int b)` – prints the quotient with two decimal places, returns nothing  
3. Calls functions that **return values**:
   - `retSum(int a, int b)` – returns the sum  
   - `retDiv(int a, int b)` – returns the quotient (float) or throws a `runtime_error` if the divisor is zero  
4. Uses a `try-catch` structure for exception handling.

## Features

- Input/output using `cin` and `cout`
- Functions that **print directly** and functions that **return values**
- Exception handling with `try`–`catch`
- Output formatting using `std::setprecision()` and `fixed`
- Error handling with `std::runtime_error`

## Example Run
```
Enter two integers:
a = 10
b = 3

== Functions that print directly ==
10 + 3 = 13
10 / 3 = 3.33

== Functions that return values ==
10 + 3 = 13
10 / 3 = 3.33
```
Error example:
```
Enter two integers:
a = 10
b = 0

== Functions that print directly ==
10 + 0 = 10
Error: divisor cannot be zero!

== Functions that return values ==
10 + 0 = 10
Error: divisor cannot be zero!
```
## References
[C++ Functions](https://www.w3schools.com/cpp/cpp_functions.asp)<br>
[C++ Exceptions](https://www.w3schools.com/cpp/cpp_exceptions.asp)<br>
[std::setprecision](https://en.cppreference.com/w/cpp/io/manip/setprecision)
