#include<time.h>, #include<stdlib.h>
main()
{
  srand(time(0));
  int n,numA,NUMB,i=1,j=0,k=0;
  printf("enter no. of rounds");
  scanf("%d",&n);
  while(i<=n)
  {
      int numA = (rand() % (1000 - 5 + 1)) + 5;
      int numB = (rand() % (1000 - 5 + 1)) + 5;
      while(numA!=0)
      {
          numA=numA/10;
          j++;
      }
      while(numB!=0)
      {
          numB=numB/10;
          k++;
      }
      if(i!=k)
      {printf("A's number:%d",j);
      printf("     B's number:%d",k);
      printf("\n");
      i++;
      }

  }
}
