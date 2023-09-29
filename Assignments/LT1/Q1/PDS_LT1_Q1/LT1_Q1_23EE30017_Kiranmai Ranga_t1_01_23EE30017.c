//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
int main()
{
  int m,n,i,j,k,l,sum=0,temp;
  while(1) {
  printf("The value of the integer:");
  scanf("%d",&n);
  if(n>9999) {printf("Enter a number less than 9999\n");
                continue;}
  else break;
  }
  //part a:encoding
  i=n%10;
  i++;
  j=(n/10)%10;
  if(j!=0) j++;
  k=(n/100)%10;
  if(k!=0) k++;
  l=(n/1000)%10;
  if(l!=0) l++;
  m=i+10*j+100*k+1000*l;
  if(n!=99 && n!=999 && n!=9999) {
  printf("input:%d encoded:%d",n,m);
  }
  else if(n=99) printf("input:%d encoded:%d",n,m=1010);
  else if(n=999) printf("input:%d encoded:%d",n,m=101010);
  else if(n=9999) printf("input:%d encoded:%d",n,m=10101010);
  //part b:checksum
  temp=m;
  while(m>0){
    sum+=m%10;
    m/=10;
  }
  if((sum/10)!=0) printf(" checksum:%d%d",temp,sum);
  else if((sum/10)==0) printf(" checksum:%d%d",temp*10,sum);
  //part c:double encoding
  printf(" double encode:%d%d%d%d%d%d%d%d%d%d%d%d\n",l,0,k,0,j,0,i,0,(sum/10),0,(sum%10),0);
  return 0;
}
  
