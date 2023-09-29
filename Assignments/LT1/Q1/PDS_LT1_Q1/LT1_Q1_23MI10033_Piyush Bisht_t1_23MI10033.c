//Roll No:23MI10033
//Name:Piyush Bisht

#include <stdio.h>
int main()
{
  long int n, a, b=0,checksum=0,temp,len,temp1=10;
  printf("Enter a 4 digit positive integer");
  scanf("%4ld",&n);        //Takes a four digit no. as input (if no. greater than 9999 only first 4 digits registered
  a=n;
  while (a!=0){           //First encoding of the number by individually checking and adding digits but gets the no. in reverse manner
    if (a%10==0){
      b*=10;
      b+=1;
      a/=10;
    }
    else if (a%10==1){
      b*=10;
      b+=2;
      a/=10;
      
    }
    else if (a%10==2){
      b*=10;
      b+=3;
      a/=10;
    }
    else if (a%10==3){
      b*=10;
      b+=4;
      a/=10;
    }
    else if (a%10==4){
      b*=10;
      b+=5;
      a/=10;
    }
    else if (a%10==5){
      b*=10;
      b+=6;
      a/=10;
    }
    else if (a%10==6){
      b*=10;
      b+=7;
      a/=10;
    }
    else if (a%10==7){
      b*=10;
      b+=8;
      a/=10;
    }
    else if (a%10==8){
      b*=10;
      b+=9;
      a/=10;
    }
    else if (a%10==9){
      b*=100;
      b+=1;
      a/=10;
    }
  }
  while (b!=0){             //reversing the no. we got from prev operation to get the result we require
    a*=10;
    a+=(b%10);
    b/=10;
  }
  printf("Input: %ld \nEncoded: %ld", n, a);
  temp=a;
  while (temp!=0){           //takes the sum of the digits of the encoded
    checksum+=temp%10;
    temp/=10;
  }
  checksum=checksum%100;     //only the last two digits of checksum remain
  checksum+=(a*100);         
  printf(" \nWith checksum: %ld",checksum);
  b=0;                       //initializing b to use it again
  temp=checksum;
  
  while (temp!=0){           //second encoding 
    int j=temp%10;
    b=b+j*temp1;
    temp/=10;
    temp1*=100;
  }
  
  printf("\ndouble encoded: %ld",b);
  return 0;
}
     
    
      
    
  
