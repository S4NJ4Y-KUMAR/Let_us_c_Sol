#include<stdio.h>
int main(){
float dist;
printf("Enter the diatance b/w the cities: ");
scanf("%f",&dist);
printf("\n%.2f Km  in feets is %.2f",dist,dist*3280.84);
printf("\n%.2f Km  in inches is %.2f",dist,dist*39370.079);
printf("\n%.2f Km  in meter is %.2f",dist,dist*1000);
printf("\n%.2f Km  in centimenter is %.2f",dist,dist*100000);
return 0;
}

