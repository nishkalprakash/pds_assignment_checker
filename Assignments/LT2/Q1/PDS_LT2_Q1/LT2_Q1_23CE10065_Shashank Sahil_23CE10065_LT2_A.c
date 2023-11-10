//Roll - 23CE10065
//Name - Shashank Sahil
//Set - A

#include <stdio.h>
#include<stdlib.h>
#include <string.h>


struct stud {
    unsigned int roll;
    char name[20];
    int points;

};
struct stud badminton[10];
struct stud chess[10];
struct stud carrom[10];
struct stud tt[10];
struct stud tmp[30];
int bd;
int ch;
int cr;
int tat;


void printdetails( struct stud game[], int slim){
    for(int i = 0 ; i < slim ;i++ ){
        printf("\nName -  ");
        printf("%s",game[i].name);
        printf("\nRoll -");
        printf("%u",game[i].roll);
         printf("\nPoints-  ");
        printf("%d",game[i].points);

    }

    
}




void findChamp(){
     int index = 0;
    struct studs{
        unsigned int rollno;
        char name1[10];
        int point;
        int counter ; 

    };
    struct studs studentsroll[31];
    int count = 0;
    for( int i = 0 ; i < bd ; i++){
        studentsroll[count].rollno = badminton[i].roll;
        strcpy(studentsroll[count].name1 , badminton[i].name);
         studentsroll[count].point = badminton[i].points;
        count++;
    }
    for( int i = 0 ; i < cr ; i++){
        studentsroll[count].rollno = carrom[i].roll;
        strcpy(studentsroll[count].name1 , carrom[i].name);
         studentsroll[count].point = carrom[i].points;

        count++;
    }
    for( int i = 0 ; i < tat ; i++){
        studentsroll[count].rollno = tt[i].roll;
         strcpy(studentsroll[count].name1 , tt[i].name);
          studentsroll[count].point = tt[i].points;
        count++;
    }
       for( int i = 0 ; i < ch ; i++){
        studentsroll[count].rollno =chess[i].roll;
        strcpy(studentsroll[count].name1,chess[i].name);
          studentsroll[count].point = chess[i].points;
        count++;
    }

    for( int i = 0 ; i < (bd + cr + ch + tat) ; i++){
        for( int j = i ; j < (bd + cr + ch + tat) ; j++){
            if (studentsroll[i].rollno == studentsroll[j].rollno){
                studentsroll[i].counter++;
                studentsroll[i].point = studentsroll[i].point + studentsroll[j].point ;
            
            }
        

    }

    }
    
    for( int i = 0 ; i < (bd + cr + ch + tat) ; i++){
        
            if (studentsroll[i].counter >= 3){
               tmp[i].roll = studentsroll[i].rollno;
               strcpy(tmp[i].name,studentsroll[i].name1);
               tmp[i].points = studentsroll[i].point;
               
            }
        

    }


   
        for( int i = 0; i < (bd + cr + ch + tat) ; i++){
            int temprory = 0;
           
            if (tmp[i].points >= temprory){ int index = 0;
                temprory = tmp[i].points;
                index = i ;
               
            
            }


    }
    printf("\nWinner is --");
     printf("\nName -  ");
        printf("%s",tmp[index].name);
        printf("\nRoll -");
        printf("%u",tmp[index].roll);
         printf("\nPoints-  ");
        printf("%d",tmp[index].points);

    
    


    
}







void findRunnerUp(){
    int index = 0;
    struct studs{
        unsigned int rollno;
        char name1[10];
        int point;
        int counter ; 

    };
    struct studs studentsroll[31];
    int count = 0;
    for( int i = 0 ; i < bd ; i++){
        studentsroll[count].rollno = badminton[i].roll;
        strcpy(studentsroll[count].name1 , badminton[i].name);
         studentsroll[count].point = badminton[i].points;
        count++;
    }
    for( int i = 0 ; i < cr ; i++){
        studentsroll[count].rollno = carrom[i].roll;
        strcpy(studentsroll[count].name1 , carrom[i].name);
         studentsroll[count].point = carrom[i].points;

        count++;
    }
    for( int i = 0 ; i < tat ; i++){
        studentsroll[count].rollno = tt[i].roll;
         strcpy(studentsroll[count].name1 , tt[i].name);
          studentsroll[count].point = tt[i].points;
        count++;
    }
       for( int i = 0 ; i < ch ; i++){
        studentsroll[count].rollno =chess[i].roll;
        strcpy(studentsroll[count].name1,chess[i].name);
          studentsroll[count].point = chess[i].points;
        count++;
    }

    for( int i = 0 ; i < (bd + cr + ch + tat) ; i++){
        for( int j = i ; j < (bd + cr + ch + tat) ; j++){
            if (studentsroll[i].rollno == studentsroll[j].rollno){
                studentsroll[i].counter++;
                
                studentsroll[i].point = studentsroll[i].point + studentsroll[j].point ;
                if(studentsroll[i].counter >=2){
                    j++;
                }
            
            }
        

    }

    }
    
    for( int i = 0 ; i < (bd + cr + ch + tat) ; i++){
        
            if (studentsroll[i].counter >= 2){
               tmp[i].roll = studentsroll[i].rollno;
               strcpy(tmp[i].name,studentsroll[i].name1);
               tmp[i].points = studentsroll[i].point;
               
            }
        

    }


   
        for( int i = 0; i < (bd + cr + ch + tat) ; i++){
            int temprory = 0;
           
            if (tmp[i].points >= temprory){ int index = 0;
                temprory = tmp[i].points;
                index = i ;
               
            
            }


    }
    printf("\nRunner is --");
     printf("\nName -  ");
        printf("%s",tmp[index].name);
        printf("\nRoll -");
        printf("%u",tmp[index].roll);
         printf("\nPoints-  ");
        printf("%d",tmp[index].points);





}



findConsolationWinner(){



    struct studs{
        unsigned int rollno;
        char name1[10];
        int point;
        int counter ; 

    };
    struct studs studentsroll[31];
    int count = 0;
    for( int i = 0 ; i < bd ; i++){
        studentsroll[count].rollno = badminton[i].roll;
        strcpy(studentsroll[count].name1 , badminton[i].name);
         studentsroll[count].point = badminton[i].points;
        count++;
    }
    for( int i = 0 ; i < cr ; i++){
        studentsroll[count].rollno = carrom[i].roll;
        strcpy(studentsroll[count].name1 , carrom[i].name);
         studentsroll[count].point = carrom[i].points;

        count++;
    }
    for( int i = 0 ; i < tat ; i++){
        studentsroll[count].rollno = tt[i].roll;
         strcpy(studentsroll[count].name1 , tt[i].name);
          studentsroll[count].point = tt[i].points;
        count++;
    }
       for( int i = 0 ; i < ch ; i++){
        studentsroll[count].rollno =chess[i].roll;
        strcpy(studentsroll[count].name1,chess[i].name);
          studentsroll[count].point = chess[i].points;
        count++;
    }
    int index = 0;
     int temprory = 0;
    for(int i = 0 ; i < (bd + ch + cr + tt) ; i++){
        if ( studentsroll[i].point >= temprory){
            temprory = studentsroll[i].point;
            index = i ;
        }

    }
     printf("\nConsolation Winner is --");
     printf("\nName -  ");
        printf("%s",studentsroll[index].name1);
        printf("\nRoll -");
        printf("%u",studentsroll[index].rollno);
         printf("\nPoints-  ");
        printf("%d",studentsroll[index].point);






    
}


displayMeritList(){



    struct studs{
        unsigned int rollno;
        char name1[10];
        int point;
        int counter ; 

    };
    struct studs studentsroll[31];
    int count = 0;
    for( int i = 0 ; i < bd ; i++){
        studentsroll[count].rollno = badminton[i].roll;
        strcpy(studentsroll[count].name1 , badminton[i].name);
         studentsroll[count].point = badminton[i].points;
        count++;
    }
    for( int i = 0 ; i < cr ; i++){
        studentsroll[count].rollno = carrom[i].roll;
        strcpy(studentsroll[count].name1 , carrom[i].name);
         studentsroll[count].point = carrom[i].points;

        count++;
    }
    for( int i = 0 ; i < tat ; i++){
        studentsroll[count].rollno = tt[i].roll;
         strcpy(studentsroll[count].name1 , tt[i].name);
          studentsroll[count].point = tt[i].points;
        count++;
    }
       for( int i = 0 ; i < ch ; i++){
        studentsroll[count].rollno =chess[i].roll;
        strcpy(studentsroll[count].name1,chess[i].name);
          studentsroll[count].point = chess[i].points;
        count++;
    }
   
  
    
}




int main(){

    printf("Enter the number of students who have participated in badminton");
    scanf("%d", &bd);
    printf("Enter the Details\n");
    for(int i = 0 ; i < bd ; i++){
        printf("Enter Roll\n");
        scanf("%u", &badminton[i].roll);
        for( int j = 0 ; j < i ; j++){
            if ( badminton[i].roll == badminton[j].roll){
                printf(" Same roll has been found, Previous roll data will be replaced\n");
                printf("Enter name(First name , No white spaces)\n");
                scanf("%s", badminton[j].name);
                printf("Enter points\n");
                 scanf("%d", &badminton[j].points);
                 goto againb;

                
            }
        }
        printf("Enter name(First name , No white spaces)\n");
        scanf("%s", badminton[i].name);
        printf("Enter points\n");
        scanf("%d", &badminton[i].points);
        againb:
        printf("\n");
        
        
    }//badminton


    printf("Enter the number of students who have participated in carrom ");
    scanf("%d", &cr);
    printf("Enter the Details\n");
    for(int i = 0 ; i < cr ; i++){
        printf("Enter Roll\n");
        scanf("%u", &carrom[i].roll);
        for( int j = 0 ; j < i ; j++){
            if ( carrom[i].roll == carrom[j].roll){
                printf(" Same roll has been found, Previous roll data will be replaced\n");
                printf("Enter name(First name , No white spaces)\n");
                scanf("%s", carrom[j].name);
                printf("Enter points\n");
                 scanf("%d", &carrom[j].points);
                 goto againc;

                
            }
        }
        printf("Enter name(First name , No white spaces)\n");
        scanf("%s", carrom[i].name);
        printf("Enter points\n");
        scanf("%d", &carrom[i].points);
        againc:
        printf("\n");
        
        
    }//carrom
     



    printf("Enter the number of students who have participated in chess ");
    scanf("%d", &ch);
    printf("Enter the Details\n");
    for(int i = 0 ; i < ch ; i++){
        printf("Enter Roll\n");
        scanf("%u", &chess[i].roll);
        for( int j = 0 ; j < i ; j++){
            if ( chess[i].roll == chess[j].roll){
                printf(" Same roll has been found, Previous roll data will be replaced\n");
                printf("Enter name(First name , No white spaces)\n");
                scanf("%s", chess[j].name);
                printf("Enter points\n");
                 scanf("%d", &chess[j].points);
                 goto againd;

                
            }
        }
        printf("Enter name(First name , No white spaces)\n");
        scanf("%s", chess[i].name);
        printf("Enter points\n");
        scanf("%d", &chess[i].points);
        againd:
        printf("\n");
        
        
    }
    //chess



    printf("Enter the number of students who have participated in tt ");
    scanf("%d", &tat);
    printf("Enter the Details\n");
    for(int i = 0 ; i < tat ; i++){
        printf("Enter Roll\n");
        scanf("%u", &tt[i].roll);
        for( int j = 0 ; j < i ; j++){
            if ( tt[i].roll == tt[j].roll){
                printf(" Same roll has been found, Previous roll data will be replaced\n");
                printf("Enter name(First name , No white spaces)\n");
                scanf("%s", tt[j].name);
                printf("Enter points\n");
                 scanf("%d", &tt[j].points);
                 goto againe;

                
            }
        }
        printf("Enter name(First name , No white spaces)\n");
        scanf("%s", tt[i].name);
        printf("Enter points\n");
        scanf("%d", &tt[i].points);
        againe:
        printf("\n");
        
        
    }
    //tabletenis

    printf("\nDetails for badminton--\n");
    printdetails(badminton,bd);

     printf("\nDetails for chess--\n");
    printdetails(chess,ch);

     printf("\nDetails for badminton--\n");
    printdetails(carrom,cr);

     printf("\nDetails for badminton--\n");
    printdetails(tt,tat);

    //printing the data
    findChamp();
    findRunnerUp();
    findConsolationWinner();
    displayMeritList();





}