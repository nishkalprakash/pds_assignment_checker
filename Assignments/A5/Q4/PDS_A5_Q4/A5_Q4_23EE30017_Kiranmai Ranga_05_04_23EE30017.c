//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int roll_num[20];
  int age[20];
  int marks[20];
  int i,a,b,c;
  for(i=0;i<20;i++) {
    printf("%d\n",roll_num[i]=1000+rand()%1000);
    printf("Roll number=%d\n",roll_num[i]);
    printf("%d\n",age[i]=15+rand()%10);
    printf("Age=%d\n",age[i]);
    printf("%d\n",marks[i]=rand()%101);
    printf("marks=%d\n",marks[i]);
  }
  for(a=0;a<19;a++) {
    for(b=a+1;b<20;b++) {
      if(age[a]==age[b]) {
	printf("roll no and marks of the students of same age %d  are:\nroll no:%d marks:%d\nroll no:%d marks:%d\n",age[a],roll_num[a],marks[a],roll_num[b],marks[b]);
        }
    }
  }
  for(a=0;a<19;a++) {
    for(b=a+1;b<20;b++) {
      if(marks[a]==marks[b]) {
	printf("roll no and age of the students gaining same marks %d are:\nroll no:%d age=%d\nroll no=%d age=%d\n",marks[a],roll_num[a],age[a],roll_num[b],age[b]);
      }
    }
  }
    return 0;
}
