#include<stdio.h>
#include<stdlib.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

void print_allcombinations(int n_digits, int c, int d, int n)
{
    if(n_digits == 0)
   {
     int n_copy = n;
    int sum = 0;

   for(int i=0;n_copy>0;i++)
    {
        sum += n_copy%10;
        n_copy/= 10;
    }
   if(n%sum != 0)         //when n is not divisible by sum of numbers
    printf("%d ",n);
   return;
}
   n = n*10;
   n = n + c;
   print_allcombinations(n_digits-1,c,d,n);
   n = n - c + d;

   print_allcombinations(n_digits-1,c,d,n);

     return;
}

int main()
{
    int c;
    int d;
    printf("Enter two digits from 1,2....9 : ");
    scanf("%d %d",&c,&d);
    printf("Numbers:\n");

    print_allcombinations(5,c,d,0); // calling function to write all possible combination
    return 0;                       // which are not divisible by c+d
}
