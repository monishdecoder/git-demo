#include<stdio.h>
//program for star triangle for n no. of rows
int main(){
    int i,j,n;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(i+j==n+1 || j-i== n-1|| i==n)
            {
                printf("*");
            }
            //if(i=5 && j<5)
            // {
            //     printf()
            // }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}