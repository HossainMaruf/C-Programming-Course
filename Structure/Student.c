#include <stdio.h>

struct Student {
	int id;
    char name[32];
    int subCodes[3];
};

void main() {
	// struct Student st = {.id = 101, .name = "Akbar Hossain", .subCodes = {101, 102, 103}};
	// Take input from keyboard
	struct Student st;
	printf("Enter id: ");
	scanf("%d", &st.id);
	getchar(); // skip newline
	printf("Enter name: ");
	scanf("%[a-z A-Z]", st.name);
	printf("Enter subject codes: ");
	for (int i = 0; i < 3; ++i) {
		scanf("%d", &st.subCodes[i]);
	}

    printf("Id = %d\n", st.id); 
    printf("Name = %s\n", st.name); 
    printf("Subject Code = ");
    for (int i = 0; i < 3; ++i) {
	    printf("%d\t", st.subCodes[i]); 
    }
}