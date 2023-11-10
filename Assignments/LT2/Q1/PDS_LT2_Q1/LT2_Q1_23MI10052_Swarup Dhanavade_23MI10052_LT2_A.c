// Roll No.: 23MI10052
// Name : SWARUP JAYARAM DHANAVADE
// SET-A

#include<stdio.h>

typedef struct {
  unsigned int roll;
  char name[20];
  int point;
}stud;

stud badminton[10],chess[10],carrom[10],tt[10],tmp[30];



void findChamp(stud bad[];stud ches[];stud carr[];stud tt[];stud tmp[];int Bn,Cen,Can,ttn);

int main(){
  int badN,chesN,carrN,ttN;
  printf("Number students participeted in  badminto :");
  scanf("%d",&badN);
  printf("Number students participeted in chess :");
  scanf("%d",&chesN);
  printf("Number students participeted in carrom :");
  scanf("%d",&carrN);
  printf("Number students participeted in tt :");
  scanf("%d",&ttN);

   printf("Number students participeted in  badminto :\n");
  for(int i=0;i<badN;i++){
    int local,TF=1;
    printf("enter roll number for student %d:",i+1);
    scanf("%d",&local);
    for(int j=0;j<=i;j++){
      if(local== badminton[j].roll){
	i--;
	TF=0;
      }
    }
    if(TF==1){
      badminton[i].roll=local;
      printf("enter name of student :");
      scanf("%s",badminton[i].name);
      printf("enter points scored by student :");
      scanf("%d",&badminton[i].point);
    }
  }

   printf("Number students participeted in  chess :\n");
   for(int i=0;i<chesN;i++){
    int local,TF=1;
    printf("enter roll number for student %d:",i+1);
    scanf("%d",&local);
    for(int j=0;j<=i;j++){
      if(local== chess[j].roll){
	i--;
	TF=0;
      }
    }
    if(TF==1){
      chess[i].roll=local;
      printf("enter name of student :");
      scanf("%s",chess[i].name);
      printf("enter points scored by student :");
      scanf("%d",&chess[i].point);
    }
  }

    printf("Number students participeted in carrom  :\n");
   for(int i=0;i<carrN;i++){
    int local,TF=1;
    printf("enter roll number for student %d:",i+1);
    scanf("%d",&local);
    for(int j=0;j<=i;j++){
      if(local== carrom[j].roll){
	i--;
	TF=0;
      }
    }
    if(TF==1){
      carrom[i].roll=local;
      printf("enter name of student :");
      scanf("%s",carrom[i].name);
      printf("enter points scored by student :");
      scanf("%d",&carrom[i].point);
    }
  }

    printf("Number students participeted in  tt :\n");
   for(int i=0;i<ttN;i++){
      int local,TF=1;
    printf("enter roll number for student %d:",i+1);
    scanf("%d",&local);
    for(int j=0;j<=i;j++){
      if(local== tt[j].roll){
	i--;
	TF=0;
      }
    }
    if(TF==1){
      tt[i].roll=local;
      printf("enter name of student :");
      scanf("%s",tt[i].name);
      printf("enter points scored by student :");
      scanf("%d",&tt[i].point);
    }
   
   }

   printf("students playing badminton :\n");

   for(int k=0;k<badN;k++){
     printf("Roll Number :%d\n",badminton[k].roll);
     printf("Name: %s\n",badminton[k].name);
     printf("Point scored :%d\n",badminton[k].point);
     printf("\n \n");


   printf("students playing chess :\n");

   for(int k=0;k<chesN;k++){
     printf("Roll Number :%d\n",chess[k].roll);
     printf("Name: %s\n",chess[k].name);
     printf("Point scored :%d\n",chess[k].point);
     printf("\n \n");  
    
   }


   printf("students playing carrom :\n");

   for(int k=0;k<carrN;k++){
     printf("Roll Number :%d\n",carrom[k].roll);
     printf("Name: %s\n",carrom[k].name);
     printf("Point scored :%d\n",carrom[k].point);
     printf("\n \n");  
    
   }

   printf("students playing tt :\n");

   for(int k=0;k<ttN;k++){
     printf("Roll Number :%d\n",tt[k].roll);
     printf("Name: %s\n",tt[k].name);
     printf("Point scored :%d\n",tt[k].point);
     printf("\n \n");  
    
   }
 }
   findChamp( badminton;chess,carrom,tt,tmp, badN,chesN,carrN,ttN);

   
  return 0;  
}


     void findChamp(stud bad[];stud ches[];stud carr[];stud tt[];stud tmp[]);int Bn;int Cen; int Can; int ttn){
  int n=0;
  for(int i=0;i<Bn;i++){
    int count=1;
    int a=0,b=0,c=0;
    for(int j=0;j<Cen;j++){
      if(bad[i].roll== ches[j].roll) count++;
      a=1;
    }

     for(int j=0;j<Can;j++){
      if(bad[i].roll== carr[j].roll) count++;
      b=1;
    }

     for(int j=0;j<ttn;j++){
      if(bad[i].roll== tt[j].roll) count++;
      c=1;
    }

     if(count>=3){
       tmp[n].roll=bad[i].roll;
       tmp.[n].name=bad[i].name;
       if(count==4){ tmp.[n].point= bad[i].point + carr[i].point + ches[i].point + tt[i].point;
         int max=0;
	 if(max<bad[i].point + carr[i].point + ches[i].point) max=bad[i].point + carr[i].point + ches[i].point;
	 if(max< carr[i].point + ches[i].point + tt[i].point) max= carr[i].point + ches[i].point + tt[i].point;
	 if(max< bad[i].point + carr[i].point +tt[i].point) max= bad[i].point + carr[i].point +tt[i].point;
	 if(max< bad[i].point + ches[i].point + tt[i].point) max= bad[i].point + ches[i].point + tt[i].point;
	 tmp[n].point=max;
       }
       if(count==3){
	 if(a==1 && b==1)tmp[n].point= bad[i].point + carr[i].point + ches[i].point;
	 if(a==1 && c==1)tmp[n].point= bad[i].point + ches[i].point + tt[i].point;
	 if(b==1 && c==1)tmp[n].point= bad[i].point + carr[i].point + tt[i].point;
	    
	 }
       n++;
     
     }


   for(int i=0;i<ches;i++){
    int count=1;
   
     for(int j=0;j<Can;j++){
      if(ches[i].roll== carr[j].roll) count++;
    }

     for(int j=0;j<ttn;j++){
      if(ches[i].roll== tt[j].roll) count++;
    }

     if(count=3){
       tmp[n].roll=ches[i].roll;
       tmp[n].name=ches[i].name;
       tmp[n].point= carr[i].point + ches[i].point + tt[i].point;
       n++;
     
     }   

     
   }

   int max_score1=0,max_roll;

   for(int k=0;k<n;k++)
     {
       printf("Roll no: %d\n",tmp[k].roll);
       printf("Name : %s\n",tmp[k].name);
       printf("Total of top 3:%d\n",tmp[k].point);
       printf("\n \n");
       if( max_score< tmp[k].point){
	 max_score=tmp[k].point; 
	 max_roll=k;
        }
     }


   printf("winner is %s\n",tmp[max_roll].name);
   printf("Roll No.:%d\n",tmp[max_roll].roll);
   printd("Point scored:%d\n",tmp[max_roll].point);
   

  
}
