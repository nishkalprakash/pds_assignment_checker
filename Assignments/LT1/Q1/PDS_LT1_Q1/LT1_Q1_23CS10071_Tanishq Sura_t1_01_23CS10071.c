//roll no 23CS10071
//name Tanishq Sura

#include<stdio.h>


//part A

int main(){
  int n,encoded=0,pow=1,temp,temp2;
  printf("give a positive integr less than 9999: ");
  scanf("%d",&n);
  if((n>=9999)||(n<0)) {printf("wrong input");
                        return 0;}
  temp=n; 
  while(n!=0){
    if(n%10!=9){
      encoded=encoded +pow*(n%10+1);       //pow tells us the factor of 10 in place value
      pow=pow*10;
    }
    else if(n%10==9){
      encoded=encoded + 10*pow;
      pow=pow*100;                           /*it is multiplied here with 100 so that 10 remains untouched and digits in front
					       of it are all given an extra 10* in their place value*/
    }
    n=n/10;
  }
  printf("input: %d --> encoded: %d",temp,encoded);
  n=temp;
//part B

  int sum=0,final;
  temp=encoded;
  while(encoded!=0){
    sum=encoded%10+sum;
    encoded=encoded/10;
  }
  final= sum%100+ 100*temp;
  printf("\ninput:%d --> encoded : %d --> with checksum: %d",n,temp,final);

//part C
  long int pownew=10,double_enc=0;            //pownew shows the place value to which a digit has to be placed
  temp2=final;
  while(final!=0){
    double_enc = double_enc+ pownew*(final%10);
    final = final/10;
    pownew=pownew*100;
  }
  printf("\ninput:%d --> encoded : %d --> with checksum: %d --> double encoded : %ld",n,temp,temp2,double_enc);
  return 0;
}
  
    


