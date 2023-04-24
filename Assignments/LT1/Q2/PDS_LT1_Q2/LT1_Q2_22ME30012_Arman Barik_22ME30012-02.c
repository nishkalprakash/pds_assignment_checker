# include <stdio.h>
# include <math.h>
void main()
{
    int a;
    printf("Enter the integer: ");
    scanf("%d",&a);
    int count=0;
    for(int i=0;;i++)
    {
        int x;
        x=(a/(pow(10,i)));

        if(x==0) break;
        count++;
    }
    printf("The number of digits= %d\n",count);
    if(a%2==0)
    {
        for(int j=count;j>=1;j--)

        {
          int y;
          y= a%(int)pow(10,j);
          printf("Least significant digits to most significant digits:%d \n",y);
        }

    }
        if(a%2!=0)
    {
        for(int j=count;j>=1;j--)

        {
          int z;
          z= (a/(pow(10,j)));
          printf("Least significant digits to most significant digits: %d",z);
        }

    }



}
