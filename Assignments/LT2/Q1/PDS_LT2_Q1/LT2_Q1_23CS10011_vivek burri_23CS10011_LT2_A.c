// roll no 23CS10011
// name vivek
// set A
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
  unsigned int roll;
  char name[20];
  int points;
}stud;
stud badminton[10],chess[10],carrom[10],tt[10],tmp[30];
void findChamp(int a[],int b[], int c[],int d[]);
int main(){
  int a[11] ,b[11],c[11],d[11];
  printf("enter no of students participated in badminton ");
  scanf("%d",&a[10]);
  for(int i=0;i<a[10];i++){
    printf("enter roll no name points\n");
    scanf("%u",&badminton[i].roll);
    scanf("%s",badminton[i].name);
    scanf("%d",&badminton[i].points);
    a[i]=badminton[i].roll;
  }
   printf("enter no of students participated in chess\n ");
  scanf("%d",&b[10]);
  for(int i=0;i<b[10];i++){
    printf("enter roll no name points\n");
    scanf("%u",&chess[i].roll);
     scanf("%s",chess[i].name);
    scanf("%d",&chess[i].points);
    b[i]=chess[i].roll;
  }
   printf("enter no of students participated in carrom ");
  scanf("%d",&c[10]);
  for(int i=0;i<c[10];i++){
    printf("enter roll no name points\n");
    scanf("%u",&carrom[i].roll);
     scanf("%s",carrom[i].name);
    scanf("%d",&carrom[i].points);
    c[i]=carrom[i].roll;
  }
   printf("enter no of students participated in tt\n ");
  scanf("%d",&d[10]);
  for(int i=0;i<d[10];i++){
    printf("enter roll no name points\n");
    scanf("%u",&tt[i].roll);
     scanf("%s",tt[i].name);
    scanf("%d",&tt[i].points);
    d[i]=tt[i].roll;
  }
  printf("students prticipated in badminton\n roll name points");
  for(int i=0;i<a[10];i++)
    printf("%u %s %d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
  printf("students prticipated in chess\n roll name points");
  for(int i=0;i<b[10];i++)
    printf("%u %s %d\n",chess[i].roll,chess[i].name,chess[i].points);
  printf("students prticipated in carrom\n roll name points");
  for(int i=0;i<c[10];i++)
    printf("%u %s %d\n",carrom[i].roll,carrom[i].name,carrom[i].points);
  printf("students prticipated in tt\n roll name points");
  for(int i=0;i<d[10];i++)
    printf("%u %s %d\n",tt[i].roll,tt[i].name,tt[i].points);
  findChamp(a,b,c,d);
  
  return 0;
}
void findChamp(int a[],int b[],int c[], int d[]){
  int k=0,l=0,j;
  for(int i=0;i<a[10];i++){
    for(int j=0;j<b[10];j++){
      if (a[i]==b[i]){
	if (b[i]==c[i]){
	  
	  tmp[k].roll=a[i];
	  tmp[k+1].roll=a[i];
	  tmp[k+2].roll=a[i];
	  tmp[k+3].roll=a[i];
           strcpy(tmp[k].name,"badminton");
	  strcpy(tmp[k+1].name,"chess");
	  strcpy(tmp[k+2].name,"carrom");
	  strcpy(tmp[k+3].name,chess[i].name);
	  tmp[k].points=badminton[i].points;
	  tmp[k+1].points=chess[i].points;
	  tmp[k+2].points=carrom[i].points;
	  tmp[k+3].points=tmp[k].points+tmp[k+1].points+tmp[k+2].points+tmp[k+3].points;
	  k=k+3;
	}
	else if(b[i]==d[i]){
	  tmp[k].roll=a[i];
	  tmp[k+1].roll=a[i];
	  tmp[k+2].roll=a[i];
	  tmp[k+3].roll=a[i];
          strcpy(tmp[k].name,"badminton");
	  strcpy(tmp[k+1].name,"chess");
	  strcpy(tmp[k+2].name,"tt");
	  strcpy(tmp[k+3].name,chess[i].name);
	  tmp[k].points=badminton[i].points;
	  tmp[k+1].points=chess[i].points;
	  tmp[k+2].points=tt[i].points;
	  tmp[k+3].points=tmp[k].points+tmp[k+1].points+tmp[k+2].points+tmp[k+3].points;
	  k=k+3;
	}
      }
    }
  }
  for(int i=0;i<c[10];i++){
    for(int j=0;j<d[10];j++){
      if (c[i]==d[i]){
	if (c[i]==a[i]){
	  
	  tmp[k].roll=a[i];
	  tmp[k+1].roll=a[i];
	  tmp[k+2].roll=a[i];
	  tmp[k+3].roll=a[i];
	   strcpy(tmp[k].name,"carrom");
	  strcpy(tmp[k+1].name,"tt");
	  strcpy(tmp[k+2].name,"badminton");
	  strcpy(tmp[k+3].name,tt[i].name);
	  tmp[k].points=carrom[i].points;
	  tmp[k+1].points=tt[i].points;
	  tmp[k+2].points=badminton[i].points;
	  tmp[k+3].points=tmp[k].points+tmp[k+1].points+tmp[k+2].points+tmp[k+3].points;
	  k=k+3;
	}
	else if(c[i]==b[i]){
	  tmp[k].roll=a[i];
	  tmp[k+1].roll=a[i];
	  tmp[k+2].roll=a[i];
	  tmp[k+3].roll=a[i];
          strcpy(tmp[k].name,"carrom");
	  strcpy(tmp[k+1].name,"tt");
	  strcpy(tmp[k+2].name,"chess");
	  strcpy(tmp[k+3].name,chess[i].name);
	  tmp[k].points=badminton[i].points;
	  tmp[k+1].points=chess[i].points;
	  tmp[k+2].points=tt[i].points;
	  tmp[k+3].points=tmp[k].points+tmp[k+1].points+tmp[k+2].points+tmp[k+3].points;
	  k=k+3;
	}
      }
    }
  }
  
  for(int i=0;i<k;i++){
    l= strcmp(tmp[i].name,"badminton");
    if (l==0)
      printf("%u %s %d\n",tmp[i].roll,tmp[i+3].name,tmp[i].points);
    }
	for(int i=0;i<k;i++){
    l= strcmp(tmp[i].name,"chess");
    if (l==0)
      printf("%u %s %d\n",tmp[i].roll,tmp[i+3].name,tmp[i].points);
    }
	for(int i=0;i<k;i++){
    l= strcmp(tmp[i].name,"carrom");
    if (l==0)
      printf("%u %s %d\n",tmp[i].roll,tmp[i+3].name,tmp[i].points);
    }
	for(int i=0;i<k;i++){
    l= strcmp(tmp[i].name,"tt");
    if (l==0)
      printf("%u %s %d\n",tmp[i].roll,tmp[i+3].name,tmp[i].points);
    }
	for(int i=3;i<k;i=i+3){
	  printf("%u %s %d\n",tmp[i+3].roll,tmp[i+3].name,tmp[i].points);
	  if(tmp[i].points>l){
	    l=tmp[i].points;
	    j=i;
	}
	}
	printf("%u %s %d champion ",tmp[j].roll,tmp[j].name,tmp[j].points);
        printf("%u %s %d \n ",tmp[j].roll,tmp[j-1].name,tmp[j].points);
	printf("%u %s %d \n ",tmp[j].roll,tmp[j-2].name,tmp[j].points);
	printf("%u %s %d\n ",tmp[j].roll,tmp[j-3].name,tmp[j].points);
		
	
}

  
  	

	
  
	
	  
	
	    
  
  
  
  
