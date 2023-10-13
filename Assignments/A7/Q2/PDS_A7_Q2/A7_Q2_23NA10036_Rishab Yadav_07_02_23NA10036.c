// roll no - 23NA10036
// Rishab Yadav
// set - 1

#include <stdio.h>

void check(int size, char str[size]);
void encode1(int size, char str[size]);
void encode2(int size, char str[size]);


int main(){

  int size;

  printf("Enter the size of the array:\n");
  scanf("%d", &size);

  if(size > 20){
    printf("Invalid size!\n");
    return 0;
    
  }

  char str[size];

  printf("Enter the string:\n");
  scanf("%s", str);

  check(size, str);
  encode1(size, str);
  encode2(size, str);

  printf("The original string is: %s\n", str);

  return 0;
}

void encode1(int size, char str[size]){
  
  for(int i = 0; i < size; i++){
    if(str[i] == 'y'){
      str[i] = 'a';
      continue;
     }
    else if(str[i] == 'z'){
      str[i] = 'b';
      continue;
     }
    else
      {
     str[i] = (char)((int)str[i] + 2);
      }
   }
   printf("encode1 - string - %s\n", str);
 }

void encode2(int size, char str[size]){
  char str2[2*size];
  
  for(int i = 0; i < 2*size; i = i + 2){
    str2[i+1] = str[i];
  }

  for(int i = 0; i < 2*size - 1; i = i + 2){
    str2[i] = 'a';
  }
  
  printf("encode2 - string - %s\n", str2);
 }

void check(int size, char str[size]){
   int count = 0;
   for(int i = 0; i < size-2; i++){
     if(((int)str[i+2] - (int)'a') - ((int)str[i] - (int)'a') == 1){
       count++;
     }
   }
   printf("Output - %d\n", count);
 }
