//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main(){
  int s, n;
  printf("Enter scale factor : ");
  scanf("%d", &s);
  if (!(1 <= s && s <= 6)) {
    printf("Invalid Input!\n");
    return 0;
  }
  
  printf("Enter number of lines : ");
  scanf("%d", &n);
  if (!(1 <= n && n <= 10)) {
    printf("Invalid Input!\n");
    return 0;
  }

  /* the cnt keeps track of what number to print, we change it back to 1 everytime it exceeds the limit */
  int cnt = 1;

  /* nested for loop to print i numbers in ith line for n lines*/
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d", cnt);
      cnt++;
      if (cnt > 3+s) cnt = 1;
    }
    printf("\n");
  }
}
