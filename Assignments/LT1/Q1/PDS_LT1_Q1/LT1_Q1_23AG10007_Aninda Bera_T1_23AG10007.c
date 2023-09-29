# include <stdio.h>
int main()
{
  //part (a)
  int n,s=0,i=1,b,a,m,w,v=0;
  printf("Enter a number less than 9999\n");
  scanf("%d",&n);
  while(n>0)
    {
      a=n%10;
      b=(a+1)*i;
      i=i*10;
      s=s+b;
      n=n/10;
    }
  printf("The encoded number is %d\n",s);
  //part (b)
  m=s;
  while(s>0)
    {
      w=s%10;
      v=v+w;
      s=s/10;
    }
  m=(m*100)+v;
  printf("The checksum of the encoded number is %d\n",m);
  return 0;
}
  
      
  
