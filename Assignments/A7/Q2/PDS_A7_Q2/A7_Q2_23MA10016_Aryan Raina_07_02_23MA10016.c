//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

/* This function checks how many two consecutive lowercase alphabets are at a separation of one character*/
void check(char str[]) {
  // initially ans will be 0
  int ans = 0;

  // the loop starts from 2 because we are checking with the character at indice-2, it ends when str[i] because the end of every string is null ie \0
  for (int i = 2; str[i]; i++) {
    // if current character isnt in b to z continue
    if (!('b' <= str[i] && str[i] <= 'z')) continue;

    // checks if str[i] and str[i-2] are consecutive if yes than ans++
    if (str[i] - str[i-2] == 1) ans++;
  }

  printf("Output for check function = %d\n\n", ans);
}

//-------------------------------------------------------

// This function prints char that is next to next of it in alphabetical order in a cyclic way like a->c, b->d, y->a, z->b for all chars in string
void encode1(char str[]) {
  printf("Output for encode1 function = ");
  for (int i = 0; str[i]; i++) {
    // p stores 0 for a, 1 for b, ... 25 for z, str[i] is the p-th character of alphabets
    int p = str[i] - 'a';
    // (p+2) % 26 will give us a new p such that a = 2, b = 3 ...y = 0, z = 1
    int newp = (p + 2) % 26;

    // newp + 'a' will give us the ascii of newp-th character
    printf("%c", newp + 'a');
  }
  printf("\n\n");
}

//------------------------------------------------------

void encode2(char str[]) {
  printf("Output for encode2 function = ");
  // we are just printing 'a' before every character
  for (int i = 0; str[i]; i++)
    printf("a%c", str[i]);
  printf("\n\n");
}

//--------------------------------------------------------------

int main() {
  char str[21];
  printf("Enter the input string : ");
  scanf("%s", str);

  printf("\nInput string = \"%s\"\n\n", str);

  check(str);
  encode1(str);
  encode2(str);
}

 
