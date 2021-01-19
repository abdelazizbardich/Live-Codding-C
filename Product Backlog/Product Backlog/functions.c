#include <stdio.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false !true

int getSize(){
 int a;
    printf("Enter la taill du tableau:\n");
    scanf("%d",&a);
    return a;
}

int getValue(){
 int a;
    printf("Enter valeur du range:\n");
    scanf("%d",&a);
    return a;
}

// get Random int
int getRandomInt(int min,int max){
          return rand() %(max-min)+min;
}

void initArray(int tab[],int size){
    int start = getValue();
    int end = getValue();
    int i = 0;
    for(i=0;i<size;i++){
        tab[i] = getRandomInt(start,end);
    }
}
void afficher(int arr[],int size){
    printf("Le tableau est:\n");
    for(int i=0;i<size;i++){
        printf("tableau[%d] = %d\n",i,arr[i]);
    }

}

int getMaxValue(int arr[],int size){
int max = arr[0];
    for(int i =0; i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Max Value: %d\n",max);
}

int getMinValue(int arr[],int size){
    int min = arr[0];
    for(int i =0; i<size;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Min Value: %d\n",min);
}
void debugArray(int array[],int size){
    for(int i=0;i<size;i++){
        printf("index[%d]=%d // ",i,array[i]);
    }
    printf("\n");
}

// check if value in array
bool checkinArray(int val,int array[],int size){
    printf("Checking for value: %d\n",val);
    for(int i=0;i<size;i++){
        if(val == array[i]){
            printf("********* %d == %d ->Value Found for index[%d]************\n",val,array[i],i);
            return true;
        }else{
            printf("%d == %d ->Value not Found for index[%d]\n",val,array[i],i);
        }
    }
    return false;
}

//remove duplicated value
void removeDuplicatedNumbers(int oldArray[],int newArray[],int size){
    int newSize = size;
    for(int i= 0;i<size;i++)
    {
    printf("\n\n");
        //debugArray(newArray,size);
        if(checkinArray(oldArray[i], newArray,size) == true){
            printf("Assigning -1 to NewValue:\n");
            newArray[i] = -1;
            newSize--;
            //printf("Skip to next index\n");
        }else{
            printf("Assigning oldValue to NewValue:\n");
            newArray[i] = oldArray[i];
        }
        printf("Now : old[%d]=%d && new[%d]=%d\n",i,oldArray[i],i,newArray[i]);
    }
}

void showNewArray(int Newarr[],int size){
    for(int i=0;i<size;i++){
        printf("tableau[%d] = %d\n",i,Newarr[i]);
    }
}
