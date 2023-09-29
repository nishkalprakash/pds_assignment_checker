//23AG30019//
//KHYATISH BHAGAT//

#include<stdio.h>
#include<math.h>
int main()
{
  int n,p,q,r,s ;
  // answer for part a //
  printf ("(a) Enter a positive integer less than 9999 =\n");
  scanf ("%d",&n);
  printf("\nInput Value=%d\n",n);
  s=n%10,s++;
  n/=10;
  r=n%10;
  n/=10;
  q=n%10;
  n/=10;
  p=n%10;
  if ( p==0 && q==0 && r==0 )
    p==0,q==0,r==0;
  else if ( p==0 && q==0 )
    p==0,q==0,r++;
  else  if(p==0)
    p==0,q++,r++;
  else p++,q++,r++;
  
  printf ("Encoded Value=%d\n", p*1000+q*100+r*10+s*1);
  
  // answer for part b //
 
  int sum=(p*1000+q*100+r*10+s)*100 ;
  sum += p+q+r+s;
  printf ("\n With checksum =%d\n",sum);

  // answer for part c //

 
  
  
return 0;
}
    
  
