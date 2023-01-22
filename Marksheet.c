
#include<stdio.h>
int main()
{
    int hindi,english,maths,chemistry,physics,Total;
    double Average;
    printf("Enter your marks to find average of all marks\n");
    scanf("%d%d%d%d%d",&hindi,&maths,&chemistry,&physics,&english);

    Total=hindi+english+maths+chemistry+physics;
    printf("Total Marks : %d\n",Total);

     Average=Total/5.0;
     printf("Average marks is : %lf",Average);

    return 0;
}
