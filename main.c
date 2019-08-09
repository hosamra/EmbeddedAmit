#include <stdio.h>
#include <stdlib.h>

int* push(int *sp){
printf("\nenetr value : ");
scanf("%i",sp);
sp++;
return sp;
}

int* pop(int *sp){
sp--;
*sp=0;
return sp;

}


void stack_Impletation(void){

int x;
    int arr[10]={0};
    int *sp;
    sp=arr;

    while(1){
    printf("\nenter 1 or 2 or 3 : ");
    scanf("%i",&x);



    if(x==1){
            if(sp>&arr[9]){
                printf("\nstack is full");
            }
            else{
        sp=push(sp);

            }

    }

    else if(x==2){

    if(sp<=&arr[0]){
    printf("Empty");
    }
    else{
       sp=pop(sp);
    }
    }

    else if(x==3){
            for(int i =0 ;i<10 ; i++){
        printf("\n%i ",arr[i]);
            }

    }
    }

}


int main()
{
    stack_Impletation();

    return 0;
}



