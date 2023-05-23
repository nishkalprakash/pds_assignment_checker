# include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
char str[100],str1[20],str2[30];
printf("enter the sentence :");
fgets(str,100,stdin);
int x= scanf("%19s %29s",str1,str2);
printf("x : %d",x);
return 0;

}
