#include <stdio.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false !true

int k = 0;

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
    printf("Le tableau est:");
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

void removeDuplicatedNumbers(int arr[],int newArr[],int size){
    // Supprimer les doublons
    for(int i=0;i<size;i++){
        for(k=i++;k<size;){
            printf("Arra=%d /  NewArr=%d\n",arr[i],newArr[k]);
            if(arr[i] != newArr[k]){
                newArr[k] = arr[i];
                break;
            }else{
                --k;
                break;
            }
        }
    }
}

void showNewArray(int newArray[],int size){
    for(int i=0;i<size;i++){
        printf("tableau[%d] = %d\n",i,newArray[i]);
    }
}
