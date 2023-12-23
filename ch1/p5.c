#include<stdio.h>
int main(){
float l,b,ar_rec,ar_cir,per_rec,per_cir,r;
printf("Enter the length of rectange: ");
scanf("%f",&l);
printf("\nEnter breadth of rectangle: ");
scanf("%f",&b);
printf("\nEnter raadius if circle: ");
scanf("%f",&r);
ar_rec=l*b;
per_rec=2*(l+b);
ar_cir=3.14*r*r;
per_cir=2*3.14*r;
printf("\nArea of rectange is %.2f and Perimeter of rectangle is %.2f",ar_rec,per_rec);
printf("\nArea of rectange is %.2f and Perimeter of rectangle is %.2f",ar_cir,per_cir);
return 0;
}
