/*
WAP to print “%d” on the screen.
*/
#include<stdio.h>
int main()
{
    int num;

    printf("Enter value to run: ");
    scanf("%d",&num);

    if (num<=150)
    {
        for(int i=0; i<250; i++)
        {
            printf("%%*%%%%d250- %d ",i+1);
        }
    }
    else if (num>=151)
    {
        for(int i=0; i<150; i++)
        {
            printf("%%*%%%%d150- %d ",i+1);
        }
    }
    printf("\n");
    return 0;
}