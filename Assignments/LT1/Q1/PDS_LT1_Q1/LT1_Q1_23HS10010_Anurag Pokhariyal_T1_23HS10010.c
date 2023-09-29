// Roll No. 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
int main()
{
  //Part 1:
  int n,encode=0,copy,sum=0;
  int num2,encode2,copya;
  int encode3,copy2 = 0,j =1;
  int i =1;
  printf("Input the integer, less than 9999:");
  scanf("%d",&n);
  printf("The entered integer is %d",n);
  copy =n;
  while (n%10!=0){
    int a;
    a = n%10 +1;
    sum += a * i;
    i *= 10;
    if (a == 10) i *= 10;
    n /= 10;
  }
  encode = sum;
  printf("The first encoded number is %d",encode);
  
  // Part 2:

  copya = encode;
  while(encode%10!=0){
    num2 += encode%10;
    encode /10;
  }
  printf("The second encoded number is %d",encode*100 + num2);
  encode2 = encode*100 + num2;

  // Part 3:

  int temp = encode2;
  while(temp %10 != 0){
    copy2 += (encode2 - encode2 %10) * j;
    j *=100;
    temp/10;
  }
  encode3 = copy2;
  printf("The third encoded number is %d",encode3);
  return 0;
}
