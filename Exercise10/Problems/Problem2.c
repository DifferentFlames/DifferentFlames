#include<stdio.h>
void prime(int n, int i);
int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
prime(n,2);
}
void prime(int n, int i){
if(n>=i){
    if(n%i==0){
        printf("%d ",i);
        n=n/i;
        prime(n,i);
    }
   else{
    i++;
    prime(n,i);
}
}else
return;
}
