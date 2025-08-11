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

int main() {
    PRINT(42);       // printf( "%d", 42 )
    PRINT(-273.15);  // printf( "%f", -273.15 )
    PRINT("hello");  // printf( "%s", "hello" )
    return 0;
}