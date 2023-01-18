# include<stdio.h>
struct date
{
   int d, m, y;
}; struct date D1, D2;
 
// to calculate the number of days between two given dates
int main ()
{
    printf("Enter day, month, year of D1 : ");
    scanf("%d %d %d", &D1.d, &D1.m, &D1.y);
    printf("Enter day, month, year of D2 : ");
    scanf("%d %d %d", &D2.d, &D2.m, &D2.y);
    int mm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int d1, d2;
    d1= (D1.y - 1)*365 + (D1.y - 1)/4;
    for(int i=0; i<(D1.m - 1); i++)
    {
       d1 = d1 + mm[i];
    }
    if(D1.y % 4 == 0)
     {
      if(D1.m > 2)
       {
        d1 = d1 + 1;
       }
      else if (D1.m == 2 && D1.d == 29)
       {
        d1 = d1 + 1;
       }
     }
      d1 = d1 + D1.d;

    d2= (D2.y - 1)*365 + (D2.y - 1)/4;
    for(int i=0; i<(D2.m - 1); i++)
    {
       d2 = d2 + mm[i];
    }
    if(D2.y % 4 == 0)
     {
      if(D2.m > 2)
       {
        d2 = d2 + 1;
       }
      else if (D2.m == 2 && D2.d == 29)
       {
        d2 = d2 + 1;
       }
     }
      d2 = d2 + D2.d;

    printf("D1 : %d/%d/%d\n", D1.d, D1.m, D1.y);
    printf("D2 : %d/%d/%d\n", D2.d, D2.m, D2.y);
    if(d1 >= d2)
    {
      printf("Days = %d\n", d1-d2);
    }
    if(d1 < d2)
    {
      printf("Days = %d\n", d2-d1);
    }

    return 0;
}


