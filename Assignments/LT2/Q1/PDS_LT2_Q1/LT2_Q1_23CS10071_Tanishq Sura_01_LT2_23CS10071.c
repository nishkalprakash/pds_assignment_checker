//name tanishq sura
//roll no 23CS10071
//set A

#include<stdio.h>
typedef struct{
  unsigned int roll;
  char name[20];
  int points;
}stud;

stud badminton[10];
stud chess[10];
stud carrom[10];
stud tt[10];
stud tmp[30];
int nbadminton,ncarrom,nchess,ntt;  //these are the no. of students participating in each
/*stud **sports=(int **)malloc(4*sizeof(stud *));        //to make it easier to read

sports[0]=badminton;
sports[1]=chess;
sports[2]=carrom;
sports[3]=tt;*/
void findChamp();        //no arguement required as sports are global arrays
void displayMeritList();

int main(){
  printf("Enter the number of students participating for badminton: ");
  scanf("%d",&nbadminton);
  for(int i=0;i<nbadminton;i++){
     printf("enter the roll no. of student %d : ",i+1);
     scanf("%u",&(badminton[i].roll));
     printf("enter the name of student %d : ",i+1);
     scanf("%s",badminton[i].name);
     printf("enter the points of student %d : ",i+1);
     scanf("%d",&(badminton[i].points));
     for(int j=0;j<i;j++){
       if(badminton[i].roll==badminton[j].roll){
         printf("duplicate roll no. has been deleted\n");
	 for(int k=j;k<i;k++){
	   badminton[k]=badminton[k+1];
	 }
	 i--;
	 break;
       }
     }
  }
  printf("Enter the number of students participating for chess: ");
  scanf("%d",&nchess);
  for(int i=0;i<nchess;i++){
     printf("enter the roll no. of student %d : ",i+1);
     scanf("%u",&(chess[i].roll));
     printf("enter the name of student %d : ",i+1);
     scanf("%s",chess[i].name);
     printf("enter the points of student %d : ",i+1);
     scanf("%d",&(chess[i].points));
     for(int j=0;j<i;j++){
       if(chess[i].roll==chess[j].roll){
         printf("duplicate roll no. has been deleted\n");
	 for(int k=j;k<i;k++){
	   chess[k]=chess[k+1];
	 }
	 i--;
	 break;
       }
     }
  }
  printf("Enter the number of students participating for carrom: ");
  scanf("%d",&ncarrom);
  for(int i=0;i<ncarrom;i++){
     printf("enter the roll no. of student %d : ",i+1);
     scanf("%u",&(carrom[i].roll));
     printf("enter the name of student %d : ",i+1);
     scanf("%s",carrom[i].name);
     printf("enter the points of student %d : ",i+1);
     scanf("%d",&(carrom[i].points));
     for(int j=0;j<i;j++){
       if(carrom[i].roll==carrom[j].roll){
         printf("duplicate roll no. has been deleted\n");
	 for(int k=j;k<i;k++){
	   carrom[k]=carrom[k+1];
	 }
	 i--;
	 break;
       }
     }
  }
  printf("Enter the number of students participating for tt: ");
  scanf("%d",&ntt);
  for(int i=0;i<ntt;i++){
     printf("enter the roll no. of student %d : ",i+1);
     scanf("%u",&(tt[i].roll));
     printf("enter the name of student %d : ",i+1);
     scanf("%s",tt[i].name);
     printf("enter the points of student %d : ",i+1);
     scanf("%d",&(tt[i].points));
     for(int j=0;j<i;j++){
       if(tt[i].roll==tt[j].roll){
         printf("duplicate roll no. has been deleted\n");
	 for(int k=j;k<i;k++){
	   tt[k]=tt[k+1];
	 }
	 i--;
	 break;
       }
     }
  }

  printf("students in badminton:\n");
  for(int i=0;i<nbadminton;i++){
    printf("student %d:\n",i+1);
    printf("roll no.: %u\nname: %s\npoints: %d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
  }
  printf("students in chess:\n");
  for(int i=0;i<nchess;i++){
    printf("student %d:\n",i+1);
    printf("roll no.: %u\nname: %s\npoints: %d\n",chess[i].roll,chess[i].name,chess[i].points);
  }
  printf("students in carrom:\n");
  for(int i=0;i<ncarrom;i++){
    printf("student %d:\n",i+1);
    printf("roll no.: %u\nname: %s\npoints: %d\n",carrom[i].roll,carrom[i].name,carrom[i].points);
  }
  printf("students in tt:\n");
  for(int i=0;i<ntt;i++){
    printf("student %d:\n",i+1);
    printf("roll no.: %u\nname: %s\npoints: %d\n",tt[i].roll,tt[i].name,tt[i].points);
  }
  findChamp();
  displayMeritList();
  
  return 0;
}

void findChamp(){
  stud games_4[10];                             //stores the students which have 4 games (to be used later to avoid duplicacy in tmp)
  int games[30][4];//stores the scores of tmp players in indivisual sports   
  int games4[10][4];
  int current=0,current4=0;                                  //stores the current position in tmp
  for(int i=0;i<nbadminton;i++){                  //we check for all roll nos in badminton
    int bad=badminton[i].points,che=0,carr=0,t=0;                         //temporary store points
    int count=1,sum=badminton[i].points,min=badminton[i].points;                    //min to remove the least points at end if 4 games are played

    for(int j=0;j<nchess;j++){
      if(chess[j].roll==badminton[i].roll){
	sum+=chess[j].points;
	che=chess[j].points;
	if(chess[j].points<min){
	  min=chess[j].points;
	}
	count++;}
    }
    for(int j=0;j<ncarrom;j++){
      if(carrom[j].roll==badminton[i].roll){
	sum+=carrom[j].points;
	carr=carrom[j].points;
	if(carrom[j].points<min){
	  min=carrom[j].points;
	}
	count++;}
    }
    for(int j=0;j<ntt;j++){
      if(tt[j].roll==badminton[i].roll) {
	sum+=tt[j].points;
	t=tt[j].points;
	if(tt[j].points<min){
	  min=tt[j].points;
	}
	count++;}
    }
    if(count==3){
      tmp[current]=badminton[i];
      tmp[current].points=sum;
      games[current][0]=bad;
      games[current][1]=che;
      games[current][2]=carr;
      games[current][3]=t;
      
      current++;
    }
    else if(count==4){
      games_4[current4]=badminton[i];
      games_4[current4].points=sum-min;
      games4[current4][0]=bad;
      games4[current4][1]=che;
      games4[current4][2]=carr;
      games4[current4][3]=t;
      current4++;
    }
  }
  for(int i=0;i<nchess;i++){                  //we check for all roll nos in chess with leftover games
    int bad=0,che=chess[i].points,carr=0,t=0;
    int count=1,sum=chess[i].points;
    for(int j=0;j<ncarrom;j++){
      if(carrom[j].roll==chess[i].roll){
	sum+=carrom[j].points;
	carr=carrom[j].points;
	count++;}
    }
    for(int j=0;j<ntt;j++){
      if(tt[j].roll==chess[i].roll) {
	sum+=tt[j].points;
	t=tt[j].points;
	count++;}
    }
    if(count==3){
      int flag=0;
      for(int j=0;i<current4;i++){
	if(chess[i].roll==games_4[j].roll){
	  flag=1;
	  break;}
      }
      if(flag==0){
	  tmp[current]=chess[i];
	  tmp[current].points=sum;
	  games[current][0]=bad;
          games[current][1]=che;
          games[current][2]=carr;
          games[current][3]=t;
	  current++;
      }
    }
  }
  for(int i=0;i<current4;i++,current++){               //to copy games_4 into tmp
    tmp[current]=games_4[i];
    games[current][0]=games4[i][0];
    games[current][1]=games4[i][1];
    games[current][2]=games4[i][2];
    games[current][3]=games4[i][3];
  }
  printf("the students playing 3 or more games are: \n");
  //now to print formatted checking from tmp array
  int index,max=0;
  for(int i=0;i<current;i++){         //current was updated to end+1 index
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
    printf("roll no.: %u\nname : %s, points in:\badminton %d, chess %d, carrom %d,tt %d\n",tmp[i].roll,tmp[i].name,games[i][0],games[i][1],games[i][2],games[i][3]);
  }
  printf("******\nthe champion is: \nroll no:%u\nname: %s\n points in:\badminton %d, chess %d, carrom %d,tt %d\n",tmp[index].roll,tmp[index].name,games[index][0],games[index][1],games[index][2],games[index][3]);
  return;
}


void displayMeritList(){
  printf("the badminton list");
  stud temp;
  for(int i=0;i<nbadminton;i++){
    int index,min=badminton[i].points;
    for(int j=i+1;j<nbadminton;j++){
      if(badminton[j].points<min){
	index=j;
	min=badminton[j].points;
      }
    }
    temp=badminton[i];
    badminton[i]=badminton[index];
    badminton[index]=temp;
  }
  for(int i=0;i<nbadminton;i++){
    printf("student %d:\n",i+1);
    printf("roll no.: %u\nname: %s\npoints: %d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
  }
  printf("the tt list");
  for(int i=0;i<nbadminton;i++){
    int index,min=tt[i].points;
    for(int j=i+1;j<ntt;j++){
      if(tt[j].points<min){
	index=j;
	min=tt[j].points;
      }
    }
    temp=tt[i];
    tt[i]=tt[index];
    tt[index]=temp;
  }
  for(int i=0;i<nbadminton;i++){
    printf("student %d:\n",i+1);
    printf("roll no.: %u\nname: %s\npoints: %d\n",tt[i].roll,tt[i].name,tt[i].points);
  }
  printf("the chess list");
  for(int i=0;i<nchess;i++){
    int index,min=chess[i].points;
    for(int j=i+1;j<nchess;j++){
      if(chess[j].points<min){
	index=j;
	min=chess[j].points;
      }
    }
    temp=chess[i];
    chess[i]=chess[index];
    chess[index]=temp;
  }
  for(int i=0;i<nchess;i++){
    printf("student %d:\n",i+1);
    printf("roll no.: %u\nname: %s\npoints: %d\n",chess[i].roll,chess[i].name,chess[i].points);
  }
  printf("the carrom list");
  for(int i=0;i<ncarrom;i++){
    int index,min=carrom[i].points;
    for(int j=i+1;j<ncarrom;j++){
      if(carrom[j].points<min){
	index=j;
	min=carrom[j].points;
      }
    }
    temp=carrom[i];
    badminton[i]=badminton[index];
    badminton[index]=temp;
  }
  for(int i=0;i<ncarrom;i++){
    printf("student %d:\n",i+1);
    printf("roll no.: %u\nname: %s\npoints: %d\n",carrom[i].roll,carrom[i].name,carrom[i].points);
  }
  }
    


