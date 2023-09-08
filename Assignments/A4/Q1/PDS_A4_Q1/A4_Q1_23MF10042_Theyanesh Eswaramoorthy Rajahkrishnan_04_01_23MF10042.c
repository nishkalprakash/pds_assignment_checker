//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
int main()
{
  int di, ti, re, ret;
  printf("Enter the distance travelled\n");
  scanf("%d",&di);
  printf("Enter the time retained\n");
  scanf("%d",&ti);
  if (di<=12 && di>8)
    re=20+(di-8)*10;
  else if (di<=16)
    re=60+(di-12)*8;
  else if (di<=20)
    re=92+(di-16)*6;
  else  if (di>20)
    re=116+(di-20)*5;
  else
    re=20;
  if (ti>0){
    if (ti<12)
      ret=200;
    else if (ti<24)
      ret=500;
    else if (ti>=24)
      ret=500+(ti/24)*300;
  }
  printf("The total fare to be paid is %d",re+ret);
  return 0;
}
      
      
    
  
    
