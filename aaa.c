/*
 *
 * */

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

/*
 *maybe also available 
 * int * temp;
 * temp=a;
 * a=b;
 *
 * naturally, available on
 *  int temp;
 *  temp=*a;
 *  *a=*b;
 *  *b=temp;
 *
 *
 * */

int  **temp;
    temp=&a;
    *a=*b;
    *b=**temp;
    printf("\n___a=%d,%d,%d,%d,%d",*a,**temp,*temp,temp,&temp);
    return;
}
