#include<stdio.h>
int main() 
    { 
    int a,b; 
    char c; 
    printf("enter \n+ for addition:\n- for substraction:\n* for multiplication:\n/ for division:"); 
    scanf("%c",&c);
     printf("enter two numbers:");
     scanf("%d%d",&a,&b); 
    if(c=='+') 
    printf("\nanswer is %d",a+b); 
    else 
    if(c=='-') 
    printf("\nanswer is %d",a-b); 
    else 
    if(c=='*') 
    printf("\nanswer is %d",a*b); 
    else 
    if(c=='/') 
    printf("\nanswer is %d",a/b); 
    else 
    printf("\nInvalid input");
     return 0;
    }
