#include <stdio.h>
void main() {
    char ch = 'M'; // 77

    // Type 1 : Uppercase, Lowercase, Digit and Others

    // if(ch >= 65 && ch <=90) {
    //     printf("Uppercase\n");
    // } else if(ch >=97 && ch <= 122) {
    //     printf("Lowercase");
    // } else if(ch >=48 && ch <=57) {
    //     printf("Digit");
    // } else {
    //     printf("Others");
    // }

    // Type 2 : Alphabet, Digit and Others

    // if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
    //     printf("Alphabet\n");
    // } else if(ch >= '0' && ch <= '9') {
    //     printf("Digit");
    // } else {
    //     printf("Others");
    // }

    // Type 3 : Vowel or Consotant, Digit and Others
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel");
        } else { printf("Consonant"); }
    } else if(ch >= '0' && ch <= '9') {
        printf("Digit");
    } else {
        printf("Others");
    }
}