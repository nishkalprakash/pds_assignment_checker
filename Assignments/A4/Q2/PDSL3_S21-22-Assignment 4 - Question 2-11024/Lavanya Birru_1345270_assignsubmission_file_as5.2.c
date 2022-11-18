
/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
 int mhct(int k,int i,int n,int m){ int count=0, sum=0 ;
   if (i<=4)
   { //assuming n to be 4, m to be 6, k to be 15
    sum=sum +mhct(k,i++,n,m)  ; //gets called till i becomes 5

      if(i<=4){for ( m = 0; m < 7; m++)
      {
          return m;
      }
      if (sum==k)
      {
        count++; //assumed that combinations are non repetitive for example (6,6,3),(6,3,6) dont occur
      }

      }

    return count;

}
else return;}
int main()
{ int n,m,k,i=1,count;
printf("enter no.of days,no.of items,max no.of items per trip ");
scanf("%d %d %d",&n,&k,&m);
count=mhct(k,i,n,m); //mhct for myhostelchangingtrips
printf("the no.of journeys is %d",count);

return(0);
}
