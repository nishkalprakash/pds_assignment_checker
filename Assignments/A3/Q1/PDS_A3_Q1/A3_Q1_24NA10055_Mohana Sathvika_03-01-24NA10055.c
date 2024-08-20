#include <stdio.h>
//program to check the validity of a given date
int main(){
 int day,month,year;
 scanf("%d%d%d",&day,&month,&year);
 printf("given date is %d %d %d",day,month,year);

 if(month>=01 && month<=12){

     switch(month){
          case 1:
            if(day>=01 && day<=31){
                      printf("given date is valid");
                      }
            else{
                      printf("given date is invalid");
                      }          
          break;          
          case 2:
            if(year%400==0){
                      if(day>=01 && day<=29) printf("given date is valid");
                      else{                    printf("given date is invalid"); 
                      }
                      }
            else{
                      if(day>=01 && day<=28) printf("given date is valid");
                      else{                    printf("given date is invalid");
                      }
                     }          
          break;
          case 3:
          if(day>=01 && day<=31){
                     printf("given date is valid");
                     }
          else{
                     printf("given date is invalid");
                     }
          break;
          case 4:
          if(day>=01 && day<=30){
                     printf("given date is valid");
                     }
          else{
          
                     printf("given date is invalid");
                     }
          break;           
          case 5:
          if(day>=01 && day<=31){
                     printf("given date is valid");
                     }
          else{
                     printf("given date is invalid");
                     }
          break;
          case 6:
          if(day>=01 && day<=30){
                     printf("given date is valid");
                     }
          else{
                     printf("given date is invalid");
                     }
          break;     
          case 7:
          if(day>=01 && day<=31){
                     printf("given date is valid");
                     }
          else{
                     printf("given date is invalid");
                     }
          break;
          case 8:
          if(day>=01 && day<=31){
                     printf("given date is valid");
                     }
          else{
                     printf("given date is invalid");
                     }
          break;
          case 9:
          if(day>=01 && day<=30){
                     printf("given date is valid");
                     }
          else{
                     printf("given date is invalid");
                     }
          break;
          case 10:
          if(day>=01 && day<=31){
                     printf("given date is valid");
                     }
          else{
                     printf("given date is invalid");
                     }
          break;
          case 11:
          if(day>=01 && day<=30){
                     printf("given date is valid");
                     }
          else{
                     printf("given date is invalid");
                     }
          break;
          case 12:
           if(day>=01 && day<=31){
                     printf("given date is valid");
                     }
          else{
                     printf("given date is invalid");
                     }
          break;
    }
    }
  else {
      printf("given date is  invalid");  }
  return 0;
}        
      
          
          
          
          
                        
                                                                                                     
