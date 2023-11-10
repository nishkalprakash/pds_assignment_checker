//ROLL NO.: 23ME10044
//NAME: LALIT KARTHIKEYAN.M.A
//Set A


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stud{

  unsigned int roll;
  char name[20];
  int points;
}badminton[10], carrom[10], chess[10], tt[10], temp[30];

int bmn, car, che, tablet;






//Function findChamp
void findChamp();
void findRunnersUp();


int main(){

  unsigned int rollt;
  int cbmn=0,ccar=0, cche=0, ctt=0;

  //Getting the details of badminton
  printf("Enter the total number of students participated in badminton: ");
  scanf("%d", &bmn);
	
  for(int i=0;i<bmn;i++){
    int flag=0;
    printf("Enter the roll number of student: ");
    scanf("%u",&rollt);
    for(int j=0;j<i;j++){
      if(badminton[j].roll==rollt){
	printf("Enter the name of the student: ");
	scanf(" %[^\n]",badminton[j].name);
	printf("Enter the points scored by the student in badminton: ");
	scanf("%d",&badminton[j].points);
	flag=1;
      }
    }
    
    if(flag==0){
      badminton[i].roll=rollt;
      printf("Enter the name of the student: ");
      scanf(" %s",badminton[i].name);
      printf("Enter the points scored by the student in badminton: ");
      scanf("%d",&badminton[i].points);
      cbmn++;
    }
      printf("\n");
  }

  //Getting the details of carrom
  printf("Enter the total number of students participated in Carrom: ");
  scanf("%d", &car);
	
  for(int i=0;i<car;i++){
    int flag=0;
    printf("Enter the roll number of student: ");
    scanf("%u",&rollt);
    for(int k=0;k<cbmn;k++){
      if(rollt==badminton[k].roll){
	carrom[i].roll=rollt;
	strcpy(carrom[i].name,badminton[k].name);
	printf("Name of the student: %s\n",carrom[i].name);
	printf("Enter the points scored by the student in carrom: ");
	scanf("%d",&carrom[i].points);
	ccar++;
	flag=1;
      }
    }

    for(int j=0;j<i;j++){
      if(carrom[j].roll==rollt){
	printf("Enter the name of the student: ");
	scanf("%s",carrom[j].name);
	printf("Enter the points scored by the student in carrom: ");
	scanf("%d",&carrom[j].points);
	flag=1;
      }
    }
    
    if(flag==0){
      carrom[i].roll=rollt;
      printf("Enter the name of the student: ");
      scanf(" %s",carrom[i].name);
      printf("Enter the points scored by the student in carrom: ");
      scanf("%d",&carrom[i].points);
      ccar++;
    }

      printf("\n");
  }


  //Getting the details of chess
  printf("Enter the total number of students participated in chess: ");
  scanf("%d", &che);
	
  for(int i=0;i<che;i++){
    int flag=0;
    printf("Enter the roll number of student: ");
    scanf("%u",&rollt);
    for(int k=0;k<cbmn;k++){
      if(rollt==badminton[k].roll){
	chess[i].roll=rollt;
	strcpy(chess[i].name,badminton[k].name);
	printf("Name of the student: %s\n",chess[i].name);
	printf("Enter the points scored by the student in chess: ");
	scanf("%d",&chess[i].points);
	cche++;
	flag=1;
      }
    }

    if(flag!=1){
      for(int k=0;k<ccar;k++){
      if(rollt==carrom[k].roll){
	chess[i].roll=rollt;
	strcpy(chess[i].name,carrom[k].name);
	printf("Name of the student: %s\n",chess[i].name);
	printf("Enter the points scored by the student in chess: ");
	scanf("%d",&chess[i].points);
	cche++;
	flag=1;
      }
    }
    }

    for(int j=0;j<i;j++){
      if(chess[j].roll==rollt){
	printf("Enter the name of the student: ");
	scanf("%s",chess[j].name);
	printf("Enter the points scored by the student in chess: ");
	scanf("%d",&chess[j].points);
	flag=1;
      }
    }
    
    if(flag==0){
      chess[i].roll=rollt;
      printf("Enter the name of the student: ");
      scanf(" %s",chess[i].name);
      printf("Enter the points scored by the student in chess: ");
      scanf("%d",&chess[i].points);
      cche++;
    }

      printf("\n");
  }

  //Getting the details of tt
  printf("Enter the total number of students participated in tt: ");
  scanf("%d", &tablet);
	
  for(int i=0;i<tablet;i++){
    int flag=0;
    printf("Enter the roll number of student: ");
    scanf("%u",&rollt);
    for(int k=0;k<cbmn;k++){
      if(rollt==badminton[k].roll){
	tt[i].roll=rollt;
	strcpy(tt[i].name,badminton[k].name);
	printf("Name of the student: %s\n",tt[i].name);
	printf("Enter the points scored by the student in tt: ");
	scanf("%d",&tt[i].points);
	ctt++;
	flag=1;
      }
    }

    if(flag!=1){
      for(int k=0;k<ccar;k++){
      if(rollt==carrom[k].roll){
	tt[i].roll=rollt;
	strcpy(tt[i].name,carrom[k].name);
	printf("Name of the student: %s\n",tt[i].name);
	printf("Enter the points scored by the student in tt: ");
	scanf("%d",&tt[i].points);
	ctt++;
	flag=1;
      }
    }
    }

    if(flag!=1){
      for(int k=0;k<cche;k++){
      if(rollt==chess[k].roll){
	tt[i].roll=rollt;
	strcpy(tt[i].name,chess[k].name);
	printf("Name of the student: %s\n",tt[i].name);
	printf("Enter the points scored by the student in tt: ");
	scanf("%d",&tt[i].points);
	ctt++;
	flag=1;
      }
    }
    }

    for(int j=0;j<i;j++){
      if(tt[j].roll==rollt){
	printf("Enter the name of the student: ");
	scanf("%s",tt[j].name);
	printf("Enter the points scored by the student in tt: ");
	scanf("%d",&tt[j].points);
	flag=1;
      }
    }
    
    if(flag==0){
      tt[i].roll=rollt;
      printf("Enter the name of the student: ");
      scanf(" %s",tt[i].name);
      printf("Enter the points scored by the student in tt: ");
      scanf("%d",&tt[i].points);
      ctt++;
    }

      printf("\n");
  }
  
  printf("Displaying the details of students\n\n");
  printf("Badminton\n");
  for(int i=0;i<cbmn;i++){
    printf("Roll Number: %u\n",badminton[i].roll);
    printf("Name: %s\n",badminton[i].name);
    printf("Points: %d\n",badminton[i].points);
    printf("\n");
  }bmn=cbmn;
  printf("-------------------------------------------------------------------------");

  printf("Carrom\n");
  for(int i=0;i<ccar;i++){
    printf("Roll Number: %u\n",carrom[i].roll);
    printf("Name: %s\n",carrom[i].name);
    printf("Points: %d\n",carrom[i].points);
    printf("\n");
  }car=ccar;
  printf("-------------------------------------------------------------------------");

    printf("Chess\n");
  for(int i=0;i<cche;i++){
    printf("Roll Number: %u\n",chess[i].roll);
    printf("Name: %s\n",chess[i].name);
    printf("Points: %d\n",chess[i].points);
    printf("\n");
  }che=cche;
  printf("-------------------------------------------------------------------------");

      printf("Table Tennis\n");
  for(int i=0;i<ctt;i++){
    printf("Roll Number: %u\n",tt[i].roll);
    printf("Name: %s\n",tt[i].name);
    printf("Points: %d\n",tt[i].points);
    printf("\n");
  }tablet=ctt;
  printf("-------------------------------------------------------------------------");  

  findChamp();
  findRunnersUp();
  
  return 0;
}

void findChamp(){
  int tpar=0;
  int x=0;
  int flag=0;
  unsigned int mroll;
  char ch='\0';
  int mmarks=0;
  int hmarks[4];
  for(int i=0;i<4;i++){
    hmarks[i]=-1;
  }
  unsigned int croll;
  for(int i=0;i<bmn;i++){
    int cmarks=0;
    tpar=1;
    int c=0;
    hmarks[c]=badminton[i].points;
    c++;
    croll=badminton[i].roll;
    for(int j=0;j<che;j++){
      if(chess[j].roll==croll){
	tpar++;
	hmarks[c]=chess[j].points;
	c++;
      }
    }
    for(int j=0;j<car;j++){
      if(carrom[j].roll==croll){
	tpar++;
	hmarks[c]=carrom[j].points;
	c++;
      }
    }
    for(int j=0;j<tablet;j++){
      if(tt[j].roll==croll){
	tpar++;
	hmarks[c]=tt[j].points;
	c++;
      }
    }
    for(int k=1;k<4;k++){
      for(int j=0;j<4-k;j++){
	if(hmarks[j]>hmarks[j+1]){
	  int temp=hmarks[j];
	  hmarks[j]=hmarks[j+1];
	  hmarks[j+1]=temp;
	}
      }
    }
    if(tpar==3){
      for(int a=1;a<4;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar==4){
      for(int a=1;a<4;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar>=3){
      if(cmarks>mmarks){
	mmarks=cmarks;
	temp[x].roll=badminton[i].roll;
	strcpy(temp[x].name,badminton[i].name);
	flag=1;
      }
      for(int b=0;b<x;b++){
	if(temp[b].roll!=badminton[i].roll){
	   if(mmarks!=0 && cmarks==mmarks){
	     temp[++x].roll=badminton[i].roll;
	     strcpy(temp[x].name,badminton[i].name);
	   }
	}	   
      }
    }
    for(int a=0;a<4;a++){
      hmarks[a]=-1;
    }
  }

 for(int i=0;i<che;i++){
   int cmarks=0;
    tpar=1;
    int c=0;
    hmarks[c]=chess[i].points;
    c++;
    croll=chess[i].roll;
    for(int j=0;j<bmn;j++){
      if(badminton[j].roll==croll){
	tpar++;
	hmarks[c]=badminton[j].points;
	c++;
      }
    }
    for(int j=0;j<car;j++){
      if(carrom[j].roll==croll){
	tpar++;
	hmarks[c]=carrom[j].points;
	c++;
      }
    }
    for(int j=0;j<tablet;j++){
      if(tt[j].roll==croll){
	tpar++;
	hmarks[c]=tt[j].points;
	c++;
      }
    }
    for(int k=1;k<4;k++){
      for(int j=0;j<4-k;j++){
	if(hmarks[j]>hmarks[j+1]){
	  int temp=hmarks[j];
	  hmarks[j]=hmarks[j+1];
	  hmarks[j+1]=temp;
	}
      }
    }
    if(tpar==3){
      for(int a=1;a<4;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar==4){
      for(int a=1;a<4;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar>=3){
      if(cmarks>mmarks){
	mmarks=cmarks;
	temp[x].roll=chess[i].roll;
	strcpy(temp[x].name,chess[i].name);
	flag=1;
      }
      for(int b=0;b<x;b++){
	if(temp[b].roll!=chess[i].roll){
	   if(mmarks!=0 && cmarks==mmarks){
	     temp[++x].roll=chess[i].roll;
	     strcpy(temp[x].name,chess[i].name);
	   }
	}	   
      }
     
    }
    for(int a=0;a<4;a++){
      hmarks[a]=-1;
    }
  }
 if(flag!=1)printf("No person have participated in more than 3 games!!");
 else{
   printf("Person participated in more than 3 sport with maximum points: \n");
   for(int i=0;i<=x;i++){
     printf("Roll NO.: %u, marks: %d, name: %s \n",temp[i].roll,mmarks,temp[i].name);
   }
 }
}

void findRunnersUp(){
  int tpar=0;
  int x=0;
  int flag=0;
  unsigned int mroll;
  char ch='\0';
  int mmarks=0;
  int hmarks[4];
  for(int i=0;i<4;i++){
    hmarks[i]=-1;
  }
  unsigned int croll;
  for(int i=0;i<bmn;i++){
    int cmarks=0;
    tpar=1;
    int c=0;
    hmarks[c]=badminton[i].points;
    c++;
    croll=badminton[i].roll;
    for(int j=0;j<che;j++){
      if(chess[j].roll==croll){
	tpar++;
	hmarks[c]=chess[j].points;
	c++;
      }
    }
    for(int j=0;j<car;j++){
      if(carrom[j].roll==croll){
	tpar++;
	hmarks[c]=carrom[j].points;
	c++;
      }
    }
    for(int j=0;j<tablet;j++){
      if(tt[j].roll==croll){
	tpar++;
	hmarks[c]=tt[j].points;
	c++;
      }
    }
    for(int k=1;k<4;k++){
      for(int j=0;j<4-k;j++){
	if(hmarks[j]>hmarks[j+1]){
	  int temp=hmarks[j];
	  hmarks[j]=hmarks[j+1];
	  hmarks[j+1]=temp;
	}
      }
    }
    if(tpar==3){
      for(int a=1;a<4;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar==4){
      for(int a=0;a<3;a++){
	cmarks+=hmarks[a];
      }
    }
     if(tpar==2){
      for(int a=0;a<2;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar>=2){
      if(cmarks>mmarks){
	mmarks=cmarks;
	temp[x].roll=badminton[i].roll;
	strcpy(temp[x].name,badminton[i].name);
	flag=1;
      }
      for(int b=0;b<x;b++){
	if(temp[b].roll!=badminton[i].roll){
	   if(mmarks!=0 && cmarks==mmarks){
	     temp[++x].roll=badminton[i].roll;
	     strcpy(temp[x].name,badminton[i].name);
	   }
	}	   
      }
    }
    for(int a=0;a<4;a++){
      hmarks[a]=-1;
    }
  }

 for(int i=0;i<tablet;i++){
   int cmarks=0;
    tpar=1;
    int c=0;
    hmarks[c]=tt[i].points;
    c++;
    croll=tt[i].roll;
    for(int j=0;j<bmn;j++){
      if(badminton[j].roll==croll){
	tpar++;
	hmarks[c]=badminton[j].points;
	c++;
      }
    }
    for(int j=0;j<car;j++){
      if(carrom[j].roll==croll){
	tpar++;
	hmarks[c]=carrom[j].points;
	c++;
      }
    }
    for(int j=0;j<che;j++){
      if(chess[j].roll==croll){
	tpar++;
	hmarks[c]=chess[j].points;
	c++;
      }
    }
    for(int k=1;k<4;k++){
      for(int j=0;j<4-k;j++){
	if(hmarks[j]>hmarks[j+1]){
	  int temp=hmarks[j];
	  hmarks[j]=hmarks[j+1];
	  hmarks[j+1]=temp;
	}
      }
    }
    if(tpar==3){
      for(int a=2;a<4;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar==4){
      for(int a=2;a<4;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar==2){
      for(int a=2;a<4;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar>=3){
      if(cmarks>mmarks){
	mmarks=cmarks;
	temp[x].roll=tt[i].roll;
	strcpy(temp[x].name,tt[i].name);
	flag=1;
      }
      for(int b=0;b<x;b++){
	if(temp[b].roll!=tt[i].roll){
	   if(mmarks!=0 && cmarks==mmarks){
	     temp[++x].roll=tt[i].roll;
	     strcpy(temp[x].name,tt[i].name);
	   }
	}	   
      }
     
    }
    for(int a=0;a<4;a++){
      hmarks[a]=-1;
    }
  }

  for(int i=0;i<che;i++){
   int cmarks=0;
    tpar=1;
    int c=0;
    hmarks[c]=chess[i].points;
    c++;
    croll=chess[i].roll;
    for(int j=0;j<bmn;j++){
      if(badminton[j].roll==croll){
	tpar++;
	hmarks[c]=badminton[j].points;
	c++;
      }
    }
    for(int j=0;j<car;j++){
      if(carrom[j].roll==croll){
	tpar++;
	hmarks[c]=carrom[j].points;
	c++;
      }
    }
    for(int j=0;j<tablet;j++){
      if(tt[j].roll==croll){
	tpar++;
	hmarks[c]=tt[j].points;
	c++;
      }
    }
    for(int k=1;k<4;k++){
      for(int j=0;j<4-k;j++){
	if(hmarks[j]>hmarks[j+1]){
	  int temp=hmarks[j];
	  hmarks[j]=hmarks[j+1];
	  hmarks[j+1]=temp;
	}
      }
    }
    if(tpar==3){
      for(int a=2;a<4;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar==4){
      for(int a=2;a<4;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar==2){
      for(int a=2;a<4;a++){
	cmarks+=hmarks[a];
      }
    }
    if(tpar>=3){
      if(cmarks>mmarks){
	mmarks=cmarks;
	temp[x].roll=chess[i].roll;
	strcpy(temp[x].name,chess[i].name);
	flag=1;
      }
      for(int b=0;b<x;b++){
	if(temp[b].roll!=chess[i].roll){
	   if(mmarks!=0 && cmarks==mmarks){
	     temp[++x].roll=chess[i].roll;
	     strcpy(temp[x].name,chess[i].name);
	   }
	}	   
      }
     
    }
    for(int a=0;a<4;a++){
      hmarks[a]=-1;
    }
  }
  
 if(flag!=1)printf("No person have participated in more than 2 games!!");
 else{
   printf("Person participated in more than 2 sport with maximum points: \n");
   for(int i=0;i<=x;i++){
     printf("Roll NO.: %u, marks: %d, name: %s \n",temp[i].roll,mmarks,temp[i].name);
   }
 }

}
