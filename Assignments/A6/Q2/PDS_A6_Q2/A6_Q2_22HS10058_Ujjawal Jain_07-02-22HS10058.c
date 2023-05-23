#include<stdio.h>
int scanf(const char *format,...);
void abc(){
char str[100],str1[20],str2[30];
scanf("%s",str);
int x = scanf("%19s %29s",str1,str2);
printf("%d\n%s\n%s\n%s",x,str1,str2,str2);
}
int main(){
abc();

return 0;
}
