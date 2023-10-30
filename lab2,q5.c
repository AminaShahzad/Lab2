#include<stdio.h>
#include<string.h>
int main(){
char sent1[100];
  printf("Enter a sentence:");
  scanf("%[^\n]",sent1);
  int len=strlen(sent1);
  for(int i=0;i<len;i++ ){
      char uniq=sent1[i];
      int count=0;
      for (int j=0;j<len;j++){
        if (sent1[j]==uniq){
            count+=1;
            if (sent1[j]== sent1[len-1]&& j == len-1){
                  printf("%c\n",uniq);}
            }
      else if(count==1 && j == len-1){
          printf("%c\n",uniq);

      }
  }

}return 0;
}
