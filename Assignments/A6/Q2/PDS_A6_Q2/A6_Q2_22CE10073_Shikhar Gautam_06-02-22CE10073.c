#include <stdio.h>

void readstring(char str[]);

int main(){

// PART B of the question

  char str[100]; // declaring string
  scanf("%s", str); // taking input for string
  printf("You string is : %s", str); // printing our string

// PART A of the question

int n1;
long int n2;
long long int n3;
float n4;
char ch;

scanf("%d", &n1);
printf("%d", n1);

scanf("%ld", &n2);
printf("%ld", n2);

scanf("%lld", &n3);
printf("lld", n3);

scanf("%f", &n4);
printf("%f", n4);

scanf("%c", &ch);
printf("%c", ch);

return 0;
}
