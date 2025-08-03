#include <stdio.h>
void main() {
    /**
     * Name will contain only letter, digit, underscore and dollar
     * Don't start with digit
     * Don't declare more than 1 time of a varible
     * Don't use keywords (Reserved Words) - 32 Keywords
     * main can be variable name, but it's bad practice
     */
    int number, number10, num10ber, number_, num_ber, _number, number$, num$ber, $number;
    // int 10number; // ERROR
    // int number; // ERROR
    int NUMBER;
    /**
     * OK because it's case sensitive. number and NUMBER is different from each other
     * 2 Types of case (Uppercase and Lowercase)
     * case sensitive = Upercase and Lowercase Different Thing
     */

    //  int for; // ERROR because it is keyword
    /**
     * KEYWORDS LIST:
     * int, for, double, char, if, else, for, while, do, typedef, struct, union, register, volatile, extern
     * sizeof, switch, case, break, continue, default
     */
    int FOR; // Possible because FOR is not keyword, for is keyword
    int main; // Possible but bad practice


}