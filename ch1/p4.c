#include<stdio.h>
int main(){
float far,cel;
printf("Enter the temperature in fahrenheit: ");
scanf("%f",&far);
cel=(5/9)*(far-32);
printf("Temperature in celicious is %.2f :",cel);
return 0;
}
