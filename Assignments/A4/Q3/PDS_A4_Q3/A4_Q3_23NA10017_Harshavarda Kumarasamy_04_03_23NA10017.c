//Roll No:<23NA10017.c>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>

int main()
{
  int n, rev=0, copyn;

  printf("Enter the number:\n");
  scanf("%d", &n);

  copyn = n;

  while(n>0){
    rev=rev*10+n%10;
    n/=10;
  }

  if(rev == copyn)
    {printf("The number is a palindrome.\n");
    }
  else
    {printf("The number is not a palindrome.\n");
    }

  return 0;
}
  
  
