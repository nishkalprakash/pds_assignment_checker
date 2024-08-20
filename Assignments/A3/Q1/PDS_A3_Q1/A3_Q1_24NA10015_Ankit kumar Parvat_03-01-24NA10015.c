#include<stdio.h>
int main()
{
   int date,month,year;
   printf("Enter the date in DD MM YYYY format  ");
   scanf("\n %d%d%d",&date,&month,&year);
   if ((year%4)==0){
       if ((month==1)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); } 
       else if ((month==2)&&(date>=1)&&(date<=29)){
           printf("VAlid date");  }
       else if ((month==3)&&(date>=1)&&(date<=31)){
           printf("VAlid date");   } 
       else if ((month==4)&&(date>=1)&&(date<=30)){
           printf("VAlid date"); } 
       else if ((month=5)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); } 
       else if ((month==6)&&(date>=1)&&(date<=30)){
           printf("VAlid date"); }  
       else if ((month==7)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); } 
       else if ((month==8)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); }                            
       else if ((month==9)&&(date>=1)&&(date<=30)){
           printf("VAlid date"); }     
       else if ((month==10)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); } 
       else if ((month==11)&&(date>=1)&&(date<=30)){
           printf("VAlid date"); }
       else if ((month==12)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); }  
       else {
           printf("Invalid date ");}
   }        
           
   else {
       if ((month==1)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); } 
       else if ((month==2)&&(date>=1)&&(date<=28)){
           printf("VAlid date");  }
       else if ((month==3)&&(date>=1)&&(date<=31)){
           printf("VAlid date");   } 
       else if ((month==4)&&(date>=1)&&(date<=30)){
           printf("VAlid date"); } 
       else if ((month=5)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); } 
       else if ((month==6)&&(date>=1)&&(date<=30)){
           printf("VAlid date"); }  
       else if ((month==7)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); } 
       else if ((month==8)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); }                            
       else if ((month==9)&&(date>=1)&&(date<=30)){
           printf("VAlid date"); }     
       else if ((month==10)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); } 
       else if ((month==11)&&(date>=1)&&(date<=30)){
           printf("VAlid date"); }
       else if ((month==12)&&(date>=1)&&(date<=31)){
           printf("VAlid date"); }  
       else {
           printf("Invalid date ");}
   }  
   return 0;
}   
                         
