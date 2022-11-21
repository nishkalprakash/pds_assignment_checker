#include <stdio.h>

    int num;        //global declaration of variables
    char ch;
    float dec;

int main()
{
      scanf("%d %c %f" ,&num, &ch, &dec);    //read the character
      printf("%d %c %f",num, ch, dec);      //print the entered character
      return 0;
}

