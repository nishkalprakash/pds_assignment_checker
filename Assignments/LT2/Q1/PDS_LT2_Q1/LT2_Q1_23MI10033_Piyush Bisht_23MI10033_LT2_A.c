//Roll No.: 23MI10033
//Name: Piyush Bisht
//Set: A


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void findChamp();
void findRunnersUp();
void findConsolationWinners();
int gamesPlayed(int roll);
int totalScore(int roll,int m);
void displayMeritList(int n, int p, int q, int r);


typedef struct {
  unsigned int roll;
  char name[20];
  int points;
}stud;

stud badminton[10], chess[10], carrom[10], tt[10], tmp[30];

int main(){
  int nb,nch,nca,nt;
  printf("Enter the number of students participating in badminton: ");
  scanf("%d",&nb);
  printf("\nEnter the number of students participating in chess: ");
  scanf("%d",&nch);
  printf("\nEnter the number of students participating in carrom: ");
  scanf("%d",&nca);
  printf("\nEnter the number of students participating in table tennis: ");
  scanf("%d",&nt);

  
  printf("\nEnter the details of students participating in badminton:");
  for (int i=0;i<nb;i++){
    int j=i;
    printf("\nEnter the details of student %d: \nRoll: ",i+1);
    scanf("%u",&badminton[j].roll);
    for (int k=0;k<i;k++){
      if (badminton[k].roll==badminton[j].roll){
	printf("Identical Roll No. found: \nOverwrite Entries:\n");
	j=k;
	i--;
      }
    }
    printf("Name: ");
    scanf(" %s",badminton[j].name);
    printf("Points: ");
    scanf("%d",&badminton[j].points);
  }

  printf("\nEnter the details of students participating in chess:");
  for (int i=0;i<nch;i++){
    int j=i;
    printf("\nEnter the details of student %d: \nRoll: ",i+1);
    scanf("%u",&chess[j].roll);
    for (int k=0;k<i;k++){
      if (chess[k].roll==chess[j].roll){
	printf("Identical Roll No. found: \nOverwrite Entries:\n");
	j=k;
	i--;
      }
    }
    printf("Name: ");
    scanf(" %s",chess[j].name);
    printf("Points: ");
    scanf("%d",&chess[j].points);
  }

  printf("\nEnter the details of students participating in carrom:");
  for (int i=0;i<nca;i++){
    int j=i;
    printf("\nEnter the details of student %d: \nRoll: ",i+1);
    scanf("%u",&carrom[j].roll);
    for (int k=0;k<i;k++){
      if (carrom[k].roll==carrom[j].roll){
	printf("Identical Roll No. found: \nOverwrite Entries:\n");
	j=k;
	i--;
      }
    }
    printf("Name: ");
    scanf(" %s",carrom[j].name);
    printf("Points: ");
    scanf("%d",&carrom[j].points);
  }

  printf("\nEnter the details of students participating in table tennis:");
  for (int i=0;i<nt;i++){
    int j=i;
    printf("\nEnter the details of student %d: \nRoll: ",i+1);
    scanf("%u",&tt[j].roll);
    for (int k=0;k<i;k++){
      if (tt[k].roll==tt[j].roll){
	printf("Identical Roll No. found: \nOverwrite Entries:\n");
	j=k;
	i--;
      }
    }
    printf("Name: ");
    scanf(" %s",tt[j].name);
    printf("Points: ");
    scanf("%d",&tt[j].points);
  }

  printf("\nDetails of students participating in badminton:");
  for (int i=0;i<nb;i++){
    printf("\nRoll No.: %u",badminton[i].roll);
    printf("\nName: %s",badminton[i].name);
    printf("\nPoints: %d\n",badminton[i].points);
  } 
  printf("\nDetails of students participating in chess:");
  for (int i=0;i<nch;i++){
    printf("\nRoll No.: %u",chess[i].roll);
    printf("\nName: %s",chess[i].name);
    printf("\nPoints: %d\n",chess[i].points);
  }
  printf("\nDetails of students participating in carrom:");
  for (int i=0;i<nca;i++){
    printf("\nRoll No.: %u",carrom[i].roll);
    printf("\nName: %s",carrom[i].name);
    printf("\nPoints: %d\n",carrom[i].points);
  }
  printf("\nDetails of students participating in tabletennis:");
  for (int i=0;i<nt;i++){
    printf("\nRoll No.: %u",tt[i].roll);
    printf("\nName: %s",tt[i].name);
    printf("\nPoints: %d\n",tt[i].points);
  }
  findChamp();
  findRunnersUp();
  findConsolationWinners();
  displayMeritList(nb,nch,nca,nt);
  

  return 0;
}

int gamesPlayed(int roll){
  int g;
  for (int k=0;k<10;k++){
    if (badminton[k].roll==roll)g++;
  }
  for (int k=0;k<10;k++){
    if (chess[k].roll==roll)g++;
  }
  for (int k=0;k<10;k++){
    if (carrom[k].roll==roll)g++;
  }
  for (int k=0;k<10;k++){
    if (tt[k].roll==roll)g++;
  }
  return g;
}

int totalScore(int roll,int m){
  int t=0, ar[4],i=0;
  for (int k=0;k<10;k++){
    if (badminton[k].roll==roll){
      ar[i]=badminton[k].points;
      i++;
    }
  }
  for (int k=0;k<10;k++){
    if (chess[k].roll==roll){
      ar[i]=chess[k].points;
      i++;
    }
  }
  for (int k=0;k<10;k++){
    if (carrom[k].roll==roll){
      ar[i]=carrom[k].points;
      i++;
    }
  }
  for (int k=0;k<10;k++){
    if (tt[k].roll==roll){
      ar[i]=tt[k].points;
    }
  }
  
  for (int j=0;j<m;j++){
    int max=0;
    for (int k=0;k<i;k++){
      if (ar[k]>max){
	max=ar[k];
	ar[k]=0;
      }
    }
    t+=max;
  }  
    
  return t;
}


void findChamp(){
  int roll[40],k=0,l,b[10],ch[10],ca[10],t[10];
  for (int i=0;i<40;i++)roll[i]=0;
  for (int i=0;i<10;i++){
    if (badminton[i].roll){
      for (int j=0;j<k;j++){
	if (badminton[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=badminton[i].roll;
	b[l]=i;
	l++;
      }
    }
  }
  for (int i=0;i<10;i++){
    if (chess[i].roll){
      for (int j=0;j<k;j++){
	if (chess[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=chess[i].roll;
	ch[l]=i;
	l++;
      }
    }
  }
  for (int i=0;i<10;i++){
    if (carrom[i].roll){
      for (int j=0;j<k;j++){
	if (carrom[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=carrom[i].roll;
	ca[l]=i;
	l++;
      }
    }
  }
  for (int i=0;i<10;i++){
    if (tt[i].roll){
      for (int j=0;j<k;j++){
	if (tt[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=tt[i].roll;
	t[l]=i;
	l++;
      }
    }
  }
  int z=0;
  for (int i=0;l+1;i++){
    
    if (gamesPlayed(roll[i])>=3){
      tmp[z].roll=roll[i];
      z++;
    }
  }
  for (int i=0;i<z;i++){
    for (int j=0;j<10;j++){
      if (tmp[i].roll==badminton[j].roll)tmp[i]=badminton[i];
      if (tmp[i].roll==chess[j].roll)tmp[i]=chess[i];
      if (tmp[i].roll==carrom[j].roll)tmp[i]=carrom[i];
      if (tmp[i].roll==tt[j].roll)tmp[i]=tt[i];
    }
  }
  for (int i=0;i<z;i++){
    tmp[i].points=totalScore(tmp[i].roll,3);
  }
  printf("\n\nChampion List:");
  int maxp=0;
  for (int i=0;i<z;i++){
    if (tmp[i].points>maxp){
      max=tmp[i].points;
    }
  }
  for (int i=0;i<z;i++){
    if (tmp[i].points==maxp){
      printf("\nRoll No.: %u",tmp[i].roll);
      printf("\nName: %s",tmp[i].name);
      printf("\nTotal Points: %d\n",tmp[i].points);
      for (int j=0;j<10;j++){
	if (tmp[i].roll==badminton[j].roll){
	  printf("\nBadminton Points: %d",badminton[j].points);
	}
      }
      for (int j=0;j<10;j++){
	if (tmp[i].roll==chess[j].roll){
	  printf("\nChess Points: %d",chess[j].points);
	}
      }
      for (int j=0;j<10;j++){
	if (tmp[i].roll==carrom[j].roll){
	  printf("\nCarrom Points: %d",carrom[j].points);
	}
      }
      for (int j=0;j<10;j++){
	if (tmp[i].roll==tt[j].roll){
	  printf("\nTableTennis Points: %d",tt[j].points);
	}
      }
    }
  }
  
}
void findRunnersUp(){
  int roll[40],k=0,l,b[10],ch[10],ca[10],t[10];
  for (int i=0;i<40;i++)roll[i]=0;
  for (int i=0;i<10;i++){
    if (badminton[i].roll){
      for (int j=0;j<k;j++){
	if (badminton[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=badminton[i].roll;
	b[l]=i;
	l++;
      }
    }
  }
  for (int i=0;i<10;i++){
    if (chess[i].roll){
      for (int j=0;j<k;j++){
	if (chess[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=chess[i].roll;
	ch[l]=i;
	l++;
      }
    }
  }
  for (int i=0;i<10;i++){
    if (carrom[i].roll){
      for (int j=0;j<k;j++){
	if (carrom[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=carrom[i].roll;
	ca[l]=i;
	l++;
      }
    }
  }
  for (int i=0;i<10;i++){
    if (tt[i].roll){
      for (int j=0;j<k;j++){
	if (tt[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=tt[i].roll;
	t[l]=i;
	l++;
      }
    }
  }
  int z=0;
  for (int i=0;l+1;i++){
    
    if (gamesPlayed(roll[i])>=2){
      tmp[z].roll=roll[i];
      z++;
    }
  }
  for (int i=0;i<z;i++){
    for (int j=0;j<10;j++){
      if (tmp[i].roll==badminton[j].roll)tmp[i]=badminton[i];
      if (tmp[i].roll==chess[j].roll)tmp[i]=chess[i];
      if (tmp[i].roll==carrom[j].roll)tmp[i]=carrom[i];
      if (tmp[i].roll==tt[j].roll)tmp[i]=tt[i];
    }
  }
  for (int i=0;i<z;i++){
    tmp[i].points=totalScore(tmp[i].roll,2);
  }
  printf("\n\nRunner ups:");
  int maxp=0;
  for (int i=0;i<z;i++){
    if (tmp[i].points>maxp){
      max=tmp[i].points;
    }
  }
  for (int i=0;i<z;i++){
    if (tmp[i].points==maxp){
      printf("\nRoll No.: %u",tmp[i].roll);
      printf("\nName: %s",tmp[i].name);
      printf("\nTotal Points: %d\n",tmp[i].points);
      for (int j=0;j<10;j++){
	if (tmp[i].roll==badminton[j].roll){
	  printf("\nBadminton Points: %d",badminton[j].points);
	}
      }
      for (int j=0;j<10;j++){
	if (tmp[i].roll==chess[j].roll){
	  printf("\nChess Points: %d",chess[j].points);
	}
      }
      for (int j=0;j<10;j++){
	if (tmp[i].roll==carrom[j].roll){
	  printf("\nCarrom Points: %d",carrom[j].points);
	}
      }
      for (int j=0;j<10;j++){
	if (tmp[i].roll==tt[j].roll){
	  printf("\nTableTennis Points: %d",tt[j].points);
	}
      }
    }
  }
  
}
void findConsolationWinner(){
  int roll[40],k=0,l,b[10],ch[10],ca[10],t[10];
  for (int i=0;i<40;i++)roll[i]=0;
  for (int i=0;i<10;i++){
    if (badminton[i].roll){
      for (int j=0;j<k;j++){
	if (badminton[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=badminton[i].roll;
	b[l]=i;
	l++;
      }
    }
  }
  for (int i=0;i<10;i++){
    if (chess[i].roll){
      for (int j=0;j<k;j++){
	if (chess[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=chess[i].roll;
	ch[l]=i;
	l++;
      }
    }
  }
  for (int i=0;i<10;i++){
    if (carrom[i].roll){
      for (int j=0;j<k;j++){
	if (carrom[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=carrom[i].roll;
	ca[l]=i;
	l++;
      }
    }
  }
  for (int i=0;i<10;i++){
    if (tt[i].roll){
      for (int j=0;j<k;j++){
	if (tt[i].roll==roll[j])k=1;
      }
      if (!k){
	roll[l]=tt[i].roll;
	t[l]=i;
	l++;
      }
    }
  }
  int z=0;
  for (int i=0;l+1;i++){
    
    if (gamesPlayed(roll[i])>=1){
      tmp[z].roll=roll[i];
      z++;
    }
  }
  for (int i=0;i<z;i++){
    for (int j=0;j<10;j++){
      if (tmp[i].roll==badminton[j].roll)tmp[i]=badminton[i];
      if (tmp[i].roll==chess[j].roll)tmp[i]=chess[i];
      if (tmp[i].roll==carrom[j].roll)tmp[i]=carrom[i];
      if (tmp[i].roll==tt[j].roll)tmp[i]=tt[i];
    }
  }
  for (int i=0;i<z;i++){
    tmp[i].points=totalScore(tmp[i].roll,1);
  }
  printf("\n\nConslation Winners:");
  int maxp=0;
  for (int i=0;i<z;i++){
    if (tmp[i].points>maxp){
      max=tmp[i].points;
    }
  }
  for (int i=0;i<z;i++){
    if (tmp[i].points==maxp){
      printf("\nRoll No.: %u",tmp[i].roll);
      printf("\nName: %s",tmp[i].name);
      printf("\nTotal Points: %d\n",tmp[i].points);
      for (int j=0;j<10;j++){
	if (tmp[i].roll==badminton[j].roll){
	  printf("\nBadminton Points: %d",badminton[j].points);
	}
      }
      for (int j=0;j<10;j++){
	if (tmp[i].roll==chess[j].roll){
	  printf("\nChess Points: %d",chess[j].points);
	}
      }
      for (int j=0;j<10;j++){
	if (tmp[i].roll==carrom[j].roll){
	  printf("\nCarrom Points: %d",carrom[j].points);
	}
      }
      for (int j=0;j<10;j++){
	if (tmp[i].roll==tt[j].roll){
	  printf("\nTableTennis Points: %d",tt[j].points);
	}
      }
    }
  }
  
}
  
  
  

void displayMeritList(int n, int p, int q, int r){
  for (int i=0;i<n;i++){
    tmp[i].points=badminton[i].points;
    for (int j=i+1;j<n;j++){
      if (badminton[j].points>tmp[i].points)tmp[i]=badminton[j];
    }
  }
  printf("\nBadminton Merit List;");
  for (int i=0;i<n;i++){
    printf("\nRoll No.: %u",tmp[i].roll);
    printf("\nName: %s",tmp[i].name);
    printf("\nPoints: %d\n",tmp[i].points);
  }
  for (int i=0;i<p;i++){
    tmp[i].points=chess[i].points;
    for (int j=i+1;j<p;j++){
      if (chess[j].points>tmp[i].points)tmp[i]=chess[j];
    }
  }
  printf("\nChess Merit List;");
  for (int i=0;i<p;i++){
    printf("\nRoll No.: %u",tmp[i].roll);
    printf("\nName: %s",tmp[i].name);
    printf("\nPoints: %d\n",tmp[i].points);
  }
  for (int i=0;i<q;i++){
    tmp[i].points=carrom[i].points;
    for (int j=i+1;j<q;j++){
      if (carrom[j].points>tmp[i].points)tmp[i]=carrom[j];
    }
  }
  printf("\nCarrom Merit List;");
  for (int i=0;i<q;i++){
    printf("\nRoll No.: %u",tmp[i].roll);
    printf("\nName: %s",tmp[i].name);
    printf("\nPoints: %d\n",tmp[i].points);
  }
  for (int i=0;i<r;i++){
    tmp[i].points=tt[i].points;
    for (int j=i+1;j<r;j++){
      if (tt[j].points>tmp[i].points)tmp[i]=tt[j];
    }
  }
  printf("\nTableTennis Merit List;");
  for (int i=0;i<r;i++){
    printf("\nRoll No.: %u",tmp[i].roll);
    printf("\nName: %s",tmp[i].name);
    printf("\nPoints: %d\n",tmp[i].points);
  }
}
  
    
    


    
    

  
