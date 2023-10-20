// Name : Anshuman Acharya
// roll no. : 23ch10006

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int create(char ***sptr){

  int n;
  char temp[100];
  
  printf("Entr the number of words : ");
  scanf("%d", &n);

  *sptr = (char **)malloc(n * sizeof(char *));                                // to dynamically allocate the memory of exact size only.

  for(int i = 0;i < n;i++){
   
    printf("enter the %dth word : ", i + 1);
    scanf("%s", temp);
    
    (*sptr)[i] = (char *)malloc((strlen(temp)+1) * sizeof(char));

    strcpy((*sptr)[i], temp);
  }

    for(int i = 0;i < n;i++){

      printf("%s", (*sptr)[i]);
      
	printf("\n");
  }

  return n;
}

void lengthstat(char **sptr, int n){

  int count = 0, count1 = 0, count2 = 0;

  /* int n;
  char temp[100];
  
  printf("Entr the number of words : ");
  scanf("%d", &n);

  *sptr = (char **)malloc(n * sizeof(char *));                                // to dynamically allocate the memory of exact size only.

  for(int i = 0;i < n;i++){
   
    printf("enter the %dth word : ", i + 1);
    scanf("%s", temp);
    
    (*sptr)[i] = (char *)malloc((strlen(temp)+1) * sizeof(char));

    strcpy((*sptr)[i], temp);
    }*/

  for(int i = 0;i < n;i++){

    int n = strlen(sptr[i]);

    if(n <= 2 && n >= 1){
      count++;
    }

    if(n <= 5 && n >= 3){
      count1++;
    }

    if(n > 5){
      count2++;
    }

  }

  printf("The number of arrays of length 1 to 2 is %d\n", count);
  printf("The number of arrays of length 3 to 5 is %d\n", count1);
  printf("The number of arrays of length greater than 5 is %d\n", count2);

  return;
}

void letterstat(char **sptr, int n){

  int vowcount[5] = {0};

  /* int n;
  char temp[100];
  
  printf("Entr the number of words : ");
  scanf("%d", &n);

  *sptr = (char **)malloc(n * sizeof(char *));                                // to dynamically allocate the memory of exact size only.

  for(int i = 0;i < n;i++){
   
    printf("enter the %dth word : ", i + 1);
    scanf("%s", temp);
    
    (*sptr)[i] = (char *)malloc((strlen(temp)+1) * sizeof(char));

    strcpy((*sptr)[i], temp);
    }*/

  for(int i = 0;i < n;i++){

    for(int j = 0;j < strlen(sptr[i]);j++){

      if(sptr[i][j] == 'a'){
	vowcount[0]++;
      }

      if(sptr[i][j] == 'e'){
	vowcount[1]++;
      }

      if(sptr[i][j] == 'i'){
	vowcount[2]++;
      }

      if(sptr[i][j] == 'o'){
	vowcount[3]++;
      }

      if(sptr[i][j] == 'u'){
	vowcount[4]++;
      }

    }

  }

  printf("The number of a, e, i, o, u respectively are : \n");

  for(int i = 0;i < 5;i++){

    printf("%d ", vowcount[i] );
    
  }

  printf("\n");

}

void search(char **sptr, int n){

  char k;
  int count = 0;

  /*int n;
  char temp[100];
  
  printf("Entr the number of words : ");
  scanf("%d", &n);

  *sptr = (char **)malloc(n * sizeof(char *));                                // to dynamically allocate the memory of exact size only.

  for(int i = 0;i < n;i++){
   
    printf("enter the %dth word : ", i + 1);
    scanf("%s", temp);
    
    (*sptr)[i] = (char *)malloc((strlen(temp)+1) * sizeof(char));

    strcpy((*sptr)[i], temp);
    }*/

  // To search the entered letter and check. If occurs multiple times, all indexes are to be shown.
  printf("enter the key : ");
  scanf("%c", &k);

  int * index;

  for(int i = 0;i < n;i++){

    for(int j = 0;j < strlen(sptr[i]);j++){

      if(sptr[i][j] == 'k') count++;

    }

  }

  index = (int *)malloc(count * sizeof(int));

  for(int i = 0;i < count;i++){
    
  }
  
}

void removeduplicate(char **sptr, int n){

  for(int i = 0;i < n;i++){

    for(int j = 0;j < strlen(sptr[i]);j++){

      for(int k = 1;k < strlen(sptr[i]);k++){

      if(sptr[i][j] == sptr[i][j + k]){

	free(sptr[i][j]);
	free(sptr[i][j + k]);

      }
      }
      }

  }

}

int main()
{

  char ** sptr;
  int n;
  int length;

  printf("Enter a number between 1 to 7 : ");                        // To take input from the user a number from 1 to 7.
  scanf("%d", &n);

  if(n == 1 || 1)
  length = create( &sptr);

  if(n == 2)
  lengthstat(sptr, length);

  if(n == 3)
    letterstat(sptr, length);

  if(n == 4)
    search(sptr, length);

  if(n == 5)
    removeduplicate(sptr, length);


  return 0;
}
