#include<stdio.h>
int main() 
    { 
    int a,b;
     printf("enter any two number:");
     scanf("%d%d",&a,&b);
     if(a<b) 
    printf("maximum is b:%d",b); 
    else
     if(b<a)
     printf("maximum is a:%d",a);
     else 
    printf("both are same"); 
    return 0;
    }
