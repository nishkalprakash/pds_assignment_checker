//Roll No.:23MI10033
//Name:Piyush Bisht

#include <stdio.h>

int main()
{
  int s, n, c=1;                  // count is initialized to 1
  printf("Enter scale factor: ");
  scanf("%d", &s);
  while ((s<1)||(s>6)){           // asks user to enter scale again if not within required bounds
    printf("\nEnter again. ");
    scanf("%d", &s);
  }
  printf("\nEnter number of lines: ");
  scanf("%d", &n);
  while ((s<1)||(s>10)){           // asks user to enter number of lines again if not within required bounds
    printf("\nEnter again. ");
    scanf("%d", &s);
  }
  for (int i=1; i<=n;i++){               
    printf("\n");                      //adds newline character in each iteration of main loop
    for (int j=1; j<=i;j++){
      if (c>s+3)c=1;                   //changes value of count if count becomes larger than n+s
      printf("%d",c);                  //count helps in printing the required values
      c++;
      
    }
  }
  return 0;
}
  
    
