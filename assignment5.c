#include<stdio.h>

//substraction of two numbers//

int subs(){
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d, %d",&a, &b);
    return a-b;

}

int main(){
    int c ;
    c =subs();
    printf("The substraction of the two number is: %d",c);
    return 0 ;

}
