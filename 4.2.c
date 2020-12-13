#include<stdio.h>
int main(){
int n,i =1;
int sum = 0;
printf("Enter number:");
scanf("%d",&n);

while (i <=n)
{
    sum = sum + (i*i);
    i++;

}
printf("sum:%d",sum);


}
