#include<stdio.h>
#include<string.h>
int main(){
int c;
printf("Enter a number:");
scanf("%d",&c);
int space =c;
for (int a=1;a<=c;a++){
      for(int i=1;i<=space;i++){
        printf(" ");
        }
       for(int b=1;b<=a;b++){
           printf("* ");
           }
       printf("\n");
       space-=1;


}
return 0;}
