#include <stdio.h>
#include <stdlib.h>

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
int getRandomInt(int start,int end){
          return rand() %(end-start)+start;
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
    for(int i=0;i<size;i++){
        printf("tableau[%d] = %d\n",i,arr[i]);
    }
}
