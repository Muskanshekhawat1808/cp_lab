
#include<stdio.h>
int main()
    {	
    int day;	
    printf("Enter number of day :");
    	scanf("%d", &day);		
    if(day == 1)	
    printf("Day is Monday");		
    else 
    if(day == 2)
    	printf("Day is Tuesday");
    		else 
    if(day == 3)
    	printf("Day is Wednesday");
    		else 
    if(day == 4)
    	printf("Day is Thrusday");
    		else 
    if(day == 5)
    	printf("Day is Friday");
    		else
     if(day == 6)
    printf("Day is Saturday");
    		else
     if(day == 7)	
    printf("Day is Sunday");	
    	else
    	printf("Error");
    		return 0;
    }


