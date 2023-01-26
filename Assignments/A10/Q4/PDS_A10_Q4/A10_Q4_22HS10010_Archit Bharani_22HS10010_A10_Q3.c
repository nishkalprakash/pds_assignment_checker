#include<stdio.h>
#include<stdlib.h>

typedef struct Customer{
int Account_number;
char Name[100];
int Balance;
}c[1000];


int main()
{
int n;

for(int i=0;;i++){
printf("If you want to enter input 1 or else input 0");
scanf("%d",&n);
if(n==0)
break;
printf("Enter the details in order: Account number, Name, Balance");
scanf("%d %s %d",c[i].Account_number,c[i].Name,c[i].Balance);
}

return 0;
}
