#include<stdio.h>
int sum(int n);
int main(){
int n,s;
printf("Enter the number : ");
scanf("%d",&n);
s = sum(n);
printf("The sum is %d",s);
}
int sum(int n){
int s;
if(n!=0){
s = n%10 + sum(n/10);
}
else
    return 0;
}
