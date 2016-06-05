#include<stdio.h>

void swap(int *i,int *j);

int main(){
    int a,b;

    a=6;
    b=8;
    printf("\nData before swap1 a=%d b=%d",a,b );
    swap(&a,&b);
    printf("\nResult of swap1 a=%d b=%d",a,b);

    return 0;
}

void swap(int *a,int *b){
    int  **temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
