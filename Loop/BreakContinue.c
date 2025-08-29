#include <stdio.h>
void main() {
    for(int i=1; i<=10; i++) {
        if(i == 5 || i == 10) {
            printf("%d\n", i);
        } else {
            continue;
        }
        printf("Bangladesh\n");
    }
}