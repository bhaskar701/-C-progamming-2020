#include<stdio.h>
///////////function declaration////

int sum(int a,int b);
/////////////////////
int main(){
    int a, b, c;

    a=3;
    b=4;
    c = sum(a ,b);
    printf("%d", c);
    return 0;
}
/////func defination//
int sum(int a, int b){
    return a+b;

}


