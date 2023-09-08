//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int dist_trav, hours, rental=0, fuel_chg=0, days=0, total=0;  // Initialising Variables
  printf("Enter the distance travelled: ");
  scanf("%d",&dist_trav);         
  printf("Enter the hours the taxi was retained: ");
  scanf("%d",&hours);
  /*Checking for the number of hours the taxi was rented 
    and calculating rental charges*/
  if(hours < 1)rental=0;                    
  if(hours>=1 && hours<12)rental=200;
  if(hours>=12 && hours<24)rental=500;
  if(hours>=24){
    if(hours%24 == 0){
      days=hours/24;
      rental = 500 + (days-1)*300;
    }
    else{
      days=hours/24 + 1;
      rental = 500 + (days-1)*300;
    }
  }
  /*Checking for the distance travelled 
    and calculating fuel charges*/
  if(dist_trav <= 8)fuel_chg = 20;
  if(dist_trav>8 && dist_trav<=12) fuel_chg= 20 + (dist_trav-8)*10;
  if(dist_trav>12 && dist_trav<=16) fuel_chg= 60 + (dist_trav-12)*8;
  if(dist_trav>16 && dist_trav<=20) fuel_chg= 92 + (dist_trav-16)*6;
  if(dist_trav>20) fuel_chg= 116 + (dist_trav-20)*5;

  total = rental + fuel_chg;    // Finding total payable amount
  printf("Total amount payable is %d\n", total);
  return 0;
}
  

    
