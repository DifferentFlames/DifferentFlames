#include<stdio.h>
int fibo(int n);
int main(){
int term = 25, n = 0;
for(int i = 1;i<=term;i++){
    printf("%d ",fibo(n));
    n++;
}
}
int fibo(int n){
if(n == 0 || n == 1){
    return n;
}else{
    return(fibo(n-1) + fibo(n-2));
}
}
