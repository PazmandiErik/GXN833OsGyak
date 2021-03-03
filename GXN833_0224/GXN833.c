#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE* fPtr;
    fPtr = fopen("Erik.txt", "w");

    if (fPtr == NULL){
        return 1;
    }

    fputs("Pazmandi Erik, Programtervezo Informatikus szak, GXN833", fPtr);

    fclose(fPtr);
    return 0;
}
