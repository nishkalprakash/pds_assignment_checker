//name: sourendra nandi
//roll: 23CH10066
#include <stdio.h>
int main()
{
  int n,temp,digit,en=0,checksum,d_en=0,w=10,sum=0;
  printf("Enter an integer less than 9999 :");
  scanf("%d",&n);  //reading n
  temp=n;
  /* PART(A)*/
  while(temp>0)
    {
      digit=temp%10;
      temp=temp/10;           
      digit=digit+1;      //changing digit as per encoding
      en=w+digit*(w/10)+en%(w/10);  //creating encoded integer ennum with a extra 1 in the left
      w=w*10;
    }
  en=en%(w/10);       //getting actaul encoded int
  printf("Inputted number: %d , Encoded Integer: %d\n",n,en);
  printf("-----------\n");
  /*part b*/
  temp=en;
  while(temp>0)
    {
      digit=temp%10;
      temp=temp/10;
      sum+=digit;    //getting sum of digits
    }
  checksum=en*100+sum;
  printf("Checksum=%d\n",checksum);

}
  
  
