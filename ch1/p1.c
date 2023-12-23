#include<stdio.h>
int main(){
int sal,allowance,rent,gross_sal;
printf("Enter Your Basic Salary:");
scanf("%d",&sal);
printf("Base Salary:%d\n ",sal);
allowance=(sal/100)*40;
rent=(sal/100)*20;
gross_sal=sal-(allowance+rent);
printf("Gross Salary of ramesh is :%d",gross_sal);
return 0;
}
