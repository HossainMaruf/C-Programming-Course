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
        getchar(); // skip newline
        printf("Enter name: ");
        scanf("%[a-z A-Z]", st[i].name);
        printf("Enter subject codes: ");
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &st[i].subCodes[j]);
        }
    }

    printf("Id\tName\tSubject Codes\n");
    for(int i=0; i<n; i++) {
        printf("%d\t", st[i].id);
        printf("%s\t", st[i].name);
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", st[i].subCodes[j]);
        }
        printf("\n");
    }
}