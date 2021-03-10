#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1. Feladat   -----
    int returnCode;

    returnCode = system("teszt");
    printf("%d\n", returnCode);

    returnCode = system("cd C:\\");
    printf("%d\n", returnCode);

    return 0;
}
