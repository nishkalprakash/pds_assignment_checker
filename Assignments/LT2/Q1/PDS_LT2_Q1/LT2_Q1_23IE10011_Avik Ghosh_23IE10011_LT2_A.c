//Name: Avik Ghosh
//Roll no.: 23IE10011
//Set A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stud{
  unsigned int roll;
  char name[21];
  int points;
};
struct stud badminton[10];
struct stud chess[10];
struct stud carrom[10];
struct stud tt[10];
struct stud tmp[30];
int a,b,c,d;

void findChamp(){
  int i,j,k=1,sum= 0,m;
  int pointer =0;
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      if((badminton[i].roll == chess[j].roll))
	k++; m = j;}
    for(j=0;j<c;j++){
      if((badminton[i].roll == carrom[j].roll)){
	if(k == 2){
	  if(carrom[j].points > chess[m].points)
	    sum += badminton[i].points + carrom[j].points;
	  else
	    sum += badminton[i].points + chess[m].points;
	}
     
	if((badminton[i].roll == tt[j].roll))
	  m++;
	pointer = i;
	sum += badminton[i].points + tt[j].points;
      }
    }
    if(m == 3){
      tmp[pointer].points = sum;
    }
  }
}


void displayMeritList(){
  int i,j;
  struct stud t;
  printf("Students in badminton\n");
  printf("Roll no.\tName\tPoints\n");
  for(i=0;i<a;i++){
    for(j=i+1;j<a;j++){
      if(badminton[i].points < badminton[j].points)
	t = badminton[i];
      badminton[i] = badminton[j];
      badminton[j] = t;
    }
  }
  for(i=0;i<a;i++)
    printf("%u\t%s\t%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
    
  printf("Students in carrom\n");
  printf("Roll no.\tName\tPoints\n");
  for(i=0;i<c;i++){
    for(j=i+1;j<c;j++){
      if(carrom[i].points < carrom[j].points)
	t = carrom[i];
      carrom[i] = carrom[j];
      carrom[j] = t;
    }
  }
  for(i=0;i<c;i++)
    printf("%u\t%s\t%d\n",carrom[i].roll,carrom[i].name,carrom[i].points);

  printf("Students in chess\n");
  printf("Roll no.\tName\tPoints\n");
  for(i=0;i<b;i++){
    for(j=i+1;j<b;j++){
      if(chess[i].points < chess[j].points){	  
	t = chess[i];
	chess[i] = chess[j];
	chess[j] = t;
      }
      else if(chess[i].points == chess[j].points){
	if(strcmp(chess[i].name,chess[j].name) > 0){
	  t = chess[i];
	  chess[i] = chess[j];
	  chess[j] = t;
	}
      }
    }
  }
  for(i=0;i<b;i++)
    printf("%u\t%s\t%d\n",chess[i].roll,chess[i].name,chess[i].points);

  printf("Students in TT\n");
  printf("Roll no.\tName\tPoints\n");
  for(i=0;i<d;i++){
    for(j=i+1;j<d;j++){
      if(tt[i].points < tt[j].points){
	
	t = tt[i];
	tt[i] = tt[j];
	tt[j] = t;
      }
      else if(tt[i].points == tt[j].points){
	if(strcmp(tt[i].name,tt[j].name) > 0){
	  t = tt[i];
	  tt[i] = tt[j];
	  tt[j] = t;
	}
	else if(strcmp(tt[i].name,tt[j].name) == 0){
	  if(tt[i].roll > tt[j].roll){
	    t = tt[i];
	    tt[i] = tt[j];
	    tt[j] = t;
	  }
	}
      } 
    }
  }
    
  for(i=0;i<d;i++)
    printf("%u\t%s\t%d\n",tt[i].roll,tt[i].name,tt[i].points);
}   
  
       

int main(){
  int i;
  int j;int k=0;
  printf("Enter details of students playing in Badminton\n");
  printf("Enter number of students participated in Badminton: ");
  scanf("%d",&a);
  for(i=0;i<a;i++){
    printf("Enter roll number of student %d in badminton: ",i+1);
    scanf("%u",&(badminton[i].roll));
    for(j=0;j<i;j++){
      if(badminton[j].roll == badminton[i].roll){
	k=1; break;
      }
    }
    if(k){
      printf("Enter name of student %d in badminton: ",i+1);
      scanf("%[^\n]",badminton[j].name);
      printf("Enter points of student %d in badminton: ",i+1);
      scanf("%d",&(badminton[j].points));
    }
    else{
      printf("Enter name of student %d in badminton: ",i+1);
      scanf("%[^\n]",badminton[i].name);
      printf("Enter points of student %d in badminton: ",i+1);
      scanf("%d",&(badminton[i].points));
    }
  }
  k=0;
  printf("Enter number of students participated in Chess: ");
  scanf("%d",&b);
  for(i=0;i<b;i++){
    printf("Enter roll number of student %d in Chess: ",i+1);
    scanf("%u",&(chess[i].roll));
    for(j=0;j<i;j++){
      if(chess[j].roll == chess[i].roll){
	k=1; break;
      }
    }
    if(k){
      printf("Enter name of student %d in Chess: ",i+1);
      scanf("%[^\n]",chess[j].name);
      printf("Enter points of student %d in Chess: ",i+1);
      scanf("%d",&(chess[j].points));
    }
    else{
      printf("Enter name of student %d in Chess: ",i+1);
      scanf("%[^\n]",chess[i].name);
      printf("Enter points of student %d in Chess: ",i+1);
      scanf("%d",&(chess[i].points));
    }
  }
  printf("Enter number of students participated in Carrom: ");
  scanf("%d",&c);
  for(i=0;i<c;i++){
    printf("Enter roll number of student %d in Carrom: ",i+1);
    scanf("%u",&(carrom[i].roll));
    for(j=0;j<i;j++){
      if(carrom[j].roll == carrom[i].roll){
	k=1; break;
      }
    }
    if(k){
      printf("Enter name of student %d in Carrom: ",i+1);
      scanf("%[^\n]",carrom[i].name);
      printf("Enter points of student %d in Carrom: ",i+1);
      scanf("%d",&(carrom[i].points));
    }
    else{
      printf("Enter name of student %d in Carrom: ",i+1);
      scanf("%[^\n]",carrom[i].name);
      printf("Enter points of student %d in Carrom: ",i+1);
      scanf("%d",&(carrom[i].points));
    }
  }
  printf("Enter number of students participated in tt: ");
  scanf("%d",&d);
  for(i=0;i<d;i++){
    printf("Enter roll number of student %d in tt: ",i+1);
    scanf("%u",&(tt[i].roll));
    for(j=0;j<i;j++){
      if(carrom[j].roll == carrom[i].roll){
	k=1; break;
      }
    }
    if(k){
      printf("Enter name of student %d in tt: ",i+1);
      scanf("%[^\n]",tt[i].name);
      printf("Enter points of student %d in tt: ",i+1);
      scanf("%d",&(tt[i].points));
    }
    else{
      printf("Enter name of student %d in tt: ",i+1);
      scanf("%[^\n]",tt[i].name);
      printf("Enter points of student %d in tt: ",i+1);
      scanf("%d",&(tt[i].points));
    }
  }
  printf("Students in Badminton\n");
  printf("Roll no.\tName\tPoints\n");
  for(i=0;i<a;i++){
    printf("%u\t%s\t%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
  }
  printf("Students in Chess\n");
  printf("Roll no.\tName\tPoints\n");
  for(i=0;i<b;i++){
    printf("%u\t%s\t%d\n",chess[i].roll,chess[i].name,chess[i].points);
  } 
  printf("Students in Carrom\n");
  printf("Roll no.\tName\tPoints\n");
  for(i=0;i<c;i++){
    printf("%u\t%s\t%d\n",carrom[i].roll,carrom[i].name,carrom[i].points);
  }
  printf("Students in TT\n");
  printf("Roll no.\tName\tPoints\n");
  for(i=0;i<d;i++){
    printf("%u\t%s\t%d\n",tt[i].roll,tt[i].name,tt[i].points);
  }
    
  findChamp();
  displayMeritList();

  return 0;
}
  
