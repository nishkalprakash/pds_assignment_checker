/*
* Section 14
* Roll No : 22ME30004
* Name : Abhirup Kumar Das
* Assignment No : 5
* Description : Guessing Game
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//rand()%100+1 for random number b/w 1 to 100



int main()
{
srand(time(0));
/*int g;
printf("Guess any number from 1-100:");
scanf("%d",&g); */
int g;
//int r;
int r =rand()%100+1;
int i=1;
while(i<=5){


printf("Guess any number from 1-100:\n");
scanf("%d",&g);
if(g<r){printf("Your guess is too small\n");}
else if(g>r){printf("Your guess is too big");}
else if(g==r){
printf("Winner!");
break;}
if(i==5){
printf("Loser! The number is: %d\n", r);
}

i++;
}

return 0;
}

