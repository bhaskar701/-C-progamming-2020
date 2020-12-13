#include<stdio.h>
//product of 3 numbers//

int product(){
    int a,b,c;
    printf("Enter numbers:\n ");
    scanf("%d %d %d", &a, &b, &c);
    return a*b*c;


}

int main(){
    int d;
    d = product();
    printf("The product of given numbers is: %d",d);
    return 0;
}