

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Sizes of Basic Data Types in C:\n");
    printf("char: %lu bytes\n", sizeof(char));
    printf("int: %lu bytes\n", sizeof(int));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));

    printf("\nRanges of Integer Data Types:\n");
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);

    printf("\nRanges of Floating Data Types:\n");
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);

    return 0;
}



