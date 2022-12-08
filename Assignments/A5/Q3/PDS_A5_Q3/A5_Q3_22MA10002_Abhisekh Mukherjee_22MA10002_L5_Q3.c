/*section:14
name: Abhisekh Mukherjee
roll no:22MA10002
Assingment no:5
question:3                             */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int r=rand()%100+1; // initialize a random number 
int i,g;
for(int i=1;i<=5;i++){
printf("enter the number\n");  
scanf("%d",&g);    // input the number
if(g<=100 && g>=1 && g>r){
printf("your guess is too big\n");
}
if(g<=100 && g>=1 && g<r){              // usinf if else
printf("your guess is too small\n");
}
if(g<=100 && g>=1 && g==r){
printf("winner\n");
}
if(g<=100 && g>=1 && g!=r && i==5){
printf("loser:the number was: %d\n",r);
}

}
return 0;
}




