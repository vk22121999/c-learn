#include<stdio.h>


void main()
{
    int n,a = 1;
    

    printf("Enter n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int k=i;k<n;k++)
        {   
            printf("*");

        }

        for(int j = 1;j < a;j++)
        {
            printf("0");
        }
        a += 2;
        for(int l=i;l<n;l++)
        {
            printf("*");
        }
        printf("\n");

    }
    a-=5;
    for(int i=1;i<n;i++)
    {
        for(int k=n-i-1;k<n;k++)
        {
            printf("*");
        }

        for(int j=a;j >0;j--)
        {
            printf("0");
        }
        a-=2;
        
          for(int k=n-i-1;k<n;k++)
        {
            printf("*");

        }

        printf("\n");
    }

}