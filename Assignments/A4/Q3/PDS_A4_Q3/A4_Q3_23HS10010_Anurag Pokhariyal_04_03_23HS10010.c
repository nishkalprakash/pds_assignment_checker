// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
int main()
{
  int num,pal=0,copy;
  printf("Enter the positive integer:");
  scanf("%d",&num);
  copy = num;
  while (num!=0){
    pal += (num%10);
    pal *= 10;
    num /=10;
  }
  pal /=10;
  if (pal == copy){
    printf("The given number is palindrome\n");
  }else printf("The given number is not a palindrome\n");
  return 0;
    

}
