#include<stdio.h>

int main(){

    int a= 10;
    int b = 5;
    int c,d,e;

    c = a<=b; //0
    d = a>= b; //1
    e = c&&d; //0

    printf("value of e is %d\n",e);
    return 0;
}