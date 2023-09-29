//Roll No.:23MI10033
//Name:Piyush Bisht

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a1[10], a2[10], a3[10], a4[10], a5[20], a6[20], a7[40];
  for (int i=0;i<10;i++){              //stores random values to array a1 and simultaneously prints them 
    a1[i]=rand()%21+10;
    printf("a1[%d] = %d ", i, a1[i]);
  }
  printf("\n");
  for (int i=0;i<10;i++){             //stores random values to array a2 and simultaneously prints them
    a2[i]=rand()%31+30;
    printf("a2[%d] = %d ", i, a2[i]);
  }
  printf("\n");
  for (int i=0;i<10;i++){             //stores random values to array a3 and simultaneously prints them
    a3[i]=rand()%31+60;
    printf("a3[%d] = %d ", i, a3[i]);
  }
  printf("\n");
  for (int i=0;i<10;i++){             //stores random values to array a4 and simultaneously prints them
    a4[i]=rand()%31+60;
    printf("a4[%d] = %d ", i, a4[i]);
  }
  printf("\n");
  for(int i=0;i<10;i++){             //stores the values of a1 and a2 into a5 in required manner and simultaneously prints elements of a5
    a5[2*i]=a1[i];
    a5[2*i+1]=a1[i];
    printf("a5[%d] = %d a5[%d] = %d ", 2*i, a1[i], 2*i+1, a2[i]);
  }
  printf("\n");
  for(int i=0;i<10;i++){             //stores the values of a3 and a4 into a6 in required manner and simultaneously prints elements of a6
    a6[2*i]=a3[9-i];
    a6[2*i+1]=a4[i];
    printf("a6[%d] = %d a6[%d] = %d ", 2*i, a3[9-i], 2*i+1, a4[i]);
  }
  printf("\n");
  for(int i=0;i<20;i++){             //stores the values of a5 and a6 into a7 in required manner and simultaneously prints elements of a7
    a7[2*i]=a5[19-i];
    a7[2*i+1]=a6[19-i];
    printf("a7[%d] = %d a7[%d] = %d ", 2*i, a5[19-i], 2*i+1, a6[19-i]);
  }

  return 0;
}
    
  
  
