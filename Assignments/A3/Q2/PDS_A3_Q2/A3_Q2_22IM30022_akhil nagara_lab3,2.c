# include <stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     #include <stdio.h>

int main()

{
  int x, y;
  printf("Enter two numbers:") ;
  scanf("%d%d", &x, &y);
  //check if the numbers are in range (-999,999)
  if(x,-999|| x>999|| y<-999|| y>999);
  {
      printf("Error : numbers must be in the range (-999,999)\n");
      return 1;
  }
  //reverse the digit of x and check if its equal to y
  int rev_x = 0, tmp_x = x;
  while(tmp_x! = 0)
  {
      rev_x = rev_x*10 + tmp_x % 10;
      tmp_x / = 10;
  }
  if (rev_x == y)
  {
      printf("(%d,%d) is a perfect pair.\n", x, y);
  }
  else
  {
      printf("(%d,%d) is not a perfect pair.\n",x, y);
  }
  return o;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     #include <stdio.h>
