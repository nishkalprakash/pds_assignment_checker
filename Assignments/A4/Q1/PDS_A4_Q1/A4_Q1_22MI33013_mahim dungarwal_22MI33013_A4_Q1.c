#include <stdio.h>


int main()

{

int n;

scanf("%d", &n);

int i =1;


while( i <=n) {
if(n%i==0)
printf("%d \n", i) ;
i++ ;
}

return 0;
}
