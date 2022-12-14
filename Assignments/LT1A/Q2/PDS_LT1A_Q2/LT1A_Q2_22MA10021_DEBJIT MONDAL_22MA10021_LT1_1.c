#include <stdio.h>
int main()
{
long long int i,j,n,temp=1;
printf("please enter n");
scanf("%lld",&n);
for(i=0;i<n;i++){    //PRINTS THE ROWS
    for(j=0;j<i;j++){ //ITERATES N TIMES FOR NTH ITERATION OF I
    printf("%lld",temp);
    temp++; //STORES THE VALUE OF INCREMENT
    }
    printf("\n");//PRINTS NEWLINE AFTER EVERY ITERATION
}
return 0;
}
