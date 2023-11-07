#include<stdio.h>
typedef struct student{
  char fn[21],ln[21],address[41];
  char grades[6];
 unsigned int mno;
  float gpa[50];
  int roll;
}st;

st studarray[50];
int nstuds;
void enrolstuds();
void modifystuddetails();
void entergrades();
void editstudgrades();

int main(){
  int m;
  while(1){
    printf("1.enroll student\n");
    printf("2.enter grades\n");
    printf("3.modifystudentdetails\n");
    printf("4.exit\n");
     printf("5.modifystudentgrades\n");
    printf("enter a number");
    scanf("%d",&m);
      if(m==1){enrolstuds();}
      if(m==2){entergrades();}
      if(m==3){modifystuddetails();}
      if(m==4){break;}
       if(m==5){ editstudgrades();}
     
     }
  





  return 0;
}
void enrolstuds(){
  printf("enter no of stud\n");
  scanf("%d",&nstuds);
  
  for(int i=0;i<nstuds;i++){
      printf("enter first name of stud\n");
      scanf("%s",studarray[i].fn);

       printf("enter last name of stud\n");
       scanf("%s",studarray[i].ln);

       printf("enter address of stud\n");
       scanf("%s",studarray[i].address);

       printf("enter mobile no of stud\n");
       scanf("%u",&studarray[i].mno);

       studarray[i].roll=i+1;
  }

  for(int i=0;i<nstuds;i++){
     printf("name %s %s\n",studarray[i].fn,studarray[i].ln);
     printf("address %s \n",studarray[i].address);
     printf("mno %u \n",studarray[i].mno);
     printf("roll %d \n",studarray[i].roll);
  }

}
void modifystuddetails(){
  int n;
  printf("enter roll of stud\n");
  scanf("%d",&n);
  n-=1;
     printf("name %s %s\n",studarray[n].fn,studarray[n].ln);
     printf("address %s \n",studarray[n].address);
     printf("mno %u \n",studarray[n].mno);
     printf("roll %d \n",studarray[n].roll);


 printf("enter  details  \n");

       printf("enter new address of stud\n");
       scanf("%s",studarray[n].address);

       printf("enter new mobile no of stud\n");
       scanf("%u",&studarray[n].mno);

 printf("modified  details are  \n");
        printf("name %s %s\n",studarray[n].fn,studarray[n].ln);
        printf("address %s \n",studarray[n].address);
        printf("mno %u \n",studarray[n].mno);
        printf("roll %d \n",studarray[n].roll);
     }

void entergrades(){
  char x;

  for(int i=0;i<nstuds;i++){
       printf("roll %d \n",studarray[i].roll);
       printf("name %s %s\n",studarray[i].fn,studarray[i].ln);

       printf("enter the grades(E,A,B,C,D,P,F)");

       for(int j=0;j<5;j++){
            scanf(" %c",&x);
              if((x=='A')||(x=='B')||(x=='C')||(x=='D')||(x=='E')||(x=='F')||(x=='P')){
		studarray[i].grades[j]=x;
			printf("enter nxt grade \n");
	           }//if
	      else{
		printf("entered wrong  grade \n");
		j--;
	            }//else
            }//for2

        studarray[i].gpa[i]=0;
	for(int j=0;j<5;j++){
         
	  if(studarray[i].grades[j]=='E'){studarray[i].gpa[i]+=10;}
	    if(studarray[i].grades[j]=='A'){studarray[i].gpa[i]+=9;}
	     if(studarray[i].grades[j]=='B'){studarray[i].gpa[i]+=8;}
	      if(studarray[i].grades[j]=='C'){studarray[i].gpa[i]+=7;}
	       if(studarray[i].grades[j]=='D'){studarray[i].gpa[i]+=6;}
	        if(studarray[i].grades[j]=='F'){studarray[i].gpa[i]+=0;}
		 if(studarray[i].grades[j]=='P'){studarray[i].gpa[i]+=5;}
                          }//for3

       studarray[i].gpa[i]/=5;
     }//for1


  for(int i=0;i<nstuds;i++){

       printf("roll %d \n",studarray[i].roll);
       printf("name %s %s\n",studarray[i].fn,studarray[i].ln);
       printf("the grades are %s \n",studarray[i].grades);
       printf("gpa= %f \n",studarray[i].gpa[i]);
       

  }

  
}
void editstudgrades(){

   int n;
    char x;
  printf("enter roll of stud\n");
  scanf("%d",&n);
  n-=1;
      printf("name %s %s\n",studarray[n].fn,studarray[n].ln);
      printf("the grades are %s \n",studarray[n].grades);

      printf("enter the grades(E,A,B,C,D,P,F)");

       for(int j=0;j<5;j++){
            scanf(" %c",&x);
              if((x=='A')||(x=='B')||(x=='C')||(x=='D')||(x=='E')||(x=='F')||(x=='P')){
		studarray[n].grades[j]=x;
			printf("enter nxt grade \n");
	           }//if
	      else{
		printf("entered wrong  grade \n");
		j--;
	            }//else
            }//for2

        studarray[n].gpa[n]=0;
	for(int j=0;j<5;j++){
         
	  if(studarray[n].grades[j]=='E'){studarray[n].gpa[n]+=10;}
	    if(studarray[n].grades[j]=='A'){studarray[n].gpa[n]+=9;}
	     if(studarray[n].grades[j]=='B'){studarray[n].gpa[n]+=8;}
	      if(studarray[n].grades[j]=='C'){studarray[n].gpa[n]+=7;}
	       if(studarray[n].grades[j]=='D'){studarray[n].gpa[n]+=6;}
	        if(studarray[n].grades[j]=='F'){studarray[n].gpa[n]+=0;}
		 if(studarray[n].grades[j]=='P'){studarray[n].gpa[n]+=5;}
                          }//for3

       studarray[n].gpa[n]/=5;
    
      

        printf("roll %d \n",studarray[n].roll);
       printf("name %s %s\n",studarray[n].fn,studarray[n].ln);
       printf("the grades are %s \n",studarray[n].grades);
       printf("gpa= %f \n",studarray[n].gpa[n]);




}
