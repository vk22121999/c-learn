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
            printf(" ");
        }
         printf("*");
        
        for(int l=1;l<a;l++)
        {
            printf(" ");
        }
        a+=2;
        if(i!=0)
        printf("*");
       
        printf("\n");

    }
   a -=4;
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf(" ");
        }
         printf("*");
        
        for(int l=a;l>1;l--)
        {
            printf(" ");
        }
        a-=2;
        if(i!=n-1)
        printf("*");
       
        printf("\n");

    }

}