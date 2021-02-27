#include<stdio.h>


void main()
{
    int n,a = 1;
    

    printf("Enter n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf("0");
        }
        for(int k=0;k<a;k++)
        {
            printf("*");
        }
        a+=2;
        for(int l=0;l<n-i;l++)
        {
            printf("0");
        }
       
        printf("\n");

    }
    a = a - 4;
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("0");
        }
        for(int k=0;k<a;k++)
        {
            printf("*");
        }
        a -= 2;
        for(int l=0;l<i+1;l++)
        {
            printf("0");
        }
       
        printf("\n");

    }

}