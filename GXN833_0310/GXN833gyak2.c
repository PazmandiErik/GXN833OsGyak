#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 2. Feladat   -----
    char command[50];

    printf("Kerek egy parancsot: ");
    scanf("%s", command);

    system(command);

    return 0;
}
