# include<stdio.h>
int main()
{
int a,q,r;
printf("Enter a two-digit integer between 20 and 99: \n");
scanf("%d",&a);
q=a/10;
r=a%10;
switch(q)
{case 1: printf(" ");
       break;
case 2: printf("Twenty ");
       break;
case 3: printf("Thirty ");
       break;
case 4: printf("Forty ");
       break;
case 5: printf("Fifty ");
       break;
case 6: printf("Sixty ");
       break;
case 7: printf("Seventy ");
       break;
case 8: printf("Eighty ");
       break;
case 9: printf("Ninety ");
       break;
default: printf("invalid");
}

switch(r)
{
case 1: printf("one \n");
       break;
case 2: printf("two \n");
       break;
case 3: printf("three \n");
       break;
case 4: printf("four \n");
       break;
case 5: printf("five \n");
       break;
case 6: printf("six \n");
       break;
case 7: printf("seven \n");
       break;
case 8: printf("eight \n");
       break;
case 9: printf("nine \n");
       break;

default: printf("invalid");
}

return 0;
}

  
