// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Main 
int main(){
  int n;
  char **sptr[100];
  // Create
      char Create(){
      printf("Enter the number of words:");
      scanf("%d",&n);
      char **sptr = (char **)malloc(n*50);
      for (int i = 0;i<n;i++){
	char a[50];
	printf("Enter the string\n");
	scanf("%s",a);
	sptr[i] = &a[0];
      }
      printf("The words entered by the user is:");
      for (int i=0;i<n;i++){
	printf("%s ",sptr[i]);}
      return **sptr;
      }
      // Length Stat
      char lengthStat(char **sptr){
      int count12=0,count35=0,count5p=0;
      for (int i = 0;i<n;i++){
       	if (strlen(sptr[i])>=1 && strlen(sptr)[i]) <= 2) count12++;
	if (strlen(sptr[i])>=3 && strlen(sptr)[i]) <= 5) count35++;
	if (strlen(sptr[i])>=1 && strlen(sptr)[i]) <= 2) count5p++;
	printf("The number of words with length between 1 and 2: %d",count12);
	printf("The number of words with length between 3 and 5: %d",count35);
	printf("The number of words with length 5 above: %d",count5p);
      }
    }

//LetterStat

  


  int choice=10000;
  while(choice != 0){
    printf("Enter choice between 1 and 7:\n");
    printf("1 : Create\n");
    printf("2 : LengthStat\n");
    printf("3 : LetterStat\n");
    printf("4 : Search\n");
    printf("5 : Remove Duplicate\n");
    printf("6 : SearchReplace\n");
    printf("7 : Arrange\n");
    printf("0 : Quit\n");
    scanf("%d",&choice);
    if (choice == 0) break;
    if (choice ==1) Create();//Function call
    if (choice ==2) lengthStat(sptr);
    if (choice ==3) Search(sptr);
    if (choice ==4) Create();
    if (choice ==5) Create();
    if (choice ==6) Create();
    if (choice ==7) Create();

    // LetterStat
    void Letterstat(char **sptr){
      int countvow = 0;
      for (int i =0;i<n*50;i++){
	if (sptr[i]=='a'||sptr[i]=='e'||sptr[i]=='i'||sptr[i]=='o'||sptr[i]=='u'})countvow++;
      }
      printf("The number of vowels in the words: %d",countvow);
      }

    //Search
    void Search(char **sptr){
      
    }
  }




  }
}

