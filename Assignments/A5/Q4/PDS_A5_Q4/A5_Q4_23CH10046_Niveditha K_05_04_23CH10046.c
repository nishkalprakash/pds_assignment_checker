//Niveditha K
//23CH10046

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int rollno[20],age[20],marks[20];
  printf("Enter roll no.,age,marks of the students: \n\n");
  
  for(int i=0;i<20;i++){
    scanf("%d %d %d",&rollno[i],&age[i],&marks[i]);
  }
 
  //random
  printf("Random roll no.\n");
  int ranroll[20],ranage[20],ranmarks[20];
  for(int i=0;i<20;i++){
    printf("%d", 1000+ rand()%(1001));
    scanf("%d",&ranroll[i]);
  }
  printf("\n");
  printf("Random age:\n");
  for(int i=0;i<20;i++){
    printf("%d", 15+ rand()%(11));
    scanf("%d",&ranage[i]);
  }
  printf("\n");
  printf("Random marks\n");
  for(int i=0;i<20;i++){
    printf("%d\n",rand()%(101));
    scanf("%d",&ranmarks[i]);
  }
  //checking equality

  //same age
  printf("\n");
  for(int i=0;i<20;i++){
    for(int j=19;j>=0;j--){
      if(age[i]==age[j] && rollno[i]!=rollno[j]){
	 printf("%d\t%d\t%d\n",rollno[i],age[i],marks[i]);
          printf("%d\t%d\t%d\n",rollno[j],age[j],marks[j]);
	}
    }
  }
    //same marks
   printf("\n");
     for(int i=0;i<20;i++){
       for(int j=19;j>=0;j--){
	 if( marks[i]==marks[j] &&rollno[i]!=rollno[j]){
	 printf("%d\t%d\t%d\n",rollno[i],age[i],marks[i]);
          printf("%d\t%d\t%d\n",rollno[j],age[j],marks[j]);
    }
  }
     }

   //sort
  int i;
   printf("\n");
  for(i=0;i<20;i++){
    for(int j=i+1;j<20;j++){
      if((rollno[i])<(rollno[j]))
	printf("%d\t%d\t%d\n",rollno[i],age[i],marks[i]);
       }
  }
     return 0;    
}
