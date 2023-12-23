#include<stdio.h>
int main(){
int j,n,sum=0;
printf("Emter the number: ");
scanf("%d",&n);
while(n>0){
j=n%10;
sum=sum+j;
n=n/10;
}
printf("the sum of digits of the number  is %d",sum);
return 0;
}
