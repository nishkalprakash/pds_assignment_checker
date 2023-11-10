//SetA
//name:Theyanesh
//Roll:23MF10042
#include <stdio.h>
#include <string.h>
struct stud{
  unsigned int roll;
  char name[20];
  int points;
}badminton[10],chess[10],carrom[10],tt[10],tmp[30];
int nb,nc,nca,nt;

int findchamp(){
  int rollno[40],i1;
  for(int j1=0;j1<nb;j1++)
    rollno[i1]==badminton[j1].roll;i1++;
  for(int j2=0;j2<nc;j2++)
    rollno[i1]==chess[j2].roll;i1++;
  for(int j3=0;j3<nca;j3++)
    rollno[i1]==carrom[j3].roll;i1++;
  for(int j4=0;j4<nt;j4++)
    rollno[i1]==tt[j4].roll;i1++;
  for(int i=0;i<i1-1;i++){
    }}

int displaymeritlist(){
  int temp;
  char temp1[20];
  for(int i=0;i<nb;i++){//badminton
    for(int j=0;j<i-1;j++){
      if(badminton[j].points<badminton[j+1].points){
	badminton[j].points=temp;
	badminton[j].points=badminton[j+1].points;
	badminton[j+1].points=badminton[j].points;}}}
  for(int i=0;i<nb;i++){
    for(int j=0;j<i-1;j++){
      if(strcmp(badminton[j].name,badminton[j+1].name)<0){
	strcpy(badminton[j].name,temp1);
	strcpy(badminton[j].name,badminton[j+1].name);
	strcpy(badminton[j+1].name,temp1);}}}
  for(int i=0;i<nb;i++){
    for(int j=0;j<i-1;j++){
      if(badminton[j].roll<badminton[j+1].roll){
	badminton[j].roll=temp;
	badminton[j].roll=badminton[j+1].roll;
	badminton[j+1].roll=badminton[j].roll;}}}


  for(int i=0;i<nc;i++){//chess
    for(int j=0;j<i-1;j++){
      if(chess[j].points<chess[j+1].points){
	chess[j].points=temp;
	chess[j].points=chess[j+1].points;
	chess[j+1].points=chess[j].points;}}}
  for(int i=0;i<nc;i++){
    for(int j=0;j<i-1;j++){
      if(strcmp(chess[j].name,chess[j+1].name)<0){
	strcpy(chess[j].name,temp1);
	strcpy(chess[j].name,chess[j+1].name);
	strcpy(chess[j+1].name,temp1);}}}
  for(int i=0;i<nc;i++){
    for(int j=0;j<i-1;j++){
      if(chess[j].roll<chess[j+1].roll){
	chess[j].roll=temp;
	chess[j].roll=chess[j+1].roll;
	chess[j+1].roll=chess[j].roll;}}}

  for(int i=0;i<nca;i++){//carrom
    for(int j=0;j<i-1;j++){
      if(carrom[j].points<carrom[j+1].points){
	carrom[j].points=temp;
	carrom[j].points=carrom[j+1].points;
	carrom[j+1].points=carrom[j].points;}}}
  for(int i=0;i<nca;i++){
    for(int j=0;j<i-1;j++){
      if(strcmp(carrom[j].name,carrom[j+1].name)<0){
	strcpy(carrom[j].name,temp1);
	strcpy(carrom[j].name,carrom[j+1].name);
	strcpy(carrom[j+1].name,temp1);}}}
  for(int i=0;i<nca;i++){
    for(int j=0;j<i-1;j++){
      if(carrom[j].roll<carrom[j+1].roll){
	carrom[j].roll=temp;
	carrom[j].roll=carrom[j+1].roll;
	carrom[j+1].roll=carrom[j].roll;}}}

  for(int i=0;i<nt;i++){//tt
    for(int j=0;j<i-1;j++){
      if(tt[j].points<tt[j+1].points){
	tt[j].points=temp;
	tt[j].points=tt[j+1].points;
	tt[j+1].points=tt[j].points;}}}
  for(int i=0;i<nt;i++){
    for(int j=0;j<i-1;j++){
      if(strcmp(tt[j].name,tt[j+1].name)<0){
	strcpy(tt[j].name,temp1);
	strcpy(tt[j].name,tt[j+1].name);
	strcpy(tt[j+1].name,temp1);}}}
  for(int i=0;i<nt;i++){
    for(int j=0;j<i-1;j++){
      if(tt[j].roll<tt[j+1].roll){
	tt[j].roll=temp;
	tt[j].roll=tt[j+1].roll;
	tt[j+1].roll=tt[j].roll;}}}
  //printing 

  printf("printing badminton data\n");
  for(int i=0;i<nb;i++){
    printf("student %d: roll-%u, name-%s, points-%i\n",i,badminton[i].roll,badminton[i].name,badminton[i].points);}

  printf("\nprinting chess data\n");
  for(int i=0;i<nc;i++){
    printf("student %d: roll-%u, name-%s, points-%i\n",i,chess[i].roll,chess[i].name,chess[i].points);}

  printf("\nprinting carrom data\n");
  for(int i=0;i<nca;i++){
    printf("student %d: roll-%u, name-%s, points-%i\n",i,carrom[i].roll,carrom[i].name,carrom[i].points);}

  printf("\nprinting tt data\n");
  for(int i=0;i<nt;i++){
    printf("student %d: roll-%u, name-%s, points-%i\n",i,tt[i].roll,tt[i].name,tt[i].points);}
}

int findconsolationwinner(){
  int rollno[40],i1=0,roll1[40],maxp=0,maxs=0,i3;
  for(int j1=0;j1<nb;j1++)
    rollno[i1]==badminton[j1].roll;i1++;
  for(int j2=0;j2<nc;j2++)
    rollno[i1]==chess[j2].roll;i1++;
  for(int j3=0;j3<nca;j3++)
    rollno[i1]==carrom[j3].roll;i1++;
  for(int j4=0;j4<nt;j4++)
    rollno[i1]==tt[j4].roll;i1++;
  for(int j=0;j<40;j++){
    for(int ib=0;ib<nb;ib++){
      if(rollno[j]==badminton[ib].roll){
	  maxp=badminton[ib].points;
	  maxs=1;
	  i3=ib;
      }}
    for(int ib=0;ib<nc;ib++){
      if(rollno[j]==chess[ib].roll){
	if(maxp<=chess[ib].points){
	  maxp=chess[ib].points;
	  maxs=2;
	  i3=ib;
	}}}
    for(int ib=0;ib<nca;ib++){
      if(rollno[j]==carrom[ib].roll){
	if(maxp<=carrom[ib].points){
	  maxp=carrom[ib].points;
	  maxs=3;
	  i3=ib;
	}}}
    for(int ib=0;ib<nt;ib++){
      if(rollno[j]==tt[ib].roll){
	if(maxp<=tt[ib].points){
	  maxp=tt[ib].points;
	  maxs=4;
	  i3=ib;
	}}}
    if(maxs==1)
      printf("roll-%u, name-%s, points-%i\n",badminton[i3].roll,badminton[i3].name,badminton[i3].points);
    else if(maxs==2)
      printf("roll-%u, name-%s, points-%i\n",chess[i3].roll,chess[i3].name,chess[i3].points);
    else if(maxs==3)
      printf("roll-%u, name-%s, points-%i\n",carrom[i3].roll,carrom[i3].name,carrom[i3].points);
    else if(maxs==4)
      printf("roll-%u, name-%s, points-%i\n",tt[i3].roll,tt[i3].name,tt[i3].points);
    
  }}
  
    
  
 
  





int main(){
  int pt,chk=0,tem=0;
  unsigned int rt;
  char namet[20];
  printf("Enter the no of students in badminton\n");
  scanf("%d",&nb);
  printf("Enter the no of students in chess\n");
  scanf("%d",&nc);
  printf("Enter the no of students in carrom\n");
  scanf("%d",&nca);
  printf("Enter the no of students in tt\n");
  scanf("%d",&nt);
  for(int i=0;i<nb;i++){//for badminton
    printf("enter the roll for badminton\n");
    scanf("%u",&rt);
    printf("enter the name for badminton\n");
    scanf("%s",namet);
    printf("enter points for badminton\n");
    scanf("%d",&pt);
    for(int j=0;j<i;j++){
      if(rt==badminton[j].roll){
	strcpy(badminton[j].name,namet);
	badminton[j].points=pt;
	printf("replacing entry\n");
	chk=1;
	tem++;
      }}
    if(chk!=1){
      badminton[i-tem].roll=rt;
      strcpy(badminton[i-tem].name,namet);
      badminton[i-tem].points=pt;
    }
    chk=0;}
  nb-=tem;
  tem=0;


  for(int i=0;i<nc;i++){//for chess
    printf("enter the roll for chess\n");
    scanf("%u",&rt);
    printf("enter the name for chess\n");
    scanf("%s",namet);
    printf("enter points for chess\n");
    scanf("%d",&pt);
    for(int j=0;j<i;j++){
      if(rt==chess[j].roll){
	strcpy(chess[j].name,namet);
	chess[j].points=pt;
	printf("replacing entry \n");
	chk=1;
	tem++;
      }}
    if(chk!=1){
      chess[i-tem].roll=rt;
      strcpy(chess[i-tem].name,namet);
      chess[i-tem].points=pt;}
    chk=0;}
  nc-=tem;
  tem=0;


  for(int i=0;i<nca;i++){//for carrom
    printf("enter the roll for carrom\n");
    scanf("%u",&rt);
    printf("enter the name for carrom\n");
    scanf("%s",namet);
    printf("enter points for carrom\n");
    scanf("%d",&pt);
    for(int j=0;j<i;j++){
      if(rt==carrom[j].roll){
	strcpy(carrom[j].name,namet);
	carrom[j].points=pt;
	printf("replacing entry\n");
	chk=1;
	tem++;
      }}
    if(chk!=1){
      carrom[i-tem].roll=rt;
      strcpy(carrom[i-tem].name,namet);
      carrom[i-tem].points=pt;}
    chk=0;}
  nca-=tem;
  tem=0;

  for(int i=0;i<nt;i++){//for tt
    printf("enter the roll for tt\n");
    scanf("%u",&rt);
    printf("enter the name for tt\n");
    scanf("%s",namet);
    printf("enter points for tt\n");
    scanf("%d",&pt);
    for(int j=0;j<i;j++){
      if(rt==tt[j].roll){
	strcpy(tt[j].name,namet);
	tt[j].points=pt;
	printf("replacing the entry\n");
	chk=1;
	tem++;
      }}
    if(chk!=1){
      tt[i-tem].roll=rt;
      strcpy(tt[i-tem].name,namet);
      tt[i-tem].points=pt;}
    chk=0;}
  nt-=tem;
  tem=0;
  //printing
  printf("printing badminton data\n");
  for(int i=0;i<nb;i++){
    printf("student %d: roll-%u, name-%s, points-%i\n",i,badminton[i].roll,badminton[i].name,badminton[i].points);}

  printf("\nprinting chess data\n");
  for(int i=0;i<nc;i++){
    printf("student %d: roll-%u, name-%s, points-%i\n",i,chess[i].roll,chess[i].name,chess[i].points);}

  printf("\nprinting carrom data\n");
  for(int i=0;i<nca;i++){
    printf("student %d: roll-%u, name-%s, points-%i\n",i,carrom[i].roll,carrom[i].name,carrom[i].points);}

  printf("\nprinting tt data\n");
  for(int i=0;i<nt;i++){
    printf("student %d: roll-%u, name-%s, points-%i\n",i,tt[i].roll,tt[i].name,tt[i].points);}
  displaymeritlist();
  findconsolationwinner();
}



  
  
  

  
  

      
    
    
	
    
