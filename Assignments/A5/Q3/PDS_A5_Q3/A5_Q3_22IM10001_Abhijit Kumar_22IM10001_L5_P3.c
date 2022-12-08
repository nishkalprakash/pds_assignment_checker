/* NAME: ABHIJIT KUMAR
ROLL NO. 22IM10001
SECTION 14
LAB 5:ARRAY AMD FUCTION
TOPIC- Guessing Game*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int R,g,temp;
srand(time(0));
R=rand()%100+1;
for(temp=1;temp<=5;temp++)
{
printf("Enter your guess-->");
scanf("%d",&g);
if(R>g)
printf("Your guess is too small!!\n");
else if(R<g)
printf("Your guess is too Big!!\n");
else if(R=g)
{printf("Winner\n");
break;}
}
printf("The number was--%d",R);
return 0;
}
