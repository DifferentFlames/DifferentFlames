#include<stdio.h>
void convert(int *,int *, float *, float *);
int main(){
int kilo, g;
float ton,pound;
printf("Enter the weight in kilogram :");
scanf("%d",&kilo);
convert(&kilo, &g, &ton, &pound);
printf("The values are kg = %d \nton = %f\ng = %d\npound = %f",kilo,ton,g,pound);a
}
void convert(int *kilo,int *g, float *ton, float *pound){
*g = *kilo * 1000;
*ton = *kilo * 0.001102;
*pound = *kilo *2.2;
}
