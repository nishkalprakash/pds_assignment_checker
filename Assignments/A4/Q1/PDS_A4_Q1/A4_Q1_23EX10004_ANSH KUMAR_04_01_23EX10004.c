// name-Ansh kumar
//roll no- 23EX10004
#include<stdio.h>
int main()
{
  int km,hrs;
  printf("enter the distance travelled and hours for which taxi is taken");
  scanf("%d%d",&km,&hrs);
  if(hrs<1){
    printf("no rental\n");
  }
  else if(hrs>=1&&hrs<=12){
    printf("rental= Rs.200\n");
  }
  else if(hrs>12&&hrs<=24){
    printf("rental= Rs.500\n");
  }
  else if(hrs>24){
    printf("rental is Rs. 500+300=800\n ");
  }
  if(km<=8){
    printf(" taxi fare is Rs.20\n");
  }
  else if(km>8&&km<=12){
    printf("taxi fare is %d\n",20+ (km-8)*10);
  }
  else if(km>12&&km<=16){
    printf("taxi  fare is %d\n", 60+(km-12)*8);
  }
  else if(km>16&&km<=20){
    printf("the taxi fare is %d\n", 92+(km-16)*6);
  }
  else if(km>20){
    printf("the taxi fare is %d\n", 116+(km-20)*5);
  }
  return 0;
}
	
