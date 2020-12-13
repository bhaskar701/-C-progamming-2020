#include<stdio.h>
//square  of  a number//

int square(){
    int i;
    printf("Enter the number: ");
    scanf("%d",&i);
    return i*i;

}

int main(){

    int a;
    a=square();
    printf("The square of the given number is: %d",a);

    return 0;
}