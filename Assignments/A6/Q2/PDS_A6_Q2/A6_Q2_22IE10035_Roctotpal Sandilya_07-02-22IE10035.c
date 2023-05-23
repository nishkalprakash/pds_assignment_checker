#include<stdio.h>
/*
   sec-2
   Assignment no.- 7
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 2
*/

int main(){
char str1[20],str2[20];
scanf("%[^\n]%*c", str1);
scanf("%[^\n]s", str2);

for(int i=0; str1[i]!='\n'; i++) printf("%c", str1[i]);

return 0;
}
