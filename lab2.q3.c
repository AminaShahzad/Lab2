
#include<stdio.h>
#include<string.h>
int main(){
    char s2[]="Amina";
    char s1[]="Shahzad";
    if(strlen(s1)>strlen(s2)){
        return 1;
    }else if(strlen(s1)<strlen(s2)){
    return -1;}else{
    return 0;}
}
