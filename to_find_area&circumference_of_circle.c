#include<stdio.h>
int main(){
int rad;
float pi=3.14, area, ci;
printf("\n Enter radius of circle:");
scanf("%d" , &rad);
area = pi*rad*rad;
printf("\n Area of circle:%f", area);
ci = 2*pi*rad;
printf("\n Circumference:%f", ci);
return 0;
}
