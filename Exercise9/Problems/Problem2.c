#include<stdio.h>
#include<conio.h>
void pow_fac(float , int , int ,float *, int *);
int main(){
float a, powers;
int b, number, fact;
printf("Enter the number a raise to the power b : ");
scanf("%f %d \n",&a,&b);
printf("Enter the number for factorial : ");
scanf("%d",&number);
pow_fac( a, b, number, &powers, &fact);
printf("the power is : %f", powers);
printf("the factorial is %d ",fact);
return 0;
}
void pow_fac(float a, int b, int number,float *powers, int *fact){
float r = 1;
for(int i = b;i>=1;i--){
    r = r * a;
}
*powers = r;
r = 1;
for(int j = number;j>=1;j--){
    r = r * j;
}
*fact = r;
}
