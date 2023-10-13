//Name: Nayandeep Deb
//Roll no. 23MA10036

#include <stdio.h>

int check(char str[20]); //declaring the three functions
void encode1 (char str[20]);
void encode2 (char str[20]);

int main() {
  char str[20];
  printf("Input a word: "); //taking string input
  scanf("%s", str);

  int ck = check(str); //Part A
  printf("check = %d\n", ck); 
  encode1(str); //Part B
  printf("\n");
  encode2(str); //Part C
  printf("\n");
}

int check(char str[20]) { //checks whether condition stated in question is satisfied and returns an int
  int size = 0; //setting size of string
  for (int i = 0; str[i] != '\0'; i++) {
    size++;
  }
  int cnt = 0; //counter starts at 0
  for (int i = 2; i < size; i++) {
    if ((str[i] - str[i-2]) == 1) cnt++; //if condition is satisfied cnt inceases by 1 and at the end is returned
  }
  return cnt;
}

void encode1 (char str[20]) { //encoding a new string where each character of original string is increased by 2
  char s[20];
  int size = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    size++;
  }
  for (int i = 0; i < size; i++) {
    if (str[i] == 'y') s[i] = 'a'; //case of y and z is dealt with indivially as they are different from the rest
    else if (str[i] == 'z') s[i] = 'b';
    else s[i] = str[i] + 2; //used for a through x
  }
  printf("%s", s);
}

void encode2 (char str[20]) { //encoding a new string where the letter 'a' is added befpre each character
  char s[40]; //array size double of original to hold all characters
  int size = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    size++;
  }
  for (int i = 0; i < size; i++) {
    s[2*i] = 'a'; //adding 'a' before each character
    s[2*i +1] = str[i];
  }
  s[2*size] = '\0'; //ending the string with \0
  printf("%s", s);
}
