#include<stdio.h>
int fib(int i);
int main(){
    int p;
    printf("enter the position of fibonacci no. : \n");
    scanf("%d",&p);
    int n = fib(p);
    printf("the position of %d of fabonacci series holds : %d",p,n);
    return 0;
}



int fib(int i)
{
    if(i==0){
        return 0;
        }
        if(i==1){
        return 1;
        }
        int f = fib(i-1) + fib(i-2);
        return f;
}