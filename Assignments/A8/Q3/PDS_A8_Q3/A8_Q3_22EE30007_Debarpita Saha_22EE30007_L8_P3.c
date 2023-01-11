/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 8
* Description : Program to compute multiple functions on string
*/
#include<stdio.h>

#include<string.h>

int main()

{
 
    char string[MAX_LENGTH];

    int i, sentences = 0, words = 1, vowels = 0, length=0;

    printf("Enter a long string:\n");

    scanf("%s",string);

    scanf("%d", &MAX_LENGTH);

    for (i = 0; i < length; i++) {

        if (string[i] == '.' || string[i] == '!' || string[i] == '?') {

            sentences++;

        }


        if (string[i] == ' ' || string[i] == '\t' || string[i] == '\n') {

            words++;

        }


        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {

            vowels++;

        }
       

    }
    
     for(i=0; string[i]!='\0'; i++){

     length++;
  
  }


    printf("Number of sentences: %d\n", sentences);

    printf("Number of words: %d\n", words);

    printf("Number of vowels: %d\n", vowels);

    printf("Length counted without using library: %d\n", length);

    printf("Length counted using strlen: %d\n", strlen(str));




    return 0;

}
 
