//name:pramod kumar
//roll no:23PH10032

#include<stdio.h>
int main(){
  int marks;
  printf("ente marks:\n");
  scanf("%d",&marks);
  if(marks<=100 && marks>=90)
    printf("grade:EX\n");
  else if(marks<90&&marks>=80)
    printf("grade:A\n");
  else if(marks<80&&marks>=70)
    printf("grade:B\n");
else if(marks<70&&marks>=60)
printf("grade:C\n");
 else if(marks<60&&marks>=50)
   printf("grade:D\n");
 else if(marks<50&&marks>=35)
   printf("grade:P\n");
 else if(marks<35&&marks>=0)
   printf("grade:F\n");
 else printf("This is no marks\n");
  return 0;
}
