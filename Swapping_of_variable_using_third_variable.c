#include<stdio.h>
int main()
    { 
    int a,b,c; 
    printf("enter value of a,b:");
     scanf("%d%d",&a,&b); 
    c=a; 
    a=b; 
    b=c; 
    printf("Value of a:%d and b:%d",a,b);
     return 0;
    }
