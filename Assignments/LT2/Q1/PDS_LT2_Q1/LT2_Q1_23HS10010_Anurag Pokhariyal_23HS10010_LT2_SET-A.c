// Roll No.: 23HS10010
// Name: Anurag Pokhariyal
// SET-A
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int bdnum,chsnum,crmnum,ttnum;

typedef struct{
  unsigned int roll;
  char name[20];
  int points;
}stud;

stud  badminton[10];
stud  chess[10];
stud  carrom[10];
stud  tt[10];
stud tmp[30];

void findChamp(stud a[], stud b[],stud c[], stud d[]);
void findRunnersUp(stud a[],stud b[],stud c[],stud d[]);



int main()
{

  // Badminton
  printf("Enter the number of participants in the badminton:");
  scanf("%d",&bdnum);
  for(int i = 0;i<bdnum;i++){
    printf("Enter the roll no. of student no. %d:\n",i+1);
    scanf("%u",&badminton[i].roll);
    for(int j = 0;j<bdnum;j++){
      if (badminton[i].roll == badminton[j].roll && i != j){
	printf("There is already an entry with the same roll no. !\n");
	while(badminton[i].roll == badminton[j].roll){
	  printf("Enter the roll no. of student no. %d:\n",i+1);
	  scanf("%u",&badminton[i].roll);
	} 
      }
    }
    printf("Enter the name of student no. %d:\n",i+1);
    scanf("%s",badminton[i].name);
    printf("Enter the points of student no. %d:\n",i+1);
    scanf("%d",&badminton[i].points);
  }

  //Carrom
  printf("Enter the number of participants in the carrom:");
  scanf("%d",&crmnum);
  for(int i = 0;i<crmnum;i++){
    printf("Enter the roll no. of student no. %d:\n",i+1);
    scanf("%u",&carrom[i].roll);
    for(int j = 0;j<crmnum;j++){
      if (carrom[i].roll == carrom[j].roll && i != j){
	printf("There is already an entry with the same roll no. !\n");
	while(carrom[i].roll == carrom[j].roll){
	  printf("Enter the roll no. of student no. %d:\n",i+1);
	  scanf("%u",&carrom[i].roll);
	} 
      }
    }
    printf("Enter the name of student no. %d:\n",i+1);
    scanf("%s",carrom[i].name);
    printf("Enter the points of student no. %d:\n",i+1);
    scanf("%d",&carrom[i].points);
  }

  //Chess
  printf("Enter the number of participants in chess:");
  scanf("%d",&chsnum);
  for(int i = 0;i<chsnum;i++){
    printf("Enter the roll no. of student no. %d:\n",i+1);
    scanf("%u",&chess[i].roll);
    for(int j = 0;j<chsnum;j++){
      if (chess[i].roll == chess[j].roll && i != j){
	printf("There is already an entry with the same roll no. !\n");
	while(chess[i].roll == chess[j].roll){
	  printf("Enter the roll no. of student no. %d:\n",i+1);
	  scanf("%u",&chess[i].roll);
	} 
      }
    }
    printf("Enter the name of student no. %d:\n",i+1);
    scanf("%s",chess[i].name);
    printf("Enter the points of student no. %d:\n",i+1);
    scanf("%d",&chess[i].points);
  }

  //Table Tennis
  printf("Enter the number of participants in Table Tennis:");
  scanf("%d",&ttnum);
  for(int i = 0;i<ttnum;i++){
    printf("Enter the roll no. of student no. %d:\n",i+1);
    scanf("%u",&tt[i].roll);
    for(int j = 0;j<ttnum;j++){
      if (tt[i].roll == tt[j].roll && i != j){
	printf("There is already an entry with the same roll no. !\n");
	while(tt[i].roll == tt[j].roll){
	  printf("Enter the roll no. of student no. %d:\n",i+1);
	  scanf("%u",&tt[i].roll);
	} 
      }
    }
    printf("Enter the name of student no. %d:\n",i+1);
    scanf("%s",tt[i].name);
    printf("Enter the points of student no. %d:\n",i+1);
    scanf("%d",&tt[i].points);
  }

  //INFO DISPLAY
  
  printf("BADMINTON INFO:\n");
  for(int i = 0;i<bdnum;i++){
    printf("ROLL NO: %u\n",badminton[i].roll);
    printf("NAME: %s\n",badminton[i].name);
    printf("POINTS: %d\n",badminton[i].points);
  }

  printf("CARROM INFO:\n");
  for(int i = 0;i<crmnum;i++){
    printf("ROLL NO: %u\n",carrom[i].roll);
    printf("NAME: %s\n",carrom[i].name);
    printf("POINTS: %d\n",carrom[i].points);
  }

  printf("CHESS INFO:\n");
  for(int i = 0;i<chsnum;i++){
    printf("ROLL NO: %u\n",chess[i].roll);
    printf("NAME: %s\n",chess[i].name);
    printf("POINTS: %d\n",chess[i].points);
  }

  printf("TABLE TENNIS INFO:\n");
  for(int i = 0;i<ttnum;i++){
    printf("ROLL NO: %u\n",tt[i].roll);
    printf("NAME: %s\n",tt[i].name);
    printf("POINTS: %d\n",tt[i].points);
  }

  findChamp(badminton,chess,carrom,tt);
  return 0;

  
}
void findChamp(stud a[], stud b[],stud c[], stud d[]){
  int numwin,flag,index=0;
  for(int i =0;i<bdnum;i++){
    int count =1,score=0;
    for(int j =0;i<crmnum;j++){
      for(int k =0;k<chsnum;k++){
	for(int l=0;l<ttnum;l++){
	  if(badminton[i].roll == carrom[j].roll){
	    count++;
	    score += carrom[j].points;
	    score += badminton[i].points;
	      }
	  if(badminton[i].roll == chess[k].roll){
	    count++;
	    score += chess[k].points;
	      }
	  if(badminton[i].roll == tt[l].roll){
	    count++;
	    score += tt[l].points;
	  }

	  if (count = 3){
	    index++;
	    tmp[index-1].roll = badminton[i].roll;
	    tmp[index-1].points = score;
	    strcpy(badminton[i].name,tmp[index-1].name);
	    break;
	  }

	  if(count = 4){
	    int tem;
	    int arr[4]={badminton[i].points,carrom[j].points,chess[k].points,tt[l].points};
	      for(int z= 0;z<3;z++){
	      for(int p=0;p<3;p++){
		if (arr[p]>arr[p+1]){
		  tem = arr[p+1];
		  arr[p+1] = arr[p];
		  arr[p] = tem;
	    }
	     
	      }
	      }
	    for (int i =1;i<4;i++){
	      score += arr[i];
	    }
	    index++;
	    tmp[index-1].roll = badminton[i].roll;
	    tmp[index-1].points = score;
	    strcpy(badminton[i].name,tmp[index-1].name);
	    break;
	  }

	  if(badminton[j].roll == chess[k].roll){
	    count++;
	    score += chess[k].points;
	      }
	  if(badminton[i].roll == tt[l].roll){
	    count++;
	    score += tt[l].points;
	  }
	    index++;
	    tmp[index-1].roll = badminton[i].roll;
	    tmp[index-1].points = score;
	    strcpy(badminton[i].name,tmp[index-1].name);
	    break;
	  
		
	}
      }
    }

  }
  printf("Students participated in 3+ games:");
  for(int i = 0;i<30;i++){
    printf("ROLL NO: %u\n",tmp[i].roll);
    printf("NAME: %s\n",tmp[i].name);
    printf("TOTAL POINTS: %d\n",tmp[i].points);
    printf("The Games that they have played in:");
    for(int j =0;j<10;j++){
      if (tmp[i].roll = badminton[j].roll){
	printf("Badminton:");
	printf("%d\n",badminton[j].points);
      }
	if (tmp[i].roll = carrom[j].roll){
	  printf("Carrom:");
	printf("%d\n",carrom[j].points);
	}
	  if (tmp[i].roll = chess[j].roll){
	    printf("Chess:");
	printf("%d\n",chess[j].points);
	  }
	    if (tmp[i].roll = tt[j].roll){
	      printf("Table Tennis:");
	printf("%d\n",tt[j].points);
	    }
    }
  }
}

