#include <stdio.h>
#include <string.h>
int main (){
 char str[100];
  int len,i;
   printf("enter number");
   scanf("%s",str);
  len= strlen(str);
  for(i=0;i<len/2;i++){
    if(str[i]!=str[len-1-i]){
     printf("not palindrome" );
  return 0;
}
}
 printf ("NOT palindrome" );
 
 return 0;
 }