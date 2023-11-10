//Bhumika Goyal
//Roll no. 23MI10014
//SET A
//DATE: 10/11/2023

#include<stdio.h>
#include<string.h>

struct stud {
  unsigned int roll;
  char name[20];
  int point;
};
  struct stud badm[10],chess[10],carr[10],tt[10],tmp[30];

void findChamp();
void findRunnersUp();
void findConsolationWinner();
void displayMeritList();

int main(){
  int a,b,c,d,e;
  //a=no. of students participated in badminton.
   //b=no. of students participated in chess.
   //c=no. of students participated in carrom.
   //d=no. of students participated in tt.


  // printf("NOTE: Roll no. of students in badminton must be starting from 1,in chess 2,in carrom 3 and in tt 4");

  printf("enter the number of students participated in badminton, chess,carrom and tt:\n");

  scanf("%d %d %d %d",&a,&b,&c,&d);
  printf("enter the roll,name,and points of students in badminton:\n");

  for(int i=0;i<a;i++)
scanf("%u %s %d ",&badm[i].roll,badm[i].name,&badm[i].point);

printf("enter the roll,name,and points of students in chess:\n");
   for(int i=0;i<b;i++)
scanf("%u %s %d ",&chess[i].roll,chess[i].name,&chess[i].point);

    printf("enter the roll,name,and points of students in carrom:\n");
 for(int i=0;i<c;i++)
scanf("%u %s %d ",&carr[i].roll,carr[i].name,&carr[i].point);


printf("enter the roll,name,and points of students in tt:\n");
 for(int i=0;i<d;i++)
scanf("%u %s %d ",&tt[i].roll,tt[i].name,&tt[i].point);

 

 printf("Details of the students in badminton:\n");

 
 for(int i=0;i<a;i++)printf("roll:%u  name:%s points:%d\n",badm[i].roll,badm[i].name,badm[i].point);


  printf("Details of the students in chess:\n");

 
 for(int i=0;i<a;i++)printf("roll:%u  name:%s points:%d\n",chess[i].roll,chess[i].name,chess[i].point);


  printf("Details of the students in carrom:\n");

 
 for(int i=0;i<a;i++)printf("roll:%u  name:%s points:%d\n",carr[i].roll,carr[i].name,carr[i].point);

  printf("Details of the students in tt:\n");

 
  for(int i=0;i<a;i++)printf("roll:%u  name:%s points:%d\n",tt[i].roll,tt[i].name,tt[i].point);


  int i=0;

  for(int i=0;i<a;i++){
    for(int j=0;i<b;j++){
     for(int k=0;i<c;k++){
        for(int l=0;l<d;l++){
	  
	  if( badm[i].roll==chess[j].roll==carr[k].roll==tt[l].roll)
	    {
	      int sum=0;
	      for(int i=0;i

	  else if ( badm[i].roll==chess[i].roll==carr[i].roll)
	    
		    else if (chess[i].roll==carr[i].roll==tt[i].roll)
			     else if(carr[i].roll==tt[i].roll== badm[i].roll)
 
    
    

  int sum=0;

  

  for(int i=0;i<a;i++){
    sum=sum+ badm[i].point +chess[i].point+carr[i].point+tt[i].point;}
  
    

  


  

  

 
   

  findChamp();

 return 0;
}

void findChamp(){

  printf("The studets who have sored the maximum number of points considering their best performance in any three of the four games.");
  //tmp array will contain the total score of the student in 3 or more games played
}

	      void findRunnersUp(){
		printf("the details of the student who have scored the maimum considering their best performance in any two of the four games in the array tmp");
	      }



	      void findConsolationWinner(){
		printf("display the details of the students who have scored the maximum points considering their best performance in any one of the four games");
	      }


	      void displayMeritList(){


		printf("display all the participants in merit order  also to display the name of the students alphabetically whenever there is a tie")
		  }
	      
		




	      


		    
  
  
  

 




   



  
  


