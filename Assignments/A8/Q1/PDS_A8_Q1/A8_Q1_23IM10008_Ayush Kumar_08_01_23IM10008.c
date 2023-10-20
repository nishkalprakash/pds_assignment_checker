//NAME-AYUSH KUMAR
//ROLL-23IM10008

#include<stdio.h>
#include<stdlib.h>
int main(){
  int a;
  char string[100][100];
  printf("Enter the required no.allocated to function you want 1-7");
  scanf("%d",&a);
  if(a==1){
    int create(int,int);
    int n;
    printf("Enter how many words you want to enter (<100)");
    scanf("%d",&n);
    char c;
    printf("Enter the words you want to enter ");
    scanf("%c", &c);
    printf("your words are %c", &c);
  }
  else if(a==2){
    int lengthStat(int,int);
    char h;
    printf("Enter the words you required");
    if(len(h)>=1||<=2){
      printf("Your word length is 1-2",&len(h));
      else if (len(h)>=3||<=5){
	printf("Your word length is 3-5", &len(h));
	else(){
	    printf("Your word lenth is >5",&len(h));
	  }
      }
      else if(a==3){
	char m;
	int letterstat();
	printf("enter the vowels you have written");
	scanf("%c",&m);
	if (m=("a","e","i","o","u"){
	    printf("these are vowels ");
	  }
	  }
	else if (a==4){
	  int search()
	    char n;
	    printf( "To find the number of occurences of the word");
	}
	else if (a==5){
	  char removeduplicate()
	    char t;
	  printf("to find duplicate words and update it");
	}
	else if (a==6){
	  char searchreplace()
	    char p;
	  printf("to search and replace words");
	}
	else {
	  char arrange();
	  printf("to arrange the words");
	}
	return 0;
      }
	
	
    
