//Roll No.:23GG10001
//Name:Adarsh Singh
//Set:A
#include<stdio.h>
struct stud{
  int roll;
  char name[21];
  int points;
};
struct stud badminton[10],chess[10],carrom[10],tt[10],tmp[30];

void findConsolationWinner(struct stud badminton[],struct stud chess[],struct stud carrom[],struct stud tt[],struct stud temp[],int b,int ch,int ca,int t){
  int i,j,sum,roll[40],r,max=0,flag1=0,flag2=0,flag3=0,flag4=0,b1,ch1,ca1,t1;
  for(i=0;i<b;i++){
    roll[i]=badminton[i].roll;
  }
  for(i=0;i<ch;i++){
    for(j=0;j<b;j++){
      if(chess[i].roll!=roll[j]){
	roll[i+b]=chess[i].roll;
      }
      else{
	roll[i+b]=0;
    }
  }
  for(i=0;i<ca;i++){
    for(j=0;j<b+ch;j++){
      if(carrom[i].roll!=roll[j]){
	roll[i+b+ch]=chess[i].roll;
      }
      else{
	roll[i+b+ch]=0;
    }
  }
  for(i=0;i<t;i++){
    for(j=0;j<b+ch+ca;j++){
      if(tt[i].roll!=roll[j]){
	roll[i+b+ch+ca]=chess[i].roll;
      }
      else{
	roll[i+b+ch+ca]=0;
      }
    }
  }
  r=b+ch+ca+t;
  for(i=0;i<b;i++){
    if(badminton[i].points>max){
      max=badminton[i].points;
      b1=i;
    }
  }
  max=0;
  for(i=0;i<ch;i++){
    if(chess[i].points>max){
      max=chess[i].points;
      ch1=i;
    }
  }
  max=0;
  for(i=0;i<ca;i++){
    if(carrom[i].points>max){
      max=carrom[i].points;
      ca1=i;
    }
  }
  max=0;
  for(i=0;i<t;i++){
    if(tt[i].points>max){
      max=tt[i].points;
      t1=i;
    }
  }
  max=0;
  temp[0]=badminton[b1];
  temp[1]=chess[ch1];
  temp[2]=carrom[ca1];
  temp[3]=tt[t1];
  printf("The details of the consolation prize winners are in order of badminton,chess,carrom,table tennis:\n");
  for(i=0;i<4;i++){
    printf("Name: %s\n",temp[i].name);
    printf("roll: %u\n",temp[i].roll);
    printf("pints scored: %d\n\n",temp[i].points);
}
  
int main(){
  int b,ch,ca,t,i,j;
  printf("Enter the number of students participating in badminton:\n");
  scanf("%d",&b);
  for(i=0;i<b;i++){
    printf("Enter the roll number of the student:\n");
    scanf("%u",&badminton[i].roll);
    printf("Enter the name of the student:\n");
    scanf("%s",badminton[i].name);
    printf("Enter the points of the student:\n");
    scanf("%d",&badminton[i].points);
    for(j=0;j<b;j++){
      if(badminton[i].roll==badminton[j].roll){
	badminton[i]=badminton[j];
      }
    }
  }
  printf("Enter the number of students participating in chess:\n");
  scanf("%d",&ch);
  for(i=0;i<ch;i++){
    printf("Enter the roll number of the student:\n");
    scanf("%u",&chess[i].roll);
    printf("Enter the name of the student:\n");
    scanf("%s",chess[i].name);
    printf("Enter the points of the student:\n");
    scanf("%d",&chess[i].points);
    for(j=0;j<ch;j++){
      if(chess[i].roll==chess[j].roll){
	chess[i]=chess[j];
      }
    }
  }
  printf("Enter the number of students participating in carrom:\n");
  scanf("%d",&ca);
  for(i=0;i<ca;i++){
    printf("Enter the roll number of the student:\n");
    scanf("%u",&carrom[i].roll);
    printf("Enter the name of the student:\n");
    scanf("%s",carrom[i].name);
    printf("Enter the points of the student:\n");
    scanf("%d",&carrom[i].points);
    for(j=0;j<ca;j++){
      if(carrom[i].roll==carrom[j].roll){
	carrom[i]=carrom[j];
      }
    }
  }
  printf("Enter the number of students participating in table tennis:\n");
  scanf("%d",&t);
  for(i=0;i<t;i++){
    printf("Enter the roll number of the student:\n");
    scanf("%u",&tt[i].roll);
    printf("Enter the name of the student:\n");
    scanf("%s",tt[i].name);
    printf("Enter the points of the student:\n");
    scanf("%d",&tt[i].points);
    for(j=0;j<t;j++){
      if(tt[i].roll==tt[j].roll){
	tt[i]=tt[j];
      }
    }
  }
  findConsolationWinner(badminton[],chess[],carrom[],tt[],temp[],b,ch,ca,t);
  return 0;
}
