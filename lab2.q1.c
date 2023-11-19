#include<stdio.h>
int main(){
    int n;
printf("Enter the number of terms:\n");
scanf("%d",&n);
int sum=0;
for(int i=0;i<=2*n;i++){
    if (i%2==0){
            ;
        continue;
    }else{
        printf("%d ",i);
    sum+=i;
    }
}printf("\n0Sum of %d natural numbers is %d",n,sum);
return 0;
}
