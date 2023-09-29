//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int n, encoded=0;
  while (1){
    printf("Enter the value of n (between 0 and 9999): ");
    scanf("%d", &n);
    if (n>0 && n<9999) break;
    else printf("Wrong input. Enter again.\n");
  }
  printf("input %d -> ", n);

  //Part a
  int power=1;
  while (n!=0){
    if (n%10==9) encoded+= 10*power;
    //If the digit is 9, we have to add "10" at the end of encoded.
    else encoded+=((n%10)+1)*power;
    //If the digit is 0-8 we have to append digit+1 at the end of the encoded number
    power*=10;
    n=n/10;
  }
  printf("encoded %d -> ", encoded); 

  //Part b
  int sum=0, temp=encoded;
  while (temp!=0){   //To find the sum of digits of encoded number
    sum+=temp%10;
    temp=temp/10;
  }
  //To add least 2 digits of sum to encoded number's end
  encoded=encoded*100+(sum%100);
  printf("with checksum %d -> ", encoded);

  //Part c
  long long int final=0;
  long long int power2=10;
  while (encoded!=0){
    final+=((encoded%10)*power2);
    //If the digit is 5,then "50" would be added to the left of the final answer
    power2=power2*100;
    encoded/=10;
  }
  printf("double encoded: %lld\n", final);  
  return 0;
}
