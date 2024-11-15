#include<stdio.h>
int main()
{
    int i,n,num;
    //printf("Enter the number: ");
    scanf("%d",&num);
    if(num <= 0 || num > 366)
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365");
        return 0;
    }
   // printf("1.Sunday\n2.Monday\n3Tuesday\n4.Wednesday\n5.Thuesday\n6.Friday\n7Satruday");
    //printf("Enter the option to set the first day: ");
    scanf("%d",&n);
    if(n < 1 || n > 7)
    {
        printf("Error: Invalid input, first day should be > 0 and <= 7");
        return 0;
    }
    i = (num+(n-1))%7;
    //printf("%d",i);
    switch(i)
    {
        case 1:
        printf("The day is Sunday");
        break;
        case 2:
        printf("The day is Monday");
        break;
        case 3:
        printf("The day is Tuesday");
        break;
        case 4:
        printf("The day is Wednesday");
        break;
        case 5:
        printf("The day is Thusday");
        break;
        case 6:
        printf("The day is Friday");
        break;
        case 0:
        printf("The day is Saturday");//if we % by 7 we get 0 - 6 so we need check case 0 for saturday
        break;

    }
}