#include<stdio.h>

int main(){

    int n,i =1;
    int sum = 0;
    printf("Enter number:");
    scanf("%d",&n);
    do{sum +=(i*i);
    i++;} 
    while (i<=n);
    printf("sum:%d", sum);

}