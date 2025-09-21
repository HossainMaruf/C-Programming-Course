#include <stdio.h>
void main() {
    char ch = 'U'; // 77
    // Type 1: Uppercase, Lowercase, Digit and Others
    // if(ch >= 'A' && ch <= 'Z') printf("Uppercase");
    // else if(ch >= 'a' && ch <= 'z') printf("Lowercase");
    // else if(ch >= '0' && ch <= '9') printf("Digit");
    // else printf("Others");

    // Type 2: Alphabet, Digit and Others
    // if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) printf("Alphabet");
    // else if(ch >= '0' && ch <= '9') printf("Digit");
    // else printf("Others");

    // Type 3: Vowel Or Consonant, Digit and Others
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' 
        || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel");
        } else printf("Consonant");
    }
    else if(ch >= '0' && ch <= '9') printf("Digit");
    else printf("Others");
}