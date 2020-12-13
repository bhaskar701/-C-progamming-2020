#include<stdio.h>

int main(){

    int a,b,c;

    char o;
    printf("Enter Operator: ");
    scanf("%d,%c,%d",&a, &o, &b );
    

    switch (o)
    {
    case '+':
        c = a+b;
        printf("addition of a and b is: %d",c);
        break;
    case '*' : c= a*b;
        printf("multiplication of a and b is:%d", c); 
        break;  
    case '-' : c = a - b;
        printf("substraction of a and b is:%d",c);
        break;
    case '/' : c = a/b;
        printf("division of a and b is:%d ",c);
        break;
    case '%' : c = a%b;
        printf("reminder is : %d" ,c );
        break;
    
    default: printf("ivalid operation");
        break;
    }
    return 0;

}
