#include<stdio.h>
int main(){
int s1,s2,s3,s4,s5;
float sum,per;
printf("Enter the marks obtained in subject out of 100 like 100 90 12 45 32: ");
scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
if(s1<=100 && s2<=100 && s3<=100 && s4<=100 && s5<=100){
sum=s1+s2+s3+s4+s5;
printf("Aggregate marks: %.2f",sum);
per=((sum/500)*100);
printf("\npercentage: %.2f ",per);
}
else printf("Enter valid marks:");

}


