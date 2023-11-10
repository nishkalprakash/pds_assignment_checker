//23MI31012
//ESLAVATH NAVEEN
//SET-A
#include <stdio.h>
#include <stdlib.h>
void findChamp();
void findRunnersUp();
void findConsolationWinner();

typedef struct stud {
  unsigned int roll;
  char name[20];
  int points;
}badmenton[10],chess[10],tt[10],carrom[10],temp[30];

int main(){
  int numb_stud,i;
  printf("Enter the no.of students are participated :\n")
    scanf("%d",&numb_stud);

  for(i=0;i<n;i++){
    printf("Enter the details of the student participated in batmenton:\n");
    scanf("%d",&batmenton[i].roll);
    scanf("%c",&batmenton[i].name[]);
    scanf("%d",&batmenton[i].points);
    printf("The details are %d %c %d \n",batmenton[i].roll,batmenton[i].name[],batmenton[i].points);
    printf("Enter the details of the student participated in carrom:\n");
    scanf("%d",&carrom[i].roll);
    scanf("%c",&carrom[i].name[]);
    scanf("%d",&carrom[i].points);
    printf("The details are %d %c %d \n",carrom[i].roll,carrom[i].name[],carrom[i].points);
    printf("Enter the details of the student participated in chess:\n");
    scanf("%d",&chess[i].roll);
    scanf("%c",&chess[i].name[]);
    scanf("%d",&chess[i].points);
    printf("The details are %d %c %d \n",chess[i].roll,chess[i].name[],chess[i].points);
    printf("Enter the details of the student participated in tt:\n");
    scanf("%d",&tt[i].roll);
    scanf("%c",&tt[i].name[]);
    scanf("%d",&tt[i].points);
    printf("The details are %d %c %d \n",chess[i].roll,chess[i].name[],chess[i].points);
  }
    printf("The Champion is:");
    findChamp();
    printf("\n");
    printf("The Runner is:");
    findRunnersUp();
    printf("\n");
    printf("The Consolation winner is:");
    findConsolationWinner();
    printf("\n");
}
void findChamp(){
  int min=0,batmenton[].points,chess[].points,tt[].points,carrom[].points,temp;
  if(min>temp){
    temp=batmenton[].points;
    batmenton[].points=chess[].points;
    chess[].points=carrom[].points;
    carrom[].points=tt[].points;
    tt[].points=temp;
    min=temp;
    printf("%d\n",min);
    int max_points[],i;
   max_points[]=batmenton[].points+chess[].points+tt[].points+carrom[].points-min;
   int max=0,numb_stud;
   for(i=0;i<numb_stud;i++){
   if(max<max_points[i]){
     max=max_point[i];
  }
   }
   printf("The champion is %d %c \n",roll,name[i]);
  }
}
void findRunnersUp{
  int min=0,sec_min=0,batmenton[].points,chess[].points,tt[].points,carrom[].points,temp;
  if(min>temp){
    temp=batmenton[].points;
    batmenton[].points=chess[].points;
    chess[].points=carrom[].points;
    carrom[].points=tt[].points;
    tt[].points=temp;
    min=temp;
    printf("%d\n",min);
    if(temp>min && temp>sec_min ){
       temp=batmenton[].points;
    batmenton[].points=chess[].points;
    chess[].points=carrom[].points;
    carrom[].points=tt[].points;
    tt[].points=sec_min;
    sec_min=temp;
    printf("%d\n",sec_min);    
    int max_points[],i;
   max_points[]=batmenton[].points+chess[].points+tt[].points+carrom[].points-min-sec_min;
   int max=0,numb_stud;
   for(i=0;i<numb_stud;i++){
   if(max<max_points[i]){
     max=max_point[i];
  }
   }
   printf("The Runner is %d %c \n",roll,name[i]);
    }
  }
}
void findConsolationWinner(){
  int max=0,numb_stud;
   for(i=0;i<numb_stud;i++){
   if(max<batmenton_points[i]){
     max=batmenton_point[i];
   }
   printf("consolation winner in batmenton is %d %c\n",roll,name[]);
   }
    for(i=0;i<numb_stud;i++){
   if(max<caroom_points[i]){
     max=carrom_point[i];
   }
   printf("consolation winner in carrom is %d %c\n",roll,name[]);
    }
    for(i=0;i<numb_stud;i++){
   if(max<chess_points[i]){
     max=chess_point[i];
   }
   printf("consolation winner in chess is %d %c\n",roll,name[]);
    }
    for(i=0;i<numb_stud;i++){
   if(max<tt_points[i]){
     max=tt_point[i];
   }
   printf("consolation winner in tt is %d %c\n",roll,name[]);
    }
}
    
   
  
  
  
    

  
