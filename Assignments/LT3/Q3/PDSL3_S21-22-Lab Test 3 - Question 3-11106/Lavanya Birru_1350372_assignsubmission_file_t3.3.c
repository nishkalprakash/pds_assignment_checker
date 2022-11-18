/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
#define SWAP(x,y,t) {(t)=(x);(x)=(y);(y)=(t);}  //to generate permutations
void perm(char list[],int i,int n,int sm){       //function
  int j,tmp,k,sum;
  if (i==n)
  {  sum=0;
      for ( k = 0; k<5; k++)
  {
      /* code */
  sum=sum+list[k];}
  if ((sum%sm)!=0)
  {
      for (j = 0; j <=n; j++)
      {
      printf("%c",list[j]);
      }}
      printf("\n");
  }
  else{for (j = i; j <=n; j++)
  {
     SWAP(list[i],list[j],tmp);
     perm(list,i+1,n,sm);             //recursive call
     SWAP(list[i],list[j],tmp);
  }
  }
}
int main()
{ int a,b,list[10],sum ,i;   //since 5 digit number should be formed size of list should be 10
printf("enter the two elements");
scanf("%d %d",&a,&b);
sum=a+b;
for ( i = 0; i < 10; i++)
{
    list[i]=a;
    if (i>4)
    {
     list[i]=b;
    }
    for ( i = 0; i <=5; i++)    //i<=5   because at i=5 list[5]  and next four numbers should be used for permutations
    {
    perm(list,i,i+4,sum);       // i to i+4 contains 5 elements
    }

}


return(0);
}
