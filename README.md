# C Programming Course (According to Playlist and Code)

## Basic Input Output
- Course Introduction, History and Applications
- Generation and Levels of Programming Language
- Translator Program (Assembler, Compiler, Interpreter)
- Environment Setup (CodeBlocks)
- Environment Setup (VScode + GCC Compiler)
- Structure of a C Program
- `Hello World` the first program with `printf()`
- Commenting (Single Line and Multiline)
- Backslash Constant (`\n` and `\t`)
- Data Types (`int`, `float`, `double`, `char`, `bool`, `void`, `struct` etc)
- Format Specifier (`%d`, `%f`, `%lf` etc)
- Arithmetic Operator Example (`+`, `-`, `*`, `/`, `%`)
- Identifier Theory and Types
- Variable and Rules of Identifiers
- Advanced Variable Concept
- Arithmetic Program with Variable and Format Specifier
- Constant
- Taking User Input from Keyboard with `scanf()`
- Why we use Header File like `stdio.h`

## Arithmetic Problem
- Diameter, Circumference and area of a circle - `Circle.c`
- Diameter, Surface area and volume of a sphere - `Sphere.c`
- Celcius to Fahrenheit and vice versa - `Temperature.c`

## Operators
- Operators (Assignment, Arithmetic, Relational, Logical, Increment/Decrement, Bitwise, Conditional, Special)
- Relational Operator (`<`, `<=`, `>`, `>=`, `==`, `!=`) - `Relational.c`
- Logical Operator (`||`, `&&`, `!`) - `Logical.c`
- Relational Operators with Logical Operators - `RelationalLogical.c`
- Increment/Decrement Operator - `IncrementDecrement.c`
- Conditional Operator - `Conditional.c`
- `sizeof` operator for getting data size - `sizeof.c`
- Swap two number with temporary variable - `swapValue.c`
- Swap two number without temporary variable - `swapWithoutTemp.c`
- (HW) Triangle Area using 3 Sides
- (HW) Perimeter and area of a Square using side

## Conditional Control Statement
- `Control Statement` Theory
- `if else` Theory
- Greater/Smaller between two numbers `using if else ladder`
- Greatest/Smallest among three numbers `using logical operator & nested if else`
- Conditional Operator
- Even/Odd and Divisibility Checking of a number
- Leap year or not
- `char` data type
- A character alphabet, digit or special char + Vowel Consonant problem 
- Take input day number and print day name
- Number of notes in given amount in tk
- Take sides of triangle and check the triangle valid or not + Check it is equilateral, isosceles or scalene triangle.
- Find roots of quadratic equation 
- Calculate grade and gpa based on marks
- (HW) Number is Positive, Negative or Zero
- (HW) Character is uppercase or lowercase
- (HW) Take  input month number and print month name
- (HW) Take angles of triangle and check the triangle valid or not
- (HW) Calculate profit and loss problem


## Loop Control Statement
- `for` loop Theory
- Print statement of n times and `gcc` std compilation `-std=c89 -std=c90 -std=c99 -std=c11` flag and multiple variable - `for.c`
- Print natural/even/odd number from 1 to n and n to 1 - `EvenOddNatural.c`
- Sum of natural/even/odd number from 1 to n - `SumEvenOddNatural.c`
- Calculate Factorial using loop - `factorial.c`
- Print all ASCII char - `ASCII.c`
- `break` and `continue` statement in loop - `BreakContinue.c`
- Calcualte LCM of two Integer Number - `lcm.c`
- Calcualte GCD/HCF of two Integer Number - `gcd.c`
- Check a number prime or not - `prime.c` 
- Print fibonacci series of first nth term - `fibonacci.c`
- `while` loop theory
- Print the digits of a number, count and sum them - `numberDigits.c`
- Get first and last digit of a number and sum them - `sumFirstLastDigit.c`
- Swap fist and last digit of a number - `swapFirstLastDigit.c`
- Reverse a number and check palindome or not - `palindromeNumber.c`
- `do while` loop theory
- Entry Controlled and Exit Controlled Loop with `do VS do while`
- `Nested for` loop concept
- Print all prime numbers between 1 to n
- Prime all prime factors of a number
- Print all perfect numbers between 1 to n
- Print all strong numbers between 1 to n
- Print all armostrong numbers between 1 to n
- (HW) Print Multiplication Table
- (HW) Print a-z and A-Z
- (HW) Print multiplication of digits of a number
- (HW) Print frequency of each digit of a number

## Array and String
- Array Syntax, Declaration, Assignment and print result (c89/c90 Staic and c99/c11 Dynamic)
- Loop and Array the perfect bonding (Generally `for` loop)
- char array and `String Terminating \0` concept - `charArray.c`
- char array initializer list - `charArrayInitializer.c`
- `char[] or string` data type concept using "" with free `\0` - `string.c`
- `string literal` concept and `char[]` vs `char*` - `stringLiteral.c`

## Pointer
- Pointer Theory and Why Pointer
- Pointer Arithmetic 
- `const int*` vs `int* const` vs `const int* const`

## Function
- Theory of Concept, Types, Necessity and Syntax
- Recursion (Recursive Function)

## File Handling
- Theory with `fopen()`, `fclose()` and mode of file opening
- Read char by char using `fgetc()` function - `fgetc.c`
- Read full file using `fgetc()` and `while` loop until `EOF(End of File)` - `ReadFile.c`
- Reset file pointer using `rewind()` and get pointer position using `ftelL()` - `rewind_ftell.c`
- Skip Letter using `fseek()` and concept of `SEEK_SET`, `SEEK_END` and `SEEK_CUR` - `fseek.c`
- Calculate file size using `fseek()` and `ftell()` functions - `GettingFileSize.c`
- Read fixed size data from line to buffer using `fgets()` function and problem of this function - `fgets.c`
- Read Random Line from same length of lines from a file - `ReadRandomLine.c`
- Save and Restore file pointer using `ftell()` and `fseek()` functions - `SaveReadAndRestoreFilePointer.c`
- Read Random Line from different length of lines from a file (Generic Concept) - `ReadRandomLine2.c`
- Read formatted data using `fscanf()` function - `ReadFormattedData.c`
- Read student data using `fscanf()` and understand the loop hole to use it - `ReadStudentData.c`
- Read formattd data using `fgets()` and `sscanf()` safely instead of `fscanf()` - `ReadStdDataSafely.c`
- Write a char using `fputc()` function - `fputc.c`
- Write data using `fputs()` function - `fputs.c`
- Write formatted data using `fprintf()` function - `WriteFormattedData.c`