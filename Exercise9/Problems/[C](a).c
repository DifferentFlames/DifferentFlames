#include<stdio.h>
void shift(int *, int *, int *);
int main(){
int x,y,z;
x = 5;
y = 8;
z = 10;
shift(&x,&y,&z);
printf("Value of x = %d \nValue of y = %d \nValue of z = %d",x,y,z);
}
void shift(int *a, int *b, int *c){
int temp;
temp = *a;
*a = *b;
*b = *c;
*c = temp;
}
