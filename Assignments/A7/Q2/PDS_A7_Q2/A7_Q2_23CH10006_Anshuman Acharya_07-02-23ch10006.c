// Name - Anshuman Acharya
// Roll no. : 23ch10006

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check(char name[], int n)
{

  int count = 0, i, j;
  for(i = 0;i <= n - 2;i++){
    if(name[i + 2] - name[i] == 1){
      count++;
    } 
  }

  return count;
}

void encode1(char name[], int n){

  for(int i = 0;i <= n;i++){

    if(name[i] >= 'a' && name[i] <= 'x'){
      name[i] += 2;
    }
    else if(name[i] == 'y' || name[i] == 'z'){
      name[i] -= 24;
    }

  }

  printf("%s\n", name);

}

void encode2(char name[], int n){

  char ans[40];
  for(int i = 0;i <= 2 * n;i += 2){
    ans[i] = 'a';
  }

  for(int i = 1;i <= 2 * n + 1;i += 2){
    ans[i] = name[i/2];
  }

  printf("%s\n", ans);

}

int main()
{

  char name[20], name1[20], name2[20];
  int n;

  printf("Enter the name : ");
  scanf("%s", name);
  printf("The entered name is : ");
  printf("%s\n", name);

  n = strlen(name);
  printf("\n n = %d", n);

  /*for(int i = 0;i < n;i++){
    name1[i] = name[i];
  }

  for(int i = 0;i < n;i++){
    name2[i] = name[i];
    }*/

  strcpy(name1, name);
  strcpy(name2, name);

  int ans = check(name, n - 1);

  printf("Desired no. = %d\n", ans);

  printf("\n");

  printf("The encoded name is : ");
  encode1(name1, n - 1);

  printf("\n");

  printf("The doubly encoded name is : ");
  encode2(name, n - 1);

  printf("\n");

  printf("The original name is : %s\n", name2);
  
  return 0;
}
