#include<stdio.h>
#include<string.h>
int main(){
int c;
int sum=1;
printf("Enter a number:");
scanf("%d",&c);
for (int a=1;a<c;a++){
    int f=a+a+1;
    sum+=f;
    printf("%d\n",f);
}

 printf("Sum of %d odd numbers is %d",c,sum);
 return 0;}
