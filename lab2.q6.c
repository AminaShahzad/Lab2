#include<stdio.h>
#include<string.h>
struct distance{
int foot;
int inches;};

int main (){
struct distance dist1;
struct distance dist2;


printf("Enter the foot of distance1:\n");
scanf("%d",&dist1.foot);
printf("Enter the inches of distance1:\n");
scanf("%d",&dist1.inches);
printf("Enter the foot of distance2:\n");
scanf("%d",&dist2.foot);
printf("Enter the inches of distance1:\n");
scanf("%d",&dist2.inches);
struct distance sumdist;
sumdist.foot=dist1.foot+dist2.foot;
sumdist.inches=dist1.inches+dist2.inches;
if (sumdist.inches>=12){
sumdist.foot+=1;
if (sumdist.inches==12){
sumdist.inches=0;}
else if(sumdist.inches>12){
    sumdist.inches-=12;
}
}
printf("sum of distances is %d.%d",sumdist.foot,sumdist.inches);
return 0;
}
