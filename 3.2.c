#include<stdio.h>

int main(){

    int marks ;
    printf("enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100){
        printf("Grade A");    
    }else if (marks>=80 && marks <=89)
    {
        printf("Grade B");
    }else
    {
        printf("Work Harder");
    }
    return 0;
}