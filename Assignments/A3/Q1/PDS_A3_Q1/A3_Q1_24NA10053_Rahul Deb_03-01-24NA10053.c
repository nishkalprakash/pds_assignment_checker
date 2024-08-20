#include<stdio.h>
void main(){
    int d,m,y;
    printf("Please enter a date in the format DD MM YYYY");
    scanf("%d%d%d",&d,&m,&y);
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        if(d>31 || d<1){
            printf("Invalid Date");  // checking for months with 31 days
            
            }
        else{printf("Valid Date");}
     }
    
        
    if(m==2){                         // checking february 
        if(y%4==0){                   // checking for leap year
            if(d>29 || d<1){printf("Invalid Date");}
            else{printf("Valid Date");}
         }
        else{
            if(d>28 || d<1){printf("Invalid Date");}
            else{printf("Valid Date");} 
            }
            }
            
        
    
    if(m==4 || m==6 || m==9 || m==11){  // checking for months with 30 days
        if(d>30 || d<1){printf("Invalid Date");}
        
        else{printf("Valid Date");}
        
        }
    if(m<1 || m>12){printf("Invalid Date");}
        
    } 
