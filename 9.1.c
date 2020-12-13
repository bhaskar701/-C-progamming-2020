#include<stdio.h>
#include<conio.h>

int main(){
    struct books{
        int ID;
        char name[20];
        char publisher_name[30] ;
        float year;
    };
    
    struct books book1 ={
        2098556,"physics","oxford",2001
    };

    struct books book2 =
    {
        23179264,"maths","McGrewHill",2001
    };
    

    printf("Book details \n");
    printf("Book ID: %d\n", book1.ID);
    printf("Book name: %s\n",book1.name);

    printf("Boook name %s", book2.name);
    return 0 ;
    
  

}