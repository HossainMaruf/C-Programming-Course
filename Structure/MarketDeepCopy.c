#include <stdio.h>
#include <string.h>

struct Market {
    char name[32];
    int shopsLicenseNo[3];
};

void main() {
    struct Market m1 = {"Super Market", {3021, 2342, 1244}};
    printf("Name: %s\n", m1.name);
    printf("Shop License No: ");
    for(int i=0; i<3; i++) {
        printf("%d ", m1.shopsLicenseNo[i]);
    }
    // Now copy the market data
    struct Market m2 = m1;
    printf("\nName: %s", m2.name);
    printf("\nShop License No: ");
    for(int i=0; i<3; i++) {
        printf("%d ", m2.shopsLicenseNo[i]);
    }
    strcpy(m2.name, "Eastern Plus Market");
    m2.shopsLicenseNo[2] = 1000;
    printf("\nAfter Modification Copy data");
    printf("\nName: %s", m2.name);
    printf("\nShop License No: ");
    for(int i=0; i<3; i++) {
        printf("%d ", m2.shopsLicenseNo[i]);
    }

    printf("\nAfter Modification the main data");
    printf("\nName: %s", m1.name);
    printf("\nShop License No: ");
    for(int i=0; i<3; i++) {
        printf("%d ", m1.shopsLicenseNo[i]);
    }

}