#include<stdio.h>
//with argument and return//
int sum(int a, int b){
    return a+b;

}

int main(){
    int a, b, c;

    a=3;
    b=4;
    c = sum(a ,b);
    printf("%d", c);
    return 0;
}

