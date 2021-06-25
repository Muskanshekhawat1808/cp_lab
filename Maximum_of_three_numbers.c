#include<stdio.h>
int main() 
    {
     int a,b,c; 
    printf("enter any three number:");
     scanf("%d%d%d",&a,&b,&c);
     if(a<b&&c<b)
     printf("maximum is b:%d",b); 
    else 
    if(b<a&&c<a)
     printf("maximum is a:%d",a); 
    else 
    if(a<c&&b<c)
     printf("maximum is c:%d",c);
     else 
    printf("they are same");
     return 0;
    }
