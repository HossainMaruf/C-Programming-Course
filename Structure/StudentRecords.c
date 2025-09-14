#include <stdio.h>
struct Student {
    int id;
    char name[32];
    int subCodes[3];
};
void main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student st[n];
    for(int i=0; i<n; i++) {
        printf("Enter id: ");
        scanf("%d", &st[i].id);
        printf("Enter name: ");
        scanf("%s", st[i].name);
        printf("Enter subject codes: ");
        for(int j=0; j<3; j++) {
            scanf("%d", &st[i].subCodes[j]);
        }
    }
    printf("ID\tName\tSub Codes\n");
    for(int i=0; i<n; i++) {
        printf("%d\t%s\t", st[i].id, st[i].name);
        for(int j=0; j<3; j++) {
            printf("%d ", st[i].subCodes[j]);
        }
        printf("\n");
    }
}