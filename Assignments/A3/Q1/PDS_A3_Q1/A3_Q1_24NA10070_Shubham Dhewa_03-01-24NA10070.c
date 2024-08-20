#include<stdio.h>
int main()
{
    int DD, MM, YYYY;
    printf("Enter day, month, year : \n");
    scanf("%d, %d, %d", &DD, &MM, &YYYY);
    printf("The date is %d/%d/%d \n", DD, MM, YYYY);
    if(YYYY%4!=0 || YYYY%400!=0);
      {
      if(0<=DD<=28 && 0<=MM<=12)
      printf("Valid date\n");
      else printf("Invalid date\n");
      }
      {
      if(29<=DD<=30 && 0<=MM<=12 && MM!=2)
      printf("Valid date\n");
      else printf("Invalid date\n");
      }
      {
      if(DD=31 && 0<=MM<=12 && MM!=2 && MM!= 4 && MM!=6 && MM!=9 && MM!=11)
      printf("Valid date\n");
      else printf("Invalid date\n");
      }
return 0;
}
