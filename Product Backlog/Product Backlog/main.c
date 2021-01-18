#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main()
{
    int Size = getSize();
    int arr[Size];

    initArray(arr,Size);
    afficher(arr,Size);
}
