//ROLL NO.: 23ME10044.c
//Name: Lalit Karthikeyan.M.A

#include<stdio.h>

int main(){

  int n,x,c=0;
  long int e=0,p=1;

  //Inputting the integer

  printf("Enter a positive integer less than 9999: \n");
  scanf("%d",&n);

  //A.Encoding the integer

  while(n>0){

    x=n%10;
    if((x>=0)&&(x<9)){
      e=(p*(x+1))+e;
      p*=10;
      n=n/10;
	
    }
    if(x==9){

      p*=10;
      e=((p)+e);
      p*=10;
      n=n/10;
      
    }
  }
  printf("\nThe encoded number is: %li",e);             //Displaying the encoded number

  printf("\n\n");

  //B.Adding checksum

  long int cs;
  int sod=0,dig=0;
  long int test=e;
  while(test>0){

    dig=test%10;
    sod+=dig;
    test=test/10;
  }
  if(sod%10==0){
    cs=(e*100)+sod;
  }
  else(cs=((e*100)+(sod%100)));

  printf("Checksum: %li\n\n",cs);

  //C.Double Encoding

  long int de=0;
  int d;
  p=1;
  test=cs;
  while(test>0){
    p=p*10;
    d=test%10;
    de=(d*p)+de;
    p=p*10;
    test=test/10;
    
  }

  //Printing the double encoded number
  printf("Double Encoded Number is: %li\n\n",de);
  return 0;
}
  
