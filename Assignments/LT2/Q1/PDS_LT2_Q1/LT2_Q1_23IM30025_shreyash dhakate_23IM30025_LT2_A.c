//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
  unsigned roll;
  char name[20];
  int points;
}stud;
stud badminton[10];
stud chess[10];
stud carrom[10];
stud tt[10];
stud tmp[30];
void findChamp(stud badminton[10],stud chess[10],stud tt[10],stud tmp[30],int n1,int n2,int n3,int n4){
    int tp[30];
    char tpn[30][20];
    int i,total=n1+n2+n3+n4,tn=0;
    for(int i=0;i<total;i++ ){
      if(i<n1){
      tp[i]=badminton[i].roll;
      }
      if(i<n2+n1 && i>=n1){
      tp[i]=chess[i-n1].roll;
      }
      if(i<n3+n2+n1 && i>=n2+n1){
      tp[i]=carrom[i-n1-n2].roll;
      }
      else{
      tp[i]=tt[i-n1-n2-n3].roll;
      }
    }
    //after storing all roll numbers in tp just searching cou roll numbr occur more than 3 times
    for(int j=0;j<total;j++){
      int count=0,a[4];
      int x;
      if(a!=NULL){
	for(int l=0;l<x;l++){
	  if(j==a[l]){
	    j++;
	  }
	}
      }
      x=0;
      for(int k=j;k<total;k++){
	if(tp[j]==tp[k]){
	  count++;
	  a[x++]=k;
	}
	
	
      }
      if(count>=3){
	tmp[tn].roll=tp[j];
	tmp[tn].points=0;
	int m[4],p=0;
	for(int l=0;l<x;l++){
	  if(a[l]<n1){
	    strcpy(tmp[tn].name,badminton[a[l]].name);
	    m[p++]=tmp[tn].points+=badminton[a[l]].points;
	    
	  }
	  if(a[l]<n2+n1 && a[l]>=n1){
	    strcpy(tmp[tn].name,chess[a[l]-n1].name);
	    m[p++]=tmp[tn].points+=chess[a[l]-n1].points;
	  }
	  if(a[l]<n3+n2+n1 && a[l]>=n2+n1){
	     m[p++]=tmp[tn].points+=carrom[a[l]-n1-n2].points;
	  }
	  else{
	    m[p]=tmp[tn].points+=tt[a[l]-n1-n2-n3].points;
	  }
	  if (count==4){
	    int min=0;
	    for(int g=0;g<p;g++){
	      if(min>m[g]){
		min=m[g];
	      }
	    }
	    tmp[tn].points-=min;
	  }
	
	  
	}
	tn++;
      }
    }
    for(int i=0;i<tn;i++){
      printf("name:%s   points=%d\n",tmp[i].name,tmp[i].points);
    }
}
/*void displayMeritList(stud badminton[10],stud chess[10],stud tt[10],stud tmp[30],int n1,int n2,int n3,int n4){
  printf("For badminton\n");
  for(int i=0;i<n1-1;i++){
    if(badminton[i].points<badminton[i+1].points){
      stud temp=badminton[i+1].points;
      badminton[i+1].points=badminton[i].points;
      badminton[i].points=temp;
    }
  }
  for(int i=0;i<n2-1;i++){
    if(chess[i].points<chess[i+1].points){
      stud temp=chess[i+1].points;
      chess[i+1].points=chess[i].points;
      chess[i].points=temp;
    }
  }
  for(int i=0;i<n3-1;i++){
    if(carrom[i].points<carrom[i+1].points){
      stud temp=carrom[i+1].points;
      carrom[i+1].points=carrom[i].points;
      carrom[i].points=temp;
    }
  }
  for(int i=0;i<n4-1;i++){
    if(tt[i].points<tt[i+1].points){
       stud temp=tt[i+1].points;
      tt[i+1].points=tt[i].points;
      tt[i].points=temp;
    }
  }
   printf("\nBadminton Players-----------------------------------------------------\n");
  for(int i=0;i<n1;i++){
    printf("Rank %d  ",i+1);
    printf("Roll Number %u   Name:%s   Points:%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
  }
  printf("\nChess Players-----------------------------------------------------\n");
  for(int i=0;i<n2;i++){
    printf("Rank %d  ",i+1);
    printf("Roll Number %u   Name:%s   Points:%d\n",chess[i].roll,chess[i].name,chess[i].points);
  }
  printf("\ncarrom Players-----------------------------------------------------\n");
  for(int i=0;i<n3;i++){
    printf("Rank %d  ",i+1);
    printf("Roll Number %u   Name:%s   Points:%d\n",carrom[i].roll,carrom[i].name,carrom[i].points);
  }
  printf("\nTT Players-----------------------------------------------------\n");
  for(int i=0;i<n4;i++){
    printf("Rank %d  ",i+1);
    printf("Roll Number %u   Name:%s   Points:%d\n",tt[i].roll,tt[i].name,tt[i].points);
  }

}
*/
//the main funtion .................................
int main(){
  int n1,n2,n3,n4;
  //enteries in badminton........................................................
  printf("Enter the number of te students have participated in Badminton:");
  scanf("%d",&n1);
  for(int  i=0;i<n1;i++){
    printf("entr the details for player %d\n",i+1);
    printf("roll number:");
    scanf("%u",&badminton[i].roll);
    printf("%u\n",badminton[i].roll);
    printf("name:");
    scanf("%s",badminton[i].name);
    for(int j=0;j<i;j++){
      if(badminton[i].roll==badminton[j].roll){
	for(int k=j;k<i;k++){
	  badminton[k]=badminton[k+1];
	  i--;
	}
      }
    }
    printf("points:");
    scanf("%d",&badminton[i].points);
    
  }

  
  //entries for chess............................................................
  printf("Enter the number of te students have participated in Chess:");
  scanf("%d",&n2);
  for(int  i=0;i<n2;i++){
    printf("entr the details for player %d\n",i+1);
    printf("roll number:");
    scanf("%u",&chess[i].roll);
    printf("name:");
    scanf("%s",chess[i].name);
    for(int j=0;j<i;j++){
      if(chess[i].roll==chess[j].roll){
	for(int k=j;k<i;k++){
	  chess[k]=chess[k+1];
	  i--;
	}
      }
    }
    printf("points:");
    scanf("%d",&chess[i].points);
    
  }

  
  //entries for carrom.....................................................
  printf("Enter the number of te students have participated in Carrom:");
  scanf("%d",&n3);
    for(int  i=0;i<n3;i++){
    printf("entr the details for player %d\n",i+1);
    printf("roll number:");
    scanf("%u",&carrom[i].roll);
    printf("name:");
    scanf("%s",carrom[i].name);
    for(int j=0;j<i;j++){
      if(carrom[i].roll==carrom[j].roll){
	for(int k=j;k<i;k++){
	  carrom[k]=carrom[k+1];
	  i--;
	}
      }
    }
    printf("points:");
    scanf("%d",&carrom[i].points);
    
  }

    
  //entris for tt..........................................................
  printf("Enter the number of te students have participated in TT:");
  scanf("%d",&n4);
  for(int  i=0;i<n4;i++){
    printf("entr the details for player %d\n",i+1);
    printf("roll number:");
    scanf("%u",&tt[i].roll);
    printf("name:");
    scanf("%s",tt[i].name);
    for(int j=0;j<i;j++){
      if(tt[i].roll==tt[j].roll){
	for(int k=j;k<i;k++){
	  tt[k]=tt[k+1];
	  i--;
	}
      }
    }
    printf("points:");
    scanf("%d",&tt[i].points);
    
  }
  printf("\nBadminton Players-----------------------------------------------------\n");
  for(int i=0;i<n1;i++){
    printf("Roll Number %u   Name:%s   Points:%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
  }
  printf("\nChess Players-----------------------------------------------------\n");
  for(int i=0;i<n2;i++){
    printf("Roll Number %u   Name:%s   Points:%d\n",chess[i].roll,chess[i].name,chess[i].points);
  }
  printf("\ncarrom Players-----------------------------------------------------\n");
  for(int i=0;i<n3;i++){
    printf("Roll Number %u   Name:%s   Points:%d\n",carrom[i].roll,carrom[i].name,carrom[i].points);
  }
  printf("\nTT Players-----------------------------------------------------\n");
  for(int i=0;i<n4;i++){
    printf("Roll Number %u   Name:%s   Points:%d\n",tt[i].roll,tt[i].name,tt[i].points);
  }
  findChamp(badminton,chess, tt,tmp,n1,n2,n3,n4);
  displayMeritList(badminton,chess, tt,tmp,n1,n2,n3,n4);
  return 0;
}
