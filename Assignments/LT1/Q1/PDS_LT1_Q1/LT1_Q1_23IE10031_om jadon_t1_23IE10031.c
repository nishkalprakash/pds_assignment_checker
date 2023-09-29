//Roll No. 23IE10031
//Name - Om Singh Jadon

#include <stdio.h>

int main()
{
  int n,encoded=0;
  printf("Type an integer less than 9999: ");
  scanf("%d", &n);
  int temp = n;
  int place = 1;
  int digit;
  while (temp)
  {
    digit = temp%10;
    encoded = encoded + (digit+1)*(place);
    if (digit == 9) place *= 10;
    temp=temp/10;
    place = place*10;
  }
  printf("a) Input: %d  ---->   Encoded: %d\n", n,encoded);

  temp=encoded;
  int checksum=0;
  while (temp)
    {
      digit = temp%10;
      checksum += digit;
      temp /= 10;
    }

  long int encoded2 = encoded * 100 + checksum;
  printf("b) Input: %d  ---->   Encoded: %d   ---->   with checksum: %ld\n", n, encoded, encoded2);
  
  long int double_enc = 0;
  int temp2 = encoded2;
  long int place2 = 10;
  while(temp2)
    {
      digit = temp2%10;
      double_enc += (digit)*(place2);
      place2 *= 100;
      temp2 /= 10;
    }
  printf("c) Input: %d  ---->   Encoded: %d   ---->   with checksum: %ld    ---->    double encoded: %ld\n", n, encoded, encoded2, double_enc);
}
