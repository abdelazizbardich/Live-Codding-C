#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main()
{
    int Size = getSize();
    int arr[Size];
    int Newarr[Size];

    initArray(arr,Size);
    printf("===================================\n");
    afficher(arr,Size);
    printf("===================================\n");
    getMaxValue(arr,Size);
    getMinValue(arr,Size);
    printf("===================================\n");
    removeDuplicatedNumbers(arr,Newarr,Size);
    showNewArray(Newarr,Size);
}
