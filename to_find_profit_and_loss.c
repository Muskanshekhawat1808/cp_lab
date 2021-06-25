#include<stdio.h>
int main() 
    { 
    int a,b,c; 
    printf("enter selling and cost price:");
     scanf("%d%d",&a,&b);
     c=a-b; 
    if(c<0)
     printf("loss of %d",c);
     else
     printf("profit of %d",c); 
    return 0;
    }
