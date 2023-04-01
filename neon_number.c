#include<stdio.h>
#include<stdlib.h>

int main()
{


    int rem,d,n,s=0;

    printf("enter number : ");

    scanf("%d", &n);

    d=n*n;

    while(d!=0){
        rem = d%10;
        s += rem;
        d /= 10;
    }
    
    if(s==n){
        printf("%d neon number", n);
    }else{
        printf("%d not neon number", n);
    }

}