#include <stdio.h>
void main() {
    int a = 3, b = 4, c = 5;

    // Type - 1: Triangle possible or not

    // if(a+b > c && b+c > a && c+a > b) { printf("Valid Triangle"); }
    // else printf("Not valid triangle");

    // Type - 2: Type of triangle
    if(a+b > c && b+c > a && c+a > b) {
        if(a == b && b == c && c == a) printf("somobahu");
        else if(a != b && b != c && a != c) printf("Bisomoobahu");
        else printf("shomo di bahu");
    }
    else printf("Not valid triangle");
}