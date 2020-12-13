#include<stdio.h>

int main(){

    int a= 23;
    int b;

    int* ptra = &a;
    int* ptrb = NULL;


    printf("%d\n", ptrb);
    printf("%x\n", &ptra);
    printf("%p\n", &ptra);
    printf("%x\n", ptra);
    printf("%d\n", *ptra);
    printf("%p\n", ptra);
    return 0;
    



}