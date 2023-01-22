
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your hardwork as a form of marks\n");
     scanf("%d",&marks);
    if(marks<30){
        printf("you are in category of grade C");

    }
    else if(marks>=30 && marks<70){
        printf("you are in category of grade B");
    }
    else if( marks>=70 && marks<90){
        printf(" you are in category of grade A");
    }else if( marks>=90 && marks<=100){
        printf(" you are in category of grade A+");
    }
    else{
        printf("plese enter valid marks");
    }
    return 0;
}
