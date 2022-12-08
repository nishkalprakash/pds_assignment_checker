
//section 14
//name Asis Layek
//roll no. 22MF10007
//ASSIGNMENT 5 
//TOPIC FUNCTIONS 
// qn- guessing game
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

srand(time(0));

int main (); 
{
int r ;
r = rand()%100+1;
int i=1 ;
int g ;
printf("Guess any number from 1-100");
scanf("%d",&g);
while (i<=5){
if (g>r){
printf("Your guess is too big!");
}else if (g<r)
printf("Your guess is too small!");
else if (g==r)
printf("winner");
break;
}
if(i==5){
printf(" not winner \n");}
i++;
}
return 0;
}
