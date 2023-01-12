/*
10. WAP to take date as an input in below given format and convert the date format and 
display the result as given below.
*/
#include<stdio.h>
int main()
{   int days,month,year;
    printf("Enter date DD/MM/YYYY formate ");
    scanf("%d/%d/%d",&days,&month,&year);

    printf("Day-%d, Month-%d, Year-%d",days,month,year);

    printf("\n");
    return 0;

}