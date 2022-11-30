#include <stdio.h>
int main()
 {
    int num, i;
    printf("enter the integer= ");
    scanf("%d",&num);

    printf("factors of integer are: ",num );
    for(i=1;i<=num;++i)
    {
        if(num%i==0)
        {
            printf("%d",i);
        }
    }
  return 0;
 }