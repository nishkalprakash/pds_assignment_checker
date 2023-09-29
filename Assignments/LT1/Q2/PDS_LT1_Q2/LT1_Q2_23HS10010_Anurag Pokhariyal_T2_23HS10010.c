// Roll No. 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  //a & b
  for(int i = 0;i<10;i++){
    a1[i]= rand()%21 + 10;
    a2[i]= rand()%31 + 30;
    a3[i]= rand()%31 + 60;
    a4[i]= rand()%31 + 90;
  }
  int j, k ;
  for(int i = 0;i<20;i++){
    j = 2i;
    k = 2i+1;
    a5[j] = a1[i];
    a5[k]= a2[i];
  }

  printf("array a1:\n");
  for(int i = 0;i<10;i++){
    printf("%d\n",a1[i]);
  }
  printf("array a2:\n");
  for(int i = 0;i<10;i++){
    printf("%d\n",a2[i]);
  }
  printf("array a3:\n");
  for(int i = 0;i<20;i++){
    printf("%d\n",a5[i]);
  }

  //c
  int l, m ;
  for(int i = 0;i<20;i++){
    l = 2i;
    m = 2i +1;
    a6[l] = a3[9-i];
    a6[m]= a4[i];
  }
  printf("array a3:\n");
  for(int i = 0; i<10;i++){
    printf("%d\n",a3[i]);
  }
  printf("array a4:\n");
  for(int i = 0; i<10;i++){
    printf("%d\n",a4[i]);
  }
  printf("array a6:\n");
  for(int i = 0;i<20;i++){
    printf("%d\n",a6[i]);
  }


  
  //d
    int p, q ;
  for(int i = 0;i<40;i++){
    p = 2i;
    q = 2i +1;
    a7[p] = a5[19-i];
    a6[q]= a6[19-i];
  }
  printf("array a5:\n");
  for(int i = 0; i<20;i++){
    printf("%d\n",a5[i]);
  }
  printf("array a6:\n");
  for(int i = 0; i<20;i++){
    printf("%d\n",a6[i]);
  }
  printf("array a7:\n");
  for(int i = 0;i<40;i++){
    printf("%d\n",a7[i]);
  }
  

}

