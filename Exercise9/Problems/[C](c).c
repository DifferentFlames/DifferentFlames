#include<stdio.h>
float dis(int x1, int y1, int x2, int y2);
float ar(float dis1,float dis2, float dis3,float *area);
int main(){
int x1,y1,x2,y2,x3,y3;
float area,dis1,dis2,dis3;
printf("Enter the coordinates x1, y1 :");
scanf("%d %d",&x1,&y1);
printf("\nEnter the coordinates x2, y2 :");
scanf("%d %d",&x2,&y2);
printf("\nEnter the coordinates x3, y3 :");
scanf("%d %d",&x3,&y3);
dis1=dis(x1,y1,x2,y2);
dis2=dis(x1,y1,x3,y3);
dis3=dis(x2,y2,x3,y3);
ar(dis1,dis2,dis3,&area);
printf("the area of triangle is %f",area);
}
float dis(int x1, int y1, int x2, int y2){
float dis;
dis = pow(pow((x2-x1),2)+pow((y2-y1),2),0.5);
return(dis);
}
void ar(float dis1,float dis2, float dis3,float *area){
float s;
s=(dis1+dis2+dis3)/2;
*area=pow(s*(s-dis1)*(s-dis2)*(s-dis3),0.5);
}
