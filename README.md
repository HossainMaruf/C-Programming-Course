# C Programming Course (According to Playlist and Code)

## Basic Input Output
- Course Introduction, History and Applications
- Generation and Levels of Programming Language
- Translator Program (Assembler, Compiler, Interpreter)
- Environment Setup (CodeBlocks)
- Environment Setup (VScode + GCC Compiler)
- Structure of a C Program
- `Hello World` the first program with `printf()` - `HelloWorld.c`
- Commenting (Single Line and Multiline) - `Commenting.c`
- Backslash Constant (`\n` and `\t`) - `BackslashConstant.c` 
- Data Types (`int`, `float`, `double`, `char`, `bool`, `void`, `struct` etc)
- Format Specifier (`%d`, `%f`, `%lf` etc) - `FormatSpecifier.c`
- Arithmetic Operator Example (`+`, `-`, `*`, `/`, `%`) - `BasicArithmatic.c`
- Identifier Theory and Types
- Variable and Rules of Identifiers - `IdentifierRules.c`
- Advanced Variable Concept - `VariableAdvanced.c`
- Arithmetic Program with Variable and Format Specifier - `VariableANDArithmatic.c` 
- Constant - `Constant.c`
- Why we use Header File like `stdio.h`
- Taking User Input from Keyboard with `scanf()` - `Input.c`

## Arithmetic Problem
- Diameter, Circumference and area of a circle - `Circle.c`
- Diameter, Surface area and volume of a sphere - `Sphere.c`
- Celcius to Fahrenheit and vice versa - `Temperature.c`
- Swap two number with temporary variable - `swapValue.c`
- Swap two number without temporary variable - `swapWithoutTemp.c`

## Operators
- Operators (Assignment, Arithmetic, Relational, Logical, Increment/Decrement, Bitwise, Conditional, Special)
- Relational Operator (`<`, `<=`, `>`, `>=`, `==`, `!=`) - `Relational.c`
- Logical Operator (`||`, `&&`, `!`) - `Logical.c`
- Relational Operators with Logical Operators - `RelationalLogical.c`
- Increment/Decrement Operator - `IncrementDecrement.c`
- Conditional Operator - `Conditional.c`
- `sizeof` operator for getting data size - `sizeof.c`
- (HW) Triangle Area using 3 Sides
- (HW) Perimeter and area of a Square using side

## Control Statement
- `Control Statement` Theory, Types and Simple Condition - `if.c`
- `if else` Theory - `ifElse.c`
- Greater/Smaller between two numbers `using if else ladder` - `LadderTwoNumbers.c`
- Greatest/Smallest among three numbers `using logical operator` - `LadderThreeNumbers.c`
- `Nested if else` idea - `NestedThreeNumbers.c`
- Even/Odd and Divisibility Checking of a number - `EvenOddDivisibility.c`
- Leap year or not using Ladder and Logical Operator - `LeapYear.c`
- `char` data type - `char.c`
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
- Calculate string length using loop - `strLength.c`
- Compare two string - `stringCompare.c`
- Copy string - `StringCopy.c`

## Function
- Theory, Concept, Types, Necessity and Syntax
- Recursion (Recursive Function)

## Pointer
- Pointer Theory and Why Pointer - `Basic.c`
- Pointer Arithmetic 
- `const int*` vs `int* const` vs `const int* const`

## Structure
- Theory and Memory Allocation
- Basic idea and string field - `Employee.c`
- Multiple struct variable - `EmployeeMultiple.c`
- Array of struct - `EmployeeArray.c`
- Array Fields and Taking keyboard input - `StudentArrayField.c`
- Complete Example - `StudentRecords.c`
- Deep copy of data - `MarketDeepCopy.c`
- Call By Value VS Call By Reference of structure - `SchoolData.c`
- Complex Number Structure - `Complex.c`
- Size of structure - `StructureSize.c`
- Bit Fields - `BitFields.c`

## Union
- Theory and Memory Allocation
- Numbers in same memory location - `Numbers.c`


## Enumeration
- 

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