// Roll number - 23NA10036
// Rishab Yadav

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create(char ***sptr);
/*void lengthStat(char **sptr, int n);
void letterStat(char **sptr);
void search(char **sptr);
void removeDuplicate(char **sptr);
void searchReplace(char **sptr);
void arrange(char **sptr);*/

int main(){
  char **sptr;

  int choice;
  

  /*while(str != '\0'){
    if(str < 97 || str > 122){
      printf("Invalid input! Please enter in between ");
      return 0;
    }
  }*/
  
  while(choice != 0){
    printf("Enter the choice between 1 to 7:\n");
    scanf("%d", &choice);
    
    if(choice > 7 || choice < 1){
      printf("Enter valid choice!\n");
    }
    
    else{
      if(choice == 0){
	printf("Program terminated!\n");
	return 0;
      }
      
      if(choice == 1){
	create(&sptr);
      }

      /*int n = create(sptr);

      if(choice == 2){
	lengthStat(sptr, n);
      }

      if(choice == 3){
	letterStat(&sptr);
      }

      if(choice == 4){
	search(sptr);
      }

      if(choice == 5){
	removeDuplicate(sptr);
      }

      if(choice == 6){
	searchReplace(sptr);
      }

      if(choice == 7){
	arrange(sptr);
	}
         
    }*/
  }

  return 0;
}

void create(char ***sptr){
    int n;
    
    printf("Enter the number of words:\n");
    scanf("%d", &n);

    *sptr = (char**) malloc (n*1);


    for(int i = 0; i < n; i++){
      char ent[n];

      printf("%d words is:\n", i+1);
      scanf("%s", ent);
      fflush(stdin);

      (*sptr)[i] = (char*) malloc((strlen(ent) + 1) * sizeof(char));
      strcpy((*sptr)[i], ent);
    }

    printf("Displayed words - ");

    for(int i = 0; i < n; i++){
      printf("%s ",(*sptr)[i]);
    }
    
}


  /*void lengthStat(char **sptr, int n){

  for(int i = 0; i < n; i++){
    int length = strlen(sptr[i]);
    
    if(length >= 1 && length <=2){
      printf("Length 1 - 2 :%p\n", sptr[i]);
    }
    
    else if(length >= 3 && length <=5){
      printf("Length 3 - 5 :%p\n", sptr[i]);
    }
    
    else{
      printf("Length > 5 :%p\n", sptr[i]);
    }
  }
}

void letterStat(char **sptr){}*/
