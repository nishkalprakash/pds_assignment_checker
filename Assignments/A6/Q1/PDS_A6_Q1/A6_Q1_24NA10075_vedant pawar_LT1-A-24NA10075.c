#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{int A;
int B ;
int x;
int N=5;
float y;
float Filter[N] ;

printf ("THE VALUE OF N:");
scanf("%d",&N);
int arr[5] = {2,3,4,5,6,};//arr[5]
for(int i=0;i<=N;i++)
{
int x= arr[i];

srand(x);
int randomNumber = rand()%100+1;

printf("RANDOM NUMBER:%d\n",randomNumber);
x= randomNumber ;
if (i%2==0)
{
y= ((-1)*i*i/(2i+1)) + cos (x/2) ;
}
else 
{ 
y=(i*i/(2i+1)) + cos (x/2);
}
{for (int i=0;i<=N;i++)
{Filter[i] = y;


}

}

printf("%f",Filter[i]);
}
return 0;}
// ENTERING THE VALUES TO BIN_A ;


