#include <stdio.h>
#include <string.h>

int main(){
char sent1[100]={};
printf("Enter a sentence with upper and lower case sentence:");
scanf(" %[^\n]",sent1);
printf("your sentence before is %s\n",sent1);
int len = strlen(sent1);
for(int i=0;i<len;i++){
    if (sent1[i] >= 'a' && sent1[i]<= 'z' && sent1[i]!= '\0' ){
    sent1[i]=sent1[i]-32;}
    else if (sent1[i]!='\0'){
    sent1[i]=sent1[i]+32;
    }


}
printf("after %s\n",sent1);
return 0;
}

