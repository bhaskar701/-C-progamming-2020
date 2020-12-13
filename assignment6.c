#include<stdio.h>
#include<math.h>

double squareRoot(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    return sqrt(a);

}
int main(){
    float  b;
    b= squareRoot();
    printf("Square root ofthe  given numbber is: %f",b);
    return 0 ;

}