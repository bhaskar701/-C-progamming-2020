#include<stdio.h>

int main(){

    int n;
    int sum = 0;

    printf("Enter n:");
    scanf("%d", &n);

    for (int i = 0; i <=n; i++)
    {
        sum = sum +(i*i);
    }
    printf("Sum: %d", sum);
    
    
}