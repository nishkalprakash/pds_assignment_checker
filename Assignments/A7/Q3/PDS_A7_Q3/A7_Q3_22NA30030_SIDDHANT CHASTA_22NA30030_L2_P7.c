/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 7
Description :A program to check whether the two strings are anagram or not.
*/

#include<stdio.h>

void checkAnagram(char word1[],char word2[]);
void bubbleSort(char arr1[],char arr2[],int size1,int size2);
int main(){
char word1[10],word2[10];
char arr1[10];
char arr2[10];
arr1[10] = word1[10];
arr2[10] = word2[10];

printf("enter the words");
printf("Word 1 : ");
scanf("%s",&word1);
printf("Word 2 : ");
scanf("%s",&word2);

bubbleSort(arr1,arr2,10,10);
checkAnagram(word1,word2);



return 0;
}


void checkAnagram(char word1[],char word2[]){
     int j=0;
     for(int i=0;word1[i]=word2[j];i++){
     j++;
     if(word1[i] != word2[j])
     printf("NOT a anagram\n");
     else printf("Yes, they are anagrams of EACH other");
  }  
}
      


       void bubbleSort(char arr1[], char arr2[], int size1,int size2)
       {
           for (int trial = 0; trial < size1-1 ; trial++)
            { 
                for (int  j = 0; j < size1-1-trial; j++)
                      if ( arr1[ j ] > arr1[ j +1] ) 
                     {      
                                char temp = arr1[ j +1] ;
                                arr1[ j +1] = arr1[ j ] ;
                                arr1[ j ] = temp ;
                     }
            }
           for (int trial = 0; trial < size2-1 ; trial++)
            { 
                for ( int j = 0; j < size2-1-trial; j++)
                      if ( arr2[ j ] > arr1[ j +1] ) 
                     {      
                                char temp = arr2[ j +1] ;
                                arr2[ j +1] = arr2[ j ] ;
                                arr2[ j ] = temp ;
                     }
            }
       } 















