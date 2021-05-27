#include<stdio.h>
int main()
    {	
    int a,b,sum,sub,mult,div,avg;
    	printf("enter two integer number");
    	scanf("%d%d",&a,&b);
    	sum=a+b;	
    sub=a-b;	
    mult=a*b;
    	div=a/b;	
    avg=(a+b)/2;
     		printf("sum of a and b=%d",sum);	
    printf("\nsub of a and b=%d",sub);	
    printf("\nmult of a and b=%d",mult);	
    printf("\ndiv of a and b=%d",div);
    	printf("\navg of a and b=%d",avg);
    	return 0;		
    }

