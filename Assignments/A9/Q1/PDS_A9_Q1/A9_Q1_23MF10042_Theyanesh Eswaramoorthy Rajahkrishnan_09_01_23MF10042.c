#include <stdio.h>
#include<string.h>
struct student{
  char fname[20];
  char lname[20];
  char ad[40];
  long long int mn;
  char grades[6];
  float gpa;
  int roll;
}studarray[50];
int nstuds;

int enrolstuds(){
  printf("enter the no of students\n");
  scanf("%d",&nstuds);
  for(int i=0;i<nstuds;i++){
    printf("enter fname\n");
    scanf("%s",studarray[i].fname);
    printf("enter lname\n");
    scanf("%s",studarray[i].lname);
    printf("enter address\n");
    scanf("%s",studarray[i].ad);
    printf("enter mobile\n");
    scanf("%lld",&studarray[i].mn);
    studarray[i].roll=i+1;}
  for(int i=0;i<nstuds;i++)
    printf("fname:%s\nlname:%s\nadd:%s\nmn:%lld\nroll:%d\n\n",studarray[i].fname,studarray[i].lname,studarray[i].ad,studarray[i].mn,studarray[i].roll);
}

int entergrades(){
  char sd1;
  int j=0,s=0;
  for(int i=0;i<nstuds;i++){
    printf("fname:%s\nlname:%s\nadd:%s\nmn:%lld\nroll:%d\n\n",studarray[i].fname,studarray[i].lname,studarray[i].ad,studarray[i].mn,studarray[i].roll);
    while(j<5){
      printf("enter grades\n");
      scanf(" %c",&sd1);
      if((sd1>='A'&&sd1<='F')||sd1=='P'){
	studarray[i].grades[j]=sd1;
	j++;
      }
      else
	printf("enter proper grades\n");
    }
    j=0;
    for(int a=0;a<5;a++){
      if(studarray[i].grades[a]=='A'){
	s+=9;
      }
      else if(studarray[i].grades[a]=='B'){
	s+=8;
     }
    else if(studarray[i].grades[a]=='C'){
      s+=7;
      }
    else if(studarray[i].grades[a]=='D'){
      s+=6;
      }
    else if(studarray[i].grades[a]=='E'){
      s+=10;
      }
    else if(studarray[i].grades[a]=='F'){
      s+=0;
      }
    else if(studarray[i].grades[a]=='P'){
      s+=5;
    }}
    studarray[i].gpa=s/5;
    printf("%d",s);
    s=0;
    
    
  }}

int searchstud(){
  char sname[20];
  printf("enter name to be searched");
  scanf("%s",sname);
  for(int i=0;i<nstuds;i++){
    if((strcasecmp(studarray[i].fname,sname)==0||strcasecmp(studarray[i].lname,sname)==0)){
      printf("fname:%s\nlname:%s\nadd:%s\nmn:%lld\nroll:%d\n\n",studarray[i].fname,studarray[i].lname,studarray[i].ad,studarray[i].mn,studarray[i].roll);}}}

int modifystuddetils(){
  int rn,i1;
  printf("enter roll no");
  scanf("%d",rn);
  for(int i=0;i<nstuds;i++){
    if(studarray.roll==rn){
      printf("fname:%s\nlname:%s\nadd:%s\nmn:%lld\nroll:%d\n\n",studarray[i].fname,studarray[i].lname,studarray[i].ad,studarray[i].mn,studarray[i].roll);
      i1=i;}
  }
  printf("enter new address and mobile");
  scanf("%s %lld",studarray[i1].ad,&studarray[i1].mn);
  printf("fname:%s\nlname:%s\nadd:%s\nmn:%lld\nroll:%d\n\n",studarray[i1].fname,studarray[i1].lname,studarray[i1].ad,studarray[i1].mn,studarray[i1].roll);
}
    
int editstudgrades(){
  int rn,i1;
  printf("enter roll no");
  scanf("%d",rn);
  for(int i=0;i<nstuds;i++){
    if(studarray.roll==rn){
      printf("fname:%s\nlname:%s\nadd:%s\nmn:%lld\nroll:%d\n\n",studarray[i].fname,studarray[i].lname,studarray[i].ad,studarray[i].mn,studarray[i].roll);
      i1=i;}}}
  

  

int main(){
  int df,r=1;
  printf("1.enrolstuds\n2.entergrades\n3.displaystuds\n4.searchstuds\n5.editstuddetails\n6.modifystuddetails\n7.dispmeritlist\n8.exit");
  while(r==1){
     printf("enter your choice");
     scanf("%d",&df);
    if(df==8){
      r=0;
      break;}
    else if(df==1){
      enrolstuds();
     }
    else if(df==2){
      entergrades();
      }
    else if(df==3){
      displaystuds;
      }
    else if(df==6){
      modifystuddetils()
      }
    else if(df==5){
      editstudgrades()
      }
   
  }}
  
    
  

  
