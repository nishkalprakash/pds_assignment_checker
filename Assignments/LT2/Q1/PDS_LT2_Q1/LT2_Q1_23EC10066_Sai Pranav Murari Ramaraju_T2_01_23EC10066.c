//Name : R.Sai Pranav Murari
//roll no : 23EC10066
//Set : A
#include<stdio.h>
 struct stud{
  unsigned int roll;
  char name[20];
  int points;
};
struct  stud badminton[10];
 struct stud chess[10];
struct stud carrom[10];
struct stud tt[10];
struct stud tmp[30];

void findchamp(int n1,int n2,int n3,int n4);
void findRunnersUp(int n1,int n2,int n3,int n4);
void findConsolationWinner(int n1,int n2,int n3,int n4);


int main(){
  int n1,n2,n3,n4;
  printf("enter the no of students in badminton : ");
  scanf("%d",&n1);
  printf("enter the no of students in chess : ");
  scanf("%d",&n2);
  printf("enter the no of students in carrom : ");
  scanf("%d",&n3);
  printf("enter the no of students in tt :");
  scanf("%d",&n4);

  printf("enter the details of badminton : \n");
  for (int i=0;i<n1;i++){
    printf("enter roll no : ");
    scanf("%u",&badminton[i].roll);
    printf("enter name : ");
    scanf("%s",badminton[i].name);
    printf("enter points : ");
    scanf("%d",&badminton[i].points);
  }

  printf("enter the details of chess : \n");
  for (int i=0;i<n2;i++){
    printf("enter roll no : ");
    scanf("%u",&chess[i].roll);
    printf("enter name : ");
    scanf("%s",chess[i].name);
    printf("enter points : ");
    scanf("%d",&chess[i].points);
  }

  printf("enter the details of carrom : \n");
  for (int i=0;i<n3;i++){
    printf("enter roll no : ");
    scanf("%u",&carrom[i].roll);
    printf("enter name : ");
    scanf("%s",carrom[i].name);
    printf("enter points : ");
    scanf("%d",&carrom[i].points);
  }

  printf("enter the details of tt  : \n");
  for (int i=0;i<n4;i++){
    printf("enter roll no : ");
    scanf("%u",&tt[i].roll);
    printf("enter name : ");
    scanf("%s",tt[i].name);
    printf("enter points : ");
    scanf("%d",&tt[i].points);
  }
  printf("the details of students in badminton : ");
  for (int i=0;i<n1;i++){
    printf("roll no : %u,name : %s,points : %d",badminton[i].roll,badminton[i].name,badminton[i].points);
  }

  printf("the details of students in chess : ");
  for (int i=0;i<n2;i++){
    printf("roll no : %u,name : %s,points : %d",chess[i].roll,chess[i].name,chess[i].points);
  }
  printf("the details of students in carrom  : ");
  for (int i=0;i<n3;i++){
    printf("roll no : %u,name : %s,points : %d",carrom[i].roll,carrom[i].name,carrom[i].points);
  }

  printf("the details of students in tt : ");
  for (int i=0;i<n4;i++){
    printf("roll no : %u,name : %s,points : %d",tt[i].roll,tt[i].name,tt[i].points);
  }

  findchamp(n1,n2,n3,n4);
  findConsolationWinner( n1, n2,    n3,    n4);

}

void findchamp(int n1,int n2,int n3,int n4){
  int count =0,sum=0,max=0,index=0;
  for (int i=0;i<n1;i++){
   int  x = badminton[i].roll;
    for(int j=0;i<n2;i++){
     int  y=chess[j].roll;
      for(int k=0;i<n3;i++){
	int z=carrom[k].roll;
	for(int l=0;i<n4;i++){
	  int w=tt[l].roll;
	  if(x==y&&y==z&&z==w) count =3;
	  else if(x==y&&y==z&&x==w) count =3;
	  else if(x==y&&y==z&&x==z) count =3;
	  else if(x==y&&y==z&&y==w) count =3;
          else if(z==w&&y==w&&x==z) count =3;
	 else if(z==w&&x==w&&x==z) count =3;
	 else if(z==w&&y==w&&x==w) count =3;
	 else if(x==w&&y==w&&x==z) count =3;
	  if (count==3){
	    tmp[i]=badminton[i];
	    tmp[j]=chess[j];
	    tmp[k]=carrom[k];
	    tmp[l]=tt[l];

	  }
	}
      }
    }
  }
  for(int i=0;i<10;i++){
    sum+=tmp[i].points;
    if(sum>max){
      max=sum;
      index=i;
    }
  }
  printf("the champion's details :\n roll : %u,name : %s,total points scored : %d",tmp[index].roll,tmp[index].name,max);
}


void findConsolationWinner(int n1,int n2,int n3,int n4){
  int max=0,max1=0,index=0;
  for(int i=0;i<n1;i++){
    if(badminton[i].points>max){
      tmp[i].points=badminton[i].points;
    }
  }
  for(int i=0;i<n2;i++){
    if(chess[i].points>max){
      tmp[i].points=chess[i].points;
    }
  }

  for(int i=0;i<n3;i++){
    if(carrom[i].points>max){
      tmp[i].points=carrom[i].points;
    }
  }
   for(int i=0;i<n4;i++){
    if(tt[i].points>max){
      tmp[i].points=tt[i].points;
    }
  }

   for(int i=0;i<4;i++){
     if(tmp[i].points>max1){
       tmp[i].points=max1;
       index=i;

     }

   }
   printf("the consolation winner is : \n roll : %u,name : %s,points : %d",tmp[index].roll,tmp[index].name,tmp[index].points);
    for(int i=0;i<n1;i++){
    if(badminton[i].points==tmp[index].points){
      printf("he scored maximum points in badminton");
    }
  }
   for(int i=0;i<n2;i++){
    if(chess[i].points==tmp[index].points){
      printf("he scored maximum points in chess");
    }
  }
   for(int i=0;i<n3;i++){
    if(carrom[i].points==tmp[index].points){
      printf("he scored maximum points in carrom");
    }
  }
   for(int i=0;i<n4;i++){
    if(tt[i].points==tmp[index].points){
      printf("he scored maximum points in tt");
    }
   }

}

