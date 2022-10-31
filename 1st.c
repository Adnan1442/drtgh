#include<stdio.h>

int main()
{

    int c,n,m;
    printf("Enter the number of course:");
    scanf("%d",&c);
    printf("Enter the number of students:");
    scanf("%d",&n);

    for(int i=1;i<=c;i++)
    {
        printf("Course: %d \n",i);
        int sum=0;

        for(int i=1; i<=n; i++)
        {
            printf("Marks%d:",i);
            scanf("%d",&m);
            sum=sum+m;
            }
            printf("Average of course %d = %d\n",i,sum/n);
    }


    return 0;
}