#include<stdio.h>

int main(){
    int score [5];
    int i = 0;

    for (int i = 0; i < 5; i++){  
        scanf("%d", &score[i]);
    }
    
    for (int i = 0; i < 5; i++){
       printf("%d ", score[i]);
    }
    
    
}