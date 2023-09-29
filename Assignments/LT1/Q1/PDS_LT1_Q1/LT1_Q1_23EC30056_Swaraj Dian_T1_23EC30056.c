//Roll No: 23EC30056
//Name: Swaraj Dian
//Set: 1

#include<stdio.h>
int main()
{
  int n,enc=0,checksum,digit,pow=1,dg_sum=0,copy;     //declaring variables
  long long int d_enc=0;
  printf("Enter a positive integer less than 9999: ");
  scanf("%d",&n);
  if ((n>0)&&(n<9999))     //checking for valid input
    {
      copy=n;      //making a copy of number so original is safe
      while(copy>0)   //a) encoding number
	{
	  digit=copy%10;    //taking out last digit and adding at last of encoded number
	  digit++;
	  copy=copy/10;
	  enc=pow*digit+enc;
	  pow=pow*10;
	  if(digit==10)
	    pow=pow*10;
	}
      printf("Input: %d -> Encoded: %d\n",n,enc);
      // b) checksum
      copy=enc;   //making copy of encoded
      while(copy>0)
	{
	  digit=copy%10;
	  dg_sum=dg_sum+digit; 
	  copy=copy/10;
	}
      checksum=enc*100+(dg_sum%100);
      printf("Input: %d -> Encoded: %d -> With checksum: %d\n",n,enc,checksum);
      // c) double encoding number
      copy=checksum;
      pow=10;
      while(copy>0) //double encoding number by taking last digit and adding them to the last of d_enc
	{
	  digit=copy%10;
	  copy=copy/10;
	  d_enc=pow*digit+d_enc;
	  pow=pow*100;
       	}
      printf("Input: %d -> Encoded: %d -> With checksum: %d -> Double encoded: %lld\n",n,enc,checksum,d_enc);
    }
  else
    printf("Invalid Input Try Again\n");
}
      
