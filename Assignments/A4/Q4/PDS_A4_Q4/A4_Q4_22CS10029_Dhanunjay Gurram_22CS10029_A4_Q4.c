//This program prints a pattern as per given input
#include <stdio.h>
int main()
{
    int nline,i,x=1;             //nline => no of lines
    printf("Enter no. of lines to be printed (Range[2,10]):");
    scanf("%d",&nline);
    if (nline<2 || nline>10) printf("Enter the value in given range\n");
    else {
      for(i=1;i<=nline;i++) {                                          //Loop to iterate the no of lines 
            while (x<=i) {                                             //Loop to ensure the number of 1s or 0s to be printed in a line 
                if (x%2!=0) printf("1 ");
                else printf("0 ");
                x++; }
            x=1;                                                       //Ensures that next line starts from beginning 
            printf("\n"); }
          }
    return 0;
}
