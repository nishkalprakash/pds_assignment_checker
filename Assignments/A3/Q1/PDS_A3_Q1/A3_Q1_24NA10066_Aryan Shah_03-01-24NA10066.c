//Take date in format dd mm yyyy and check if it is valid

#include<stdio.h>

int main(){
   int d,m,y ;                                             //Declaring variables with suitable data types
   printf("Input date in dd mm yyyy format :\n");
   scanf("%d%d%d",&d,&m,&y); 
   
   //Checking for valid date
                                 //Taking user input of date
   if ((m<0 || m>12) || (d<0 || d>31)){                    
        printf("Invalid date");
   }
   else if((m==2 && (y%4 == 0)) && d>29){
        printf("Invalid date");
   } 
   else if((m==2 && (y%4 != 0)) && d>28){
        printf("Invalid date");
   } 
   else if((m== 4 ||m==6  ||m== 11 ||m== 9) && d>30){
        printf("Invalid date");
   }    
   else printf("Valid date");
}
