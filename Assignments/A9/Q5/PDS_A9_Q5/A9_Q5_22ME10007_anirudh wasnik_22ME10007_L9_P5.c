#include<stdio.h>
#include<math.h>
struct Date{
      int day,month,year;
      
      };
void printdate(struct Date d1,struct Date d2){
printf("X=%d/%d/%d \n",d1.day,d1.month,d1.year);
printf("Y=%d/%d/%d \n",d2.day,d2.month,d2.year);}


void findays(){
}



int main()
{


struct Date d1,d2;
printf("enter date of day 1 in dd/mm/yyyy format:");                
scanf("%d%d%d",&d1.day,&d1.month,&d1.year);

printf("enter date of day 2 in dd/mm/yyyy format:");                
scanf("%d%d%d",&d2.day,&d2.month,&d2.year);

printdate(d1,d2);
                                         
return 0;}
