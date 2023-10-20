//Name - Asad Ali Jaffrey
//Roll No. - 23CH30007

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n;

void create(char ***);
void lengthStat(char ***, int);
void letterstat(char ***, int);
void search(char ***, int);

int main() {

  char **sptr;
  int choice;

  while(1){
    
    printf("\n 1 - create\n 2 - lengthstat\n 3 - letterstat\n 4 - search\n 5 - removeDuplicate\n 6 - searchReplace\n 7 - arrange\n");
    printf("Enter a choice\n");
    scanf("%d", &choice);
  

  switch(choice) {
  case 1 : create(&sptr); break;
  case 2 : lengthStat(&sptr, n); break;
  case 3 : letterstat(&sptr, n); break;
  case 4 : search(&sptr, n); break;
  case 0 : return 0;
  }

  }

  
  
}

void create(char ***sptr) {


  int lengths[100];

  printf("How many words will you enter: ");
  scanf("%d", &n);

  if ((n>100)||(n<=0)){
    printf("Wrong input");
    return;
  }

  *sptr = (char **)malloc(n*sizeof(char*));

  for (int i = 0; i<n; i++) {
    (*sptr)[i] = (char *)malloc(100*sizeof(char));
  }

  
  for (int i = 0; i<n; i++) {

    int size;

    printf("Enter %d th word \n", i+1);
    scanf("%s", (*sptr)[i]);
    size = strlen((*sptr)[i]);
    (*sptr)[i] = (char*) realloc((*sptr)[i], (size)*sizeof(char));
    
  }

  for (int i = 0; i<n; i++) {
    printf("%s ", (*sptr)[i]);
  }
  
}


void lengthStat(char ***sptr, int n) {


  int length1_2 = 0, length3_5 = 0, length6_ = 0;

  for (int i = 0; i<n; i++) {
    
    int size = strlen((*sptr)[i]);

    if ((size>0)&&(size<3)){
      length1_2++;
    }
    if ((size>2)&&(size<6)){
      length3_5++;
    }

    if ((size>5)) {
      length6_++;
    }
    
  }

  printf("\nThe number of letters between 1 to 2 letters is %d\n", length1_2);
  printf("The number of letters between 3 to 5 letters is %d\n", length3_5);
  printf("The number of letters greater than 5 is %d\n", length6_);

}

void letterstat(char ***sptr, int n) {

  int a = 0, e = 0, i1 = 0, o = 0, u = 0;

  for (int i = 0; i<n; i++) {
    for (int j = 0; j<strlen((*sptr)[i]); j++) {
      if ((*sptr)[i][j] == 'a') {
	a++;
    }
      if ((*sptr)[i][j] == 'e') {
	e++;
    }
      if ((*sptr)[i][j] == 'i') {
	i1++;
    }
      if ((*sptr)[i][j] == 'o') {
	o++;
    }
      if ((*sptr)[i][j] == 'u') {
	u++;
    }
      

    }

  }

  printf("\nThe number of a is %d\n", a);
  printf("The number of e is %d\n", e);
  printf("The number of i is %d\n", i1);
  printf("The number of o is %d\n", o);
  printf("The number of u is %d\n", u);


}


void search(char ***sptr, int n){

  char word[100];

  printf("Enter a word ");
  scanf("%s", word);

  for (int i = 0; i<n; i++) {
    if ((strcmp(word,(*sptr)[i])==0)) {
	printf("It occurs in row %d", i+1);
      }

  }
  

}
