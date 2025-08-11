#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

// Using const char* is the correct, safe way to handle string literals.
typedef enum { INT, FLOAT, CHAR, DOUBLE, STRING } Type;
typedef union { int i; float f; char c; double d; const char* s; } Data;
typedef struct { Type type; Data data; } StackItem;
typedef struct { StackItem items[MAX_SIZE]; int top; } Stack;

// This macro is now robust.
#define ITEM(x) _Generic((x), \
    int: (StackItem){.type = INT, .data.i = int(x)}, \
    float: (StackItem){.type = FLOAT, .data.f = (float)(x)}, \
    double: (StackItem){.type = DOUBLE, .data.d = (double)(x)}, \
    char: (StackItem){.type = CHAR, .data.c = (char)(x)}, \
    char*: (StackItem){.type = STRING, .data.s = (char*)(x)}, \
    const char*: (StackItem){.type = STRING, .data.s = (const char*)(x)} \
)

// No changes needed here.
void print_int(int x) { printf("Integer = %d\n", x); }
void print_float(float x) { printf("Float = %f\n", x); }
void print_double(double x) { printf("Double = %lf\n", x); }
void print_char(char x) { printf("Character = %c\n", x); }
void print_str(const char* str) { printf("String = %s\n", str); }
#define PRINTF_FORMAT(T)        \
  _Generic( (T),                \
    _Bool             : "%d",   \
    char              : "%c",   \
    signed char       : "%hhd", \
    unsigned char     : "%hhu", \
    short             : "%hd",  \
    int               : "%d",   \
    long              : "%ld",  \
    long long         : "%lld", \
    unsigned short    : "%hu",  \
    unsigned int      : "%u",   \
    unsigned long     : "%lu",  \
    unsigned long long: "%llu", \
    float             : "%f",   \
    double            : "%f",   \
    long double       : "%Lf",  \
    char*             : "%s",   \
    char const*       : "%s",   \
    void*             : "%p",   \
    void const*       : "%p"    \
  )

#define PRINT(X)  printf( PRINTF_FORMAT( (X) ), (X) )

#define print(x) _Generic((x), \
    int: print_int((x)), \
    float: print_float((x)), \
    double: print_double((x)), \
    char*: print_str((x)), \
    const char*: print_str((x)), \
    char: print_char((x)))

void initStack(Stack *stack) {
    stack->top = -1;
}

int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int push(Stack *stack, StackItem item) {
    if (isFull(stack)) return 0;
    stack->items[++stack->top] = item;
    return 1;
}

StackItem top(Stack *stack) {
    return stack->items[stack->top];
}

int pop(Stack *stack) {
    if(isEmpty(stack)) return 0;
    stack->top--;
    return 1;
}

// FIX IS HERE: Ensure all printf calls are correct.
void printStackItem(StackItem item) {
    switch (item.type) {
        case INT:    PRINT(item.data.i); break;
        case FLOAT:  PRINT(item.data.f); break; // Corrected call
        case CHAR:   PRINT(item.data.c);  break;
        case DOUBLE: PRINT(item.data.d); break;
        case STRING: PRINT(item.data.s); break;
    }
}

// Reverted to standard main signature
int main(void) {
    Stack stack;
    initStack(&stack);
    push(&stack, ITEM(10));
    push(&stack, ITEM(10.4f));
    push(&stack, ITEM((char)'M'));
    push(&stack, ITEM("Maruf Hossain"));

    StackItem item;
    while(!isEmpty(&stack)) {
        item = top(&stack);
        printStackItem(item);
        pop(&stack);
    }
    return 0;
}