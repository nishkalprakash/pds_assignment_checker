
/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
void com( int a[],int l){  static int i=0;static int j=0;static int k=0;//initialised as static to get different combinations
    if(j==(l-1)){ while(k<=3)  //base case
    {
     printf("%d /n",a[i]);i++;// prints the last number in a combination
    }}
    while(j<l-1)
    { j++;
    for ( i = 0; i < 4; i++)
    {
    printf(" %d",a[i]);
     com(a,j) ; //gets called until j becomes equal to l-1
    }
    }
}
int main()
{ int i ,l,a[4];
printf("enter the elements of array");
for ( i = 0; i < 4; i++)
{
  scanf("%d",a[i]) ;
}
printf("enter the size of combination");
 scanf("%d",&l) ;
 com(a,l);

return(0);
}
