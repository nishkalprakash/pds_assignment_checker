//Roll No:23EE30017
//Name:Ranga Kiranmai
//SETA
#include <stdio.h>
struct stud{
  unsigned int roll;
  char name[20];
  int points;
}tmp[30];
struct stud badminton[10],chess[10],carrom[10],tt[10];
void findConsolationWinner(){
  unsigned int roll_no[30];
  int i,j,k,max=0;
  //Created an array called roll_no to store all the roll numbers at a single place 
  for(k=0;k<10;k++){
    roll_no[k]=badminton[i].roll;
  }
    for(k=10;k<20;k++){
    roll_no[k]=badminton[i].roll;
  }
      for(k=20;k<30;k++){
    roll_no[k]=badminton[i].roll;
  }
       for(k=30;k<40;k++){
    roll_no[k]=badminton[i].roll;
  }
       //i took cases and wrote a code for each case seperately,like who participated in all,then in 3 games,and so on...
   for(i=0,j=0,k=0;i<10,j<30,k<40;i++,j++,k++) {
	 //If the student participated in all the games,highest points are considered
    if(roll_no[k]==badminton[i].roll && roll_no[k]==chess[i].roll && roll_no[k]==carrom[i].roll && roll_no[k]==tt[i].roll){
      tmp[j].roll=roll_no[k];
      //tmp[j].name=tt[i].name;
      if(badminton[i].points>chess[i].points && badminton[i].points>carrom[i].points && badminton[i].points>tt[i].points) tmp[j].points=badminton[i].points;
       if(chess[i].points>badminton[i].points && chess[i].points>carrom[i].points && chess[i].points>tt[i].points) tmp[j].points=chess[i].points;
        if(carrom[i].points>chess[i].points && badminton[i].points<carrom[i].points && carrom[i].points>tt[i].points) tmp[j].points=carrom[i].points;
	 if(tt[i].points>chess[i].points && badminton[i].points<tt[i].points && carrom[i].points<tt[i].points) tmp[j].points=tt[i].points;
    }
    //If the students participated in any three of th games,highest points are considered
    else if(roll_no[k]==badminton[i].roll && roll_no[k]==chess[i].roll && roll_no[k]==carrom[i].roll){
      tmp[j].roll=roll_no[k];
      //tmp[j].name=chess[i].name;
      if(badminton[i].points>chess[i].points && badminton[i].points>carrom[i].points) tmp[j].points=badminton[i].points;
      if(chess[i].points>badminton[i].points && chess[i].points>carrom[i].points) tmp[j].points=chess[i].points;
      if(carrom[i].points>chess[i].points && badminton[i].points<carrom[i].points)  tmp[j].points=carrom[i].points;
    }
     else if(roll_no[k]==badminton[i].roll && roll_no[k]==chess[i].roll && roll_no[k]==tt[i].roll){
      tmp[j].roll=roll_no[k];
      //tmp[j].name=tt[i].name;
      if(badminton[i].points>chess[i].points && badminton[i].points>tt[i].points) tmp[j].points=badminton[i].points;
      if(chess[i].points>badminton[i].points && chess[i].points>tt[i].points) tmp[j].points=chess[i].points;
      if(tt[i].points>chess[i].points && badminton[i].points<tt[i].points)  tmp[j].points=tt[i].points;
    }
     else if(roll_no[k]==badminton[i].roll && roll_no[k]==tt[i].roll && roll_no[k]==carrom[i].roll){
      tmp[j].roll=roll_no;
      //tmp[j].name=tt[i].name;
      if(badminton[i].points>tt[i].points && badminton[i].points>carrom[i].points) tmp[j].points=badminton[i].points;
      if(tt[i].points>badminton[i].points && tt[i].points>carrom[i].points) tmp[j].points=tt[i].points;
      if(carrom[i].points>tt[i].points && badminton[i].points<carrom[i].points)  tmp[j].points=carrom[i].points;
    }
     else if(roll_no[k]==tt[i].roll && roll_no[k]==chess[i].roll && roll_no[k]==carrom[i].roll){
      tmp[j].roll=roll_no[k];
      //tmp[j].name=tt[i].name;
      if(tt[i].points>chess[i].points && tt[i].points>carrom[i].points) tmp[j].points=tt[i].points;
      if(chess[i].points>tt[i].points && chess[i].points>carrom[i].points) tmp[j].points=chess[i].points;
      if(carrom[i].points>chess[i].points && tt[i].points<carrom[i].points)  tmp[j].points=carrom[i].points;
    }
    //If the student participated in only 1 game
     else if(roll_no[k]==badminton[i].roll) {tmp[j].roll=badminton[i].roll;
       //tmp[j].name=badminton[i].name;
       tmp[j].points=badminton[i].points;
     }
     else if(roll_no[k]==chess[i].roll) {tmp[j].roll=chess[i].roll;
       //tmp[j].name=chess[i].name;
       tmp[j].points=chess[i].points;
     }
     else if(roll_no[k]==carrom[i].roll) {tmp[j].roll=carrom[i].roll;
       //tmp[j].name=carrom[i].name;
       tmp[j].points=carrom[i].points;
     }
     else if(roll_no[k]==tt[i].roll) {tmp[j].roll=tt[i].roll;
       //tmp[j].name=tt[i].name;
       tmp[j].points=tt[i].points;
     }
  }
   //displaying the students who are eligible for the prize
  printf("The details of these students:\n");
  for(j=0;j<30;j++) {
    printf("Roll No:%u\n",tmp[j].roll);
    //printf("Name:%s\n",tmp[j].name);
    printf("Points:%d\n",tmp[j].points);
  }
  //calculation of maximum point
  for(j=0;j<30;j++){
    if(tmp[j].points>max) max=tmp[j].points;
  }
  //displaying he winner
  for(j=0;j<30;j++){
    if(tmp[j].points==max) {
      printf("The Consolation Winner is roll no:%u\n",tmp[j].roll);
    }
  }
}
int main()
{
  int n1,n2,n3,n4,i,j,flag=0;
  printf("Enter the number of students who participated in badminton:");
  scanf("%d",&n1);
  printf("Enter the number of students who participated in chess:");
  scanf("%d",&n2);
  printf("Enter the number of students who participated in carrom:");
  scanf("%d",&n3);
  printf("Enter the number of students who participated in tt:");
  scanf("%d",&n4);
  printf("The following details are for badminton:\n");
  for(i=0;i<n1;i++){
     flag=0;
     printf("Enter the roll no:");
     scanf("%u",&badminton[i].roll);
    for(j=i+1;j<n1+1;j++){
      if(badminton[i].roll!=badminton[j].roll) flag=1;
    }
    if(flag==1) {
      //printf("Enter the name:");
      //gets(badminton[i].name);
	printf("Enter the points:");
	scanf("%d",&badminton[i].points);
    }
  }
   printf("The following details are for chess:\n");
  for(i=0;i<n2;i++){
     flag=0;
     printf("Enter the roll no:");
     scanf("%u",&chess[i].roll);
    for(j=i+1;j<n2+1;j++){
      if(chess[i].roll!=badminton[j].roll) flag=1;
    }
    if(flag==1) {
      //printf("Enter the name:");
      //gets(chess[i].name);
	printf("Enter the points:");
	scanf("%d",&chess[i].points);
    }
  }
   printf("The following details are for carrom:\n");
  for(i=0;i<n3;i++){
     flag=0;
     printf("Enter the roll no:");
     scanf("%u",&carrom[i].roll);
    for(j=i+1;j<n3+1;j++){
      if(carrom[i].roll!=carrom[j].roll) flag=1;
    }
    if(flag==1) {
      //printf("Enter the name:");
      //gets(carrom[i].name);
	printf("Enter the points:");
	scanf("%d",&carrom[i].points);
    }
  }
   printf("The following details are for tt:\n");
  for(i=0;i<n4;i++){
     flag=0;
     printf("Enter the roll no:");
     scanf("%u",&tt[i].roll);
    for(j=i+1;j<n4+1;j++){
      if(tt[i].roll!=tt[j].roll) flag=1;
    }
    if(flag==1) {
      //printf("Enter the name:");
      //gets(tt[i].name);
	printf("Enter the points:");
	scanf("%d",&tt[i].points);
    }
  }
  printf("The following are the details of badminton participants:\n");
  for(i=0;i<n1;i++){
    printf("Participant %d:\n",i+1);
    printf("Roll no:%u\n",badminton[i].roll);
    //printf("Name:%s\n",badminton[i].name);
    printf("Points:%d\n",badminton[i].points);
  }
   printf("The following are the details of chess participants:\n");
  for(i=0;i<n2;i++){
    printf("Participant %d:\n",i+1);
    printf("Roll no:%u\n",chess[i].roll);
    //printf("Name:%s\n",chess[i].name);
    printf("Points:%d\n",chess[i].points);
  }
   printf("The following are the details of carrom participants:\n");
  for(i=0;i<n3;i++){
    printf("Participant %d:\n",i+1);
    printf("Roll no:%u\n",carrom[i].roll);
    //printf("Name:%s\n",carrom[i].name);
    printf("Points:%d\n",carrom[i].points);
  }
   printf("The following are the details of tt participants:\n");
  for(i=0;i<n1;i++){
    printf("Participant %d:\n",i+1);
    printf("Roll no:%u\n",tt[i].roll);
    //printf("Name:%s\n",tt[i].name);
    printf("Points:%d\n",tt[i].points);
  }
  findConsolationWinner();
}
	

