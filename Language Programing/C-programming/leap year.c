
#include<stdio.h>
int main()
{
    int y;
    printf("entrer a year:\n");
    scanf("%d",&y);
    if((y%4==0&&y%100!=0)||(y%400==0))
         printf("year is leap year");
         else
            printf("year is not a leap year");

}
