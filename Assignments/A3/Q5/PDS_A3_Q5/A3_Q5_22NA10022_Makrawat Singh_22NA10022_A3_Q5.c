/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 3
 Description : print the day of the date inputted by the user
*/
  
#include <stdio.h>

int main(){
    
    int d,m;
    printf("Enter day and month:");
    scanf("%d%d",&d,&m);
    int t;
    t=d%7;
    if (m<13&&d<32){
        switch(m){
        
        case 1 :
                
                switch(t){
                case(1):
                     printf("Saturday");
                     break;
                case(2):
                     printf("Sunday");
                     break;
                case(3):
                     printf("Monday");
                     break;
                case(4):
                     printf("Tuesday");
                     break;
                case(5):
                     printf("Wednesday");
                     break;
                case(6):
                     printf("Thursday");
                     break;
                case(0):
                     printf("Friday");
                     break;
                }
        break;
        case 2 :
                if (d>28){
                    printf("Invalid Date");
                }
                else{
                
                    switch(t){
                    case(5):
                         printf("Saturday");
                         break;
                    case(6):
                         printf("Sunday");
                         break;
                    case(0):
                         printf("Monday");
                         break;
                    case(1):
                         printf("Tuesday");
                         break;
                    case(2):
                         printf("Wednesday");
                         break;
                    case(3):
                         printf("Thursday");
                         break;
                    case(4):
                         printf("Friday");
                         break;
                    }
                }
        break;
        case 3 :
                if (d>31){
                    printf("Invalid Date");
                }
                else{
                
                    switch(t){
                    case(5):
                         printf("Saturday");
                         break;
                    case(6):
                         printf("Sunday");
                         break;
                    case(0):
                         printf("Monday");
                         break;
                    case(1):
                         printf("Tuesday");
                         break;
                    case(2):
                         printf("Wednesday");
                         break;
                    case(3):
                         printf("Thursday");
                         break;
                    case(4):
                         printf("Friday");
                         break;
                    }
                }
        break;
        case 4 :
                if (d>30){
                    printf("Invalid Date");
                }
                else{
                
                    switch(t){
                    case(2):
                         printf("Saturday");
                         break;
                    case(3):
                         printf("Sunday");
                         break;
                    case(4):
                         printf("Monday");
                         break;
                    case(5):
                         printf("Tuesday");
                         break;
                    case(6):
                         printf("Wednesday");
                         break;
                    case(0):
                         printf("Thursday");
                         break;
                    case(1):
                         printf("Friday");
                         break;
                    }
                }
        break;
        case 5 :
                if (d>31){
                    printf("Invalid Date");
                }
                else{
                
                    switch(t){
                    case(0):
                         printf("Saturday");
                         break;
                    case(1):
                         printf("Sunday");
                         break;
                    case(2):
                         printf("Monday");
                         break;
                    case(3):
                         printf("Tuesday");
                         break;
                    case(4):
                         printf("Wednesday");
                         break;
                    case(5):
                         printf("Thursday");
                         break;
                    case(6):
                         printf("Friday");
                         break;
                    }
                }
        break;
        case 6 :
                if (d>30){
                    printf("Invalid Date");
                }
                else{
                
                    switch(t){
                    case(4):
                         printf("Saturday");
                         break;
                    case(5):
                         printf("Sunday");
                         break;
                    case(6):
                         printf("Monday");
                         break;
                    case(0):
                         printf("Tuesday");
                         break;
                    case(1):
                         printf("Wednesday");
                         break;
                    case(2):
                         printf("Thursday");
                         break;
                    case(3):
                         printf("Friday");
                         break;
                    }
                }
        break;
        case 7 :
                if (d>31){
                    printf("Invalid Date");
                }
                else{
                
                    switch(t){
                    case(2):
                         printf("Saturday");
                         break;
                    case(3):
                         printf("Sunday");
                         break;
                    case(4):
                         printf("Monday");
                         break;
                    case(5):
                         printf("Tuesday");
                         break;
                    case(6):
                         printf("Wednesday");
                         break;
                    case(0):
                         printf("Thursday");
                         break;
                    case(1):
                         printf("Friday");
                         break;
                    }
                }
        break;
        case 8 :
                if (d>31){
                    printf("Invalid Date");
                }
                else{
                
                    switch(t){
                    case(6):
                         printf("Saturday");
                         break;
                    case(0):
                         printf("Sunday");
                         break;
                    case(1):
                         printf("Monday");
                         break;
                    case(2):
                         printf("Tuesday");
                         break;
                    case(3):
                         printf("Wednesday");
                         break;
                    case(4):
                         printf("Thursday");
                         break;
                    case(5):
                         printf("Friday");
                         break;
                    }
                }
        break;
        case 9 :
                if (d>30){
                    printf("Invalid Date");
                }
                else{
                
                    switch(t){
                    case(3):
                         printf("Saturday");
                         break;
                    case(4):
                         printf("Sunday");
                         break;
                    case(5):
                         printf("Monday");
                         break;
                    case(6):
                         printf("Tuesday");
                         break;
                    case(0):
                         printf("Wednesday");
                         break;
                    case(1):
                         printf("Thursday");
                         break;
                    case(2):
                         printf("Friday");
                         break;
                    }
                }
        break;
        case 10 :
                if (d>31){
                    printf("Invalid Date");
                }
                else{
                
                    switch(t){
                    case(1):
                         printf("Saturday");
                         break;
                    case(2):
                         printf("Sunday");
                         break;
                    case(3):
                         printf("Monday");
                         break;
                    case(4):
                         printf("Tuesday");
                         break;
                    case(5):
                         printf("Wednesday");
                         break;
                    case(6):
                         printf("Thursday");
                         break;
                    case(0):
                         printf("Friday");
                         break;
                    }
                }
        break;
        case 11 :
                if (d>30){
                    printf("Invalid Date");
                }
                else{
                
                    switch(t){
                    case(5):
                         printf("Saturday");
                         break;
                    case(6):
                         printf("Sunday");
                         break;
                    case(0):
                         printf("Monday");
                         break;
                    case(1):
                         printf("Tuesday");
                         break;
                    case(2):
                         printf("Wednesday");
                         break;
                    case(3):
                         printf("Thursday");
                         break;
                    case(4):
                         printf("Friday");
                         break;
                    }
                }
        break;
        case 12 :
                if (d>31){
                    printf("Invalid Date");
                }
                else{
                
                    switch(t){
                    case(3):
                         printf("Saturday");
                         break;
                    case(4):
                         printf("Sunday");
                         break;
                    case(5):
                         printf("Monday");
                         break;
                    case(6):
                         printf("Tuesday");
                         break;
                    case(0):
                         printf("Wednesday");
                         break;
                    case(1):
                         printf("Thursday");
                         break;
                    case(2):
                         printf("Friday");
                         break;
                    }
                }
        break;

        }
    }
  
    else {
        printf("Invalid date");
    }
    printf("\n");     
}




  
