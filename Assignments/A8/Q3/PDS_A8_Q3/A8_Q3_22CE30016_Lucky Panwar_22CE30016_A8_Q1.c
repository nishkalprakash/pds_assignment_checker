/* Name - Lucky Panwar
   Roll no. - 22CE30016
   Assignment no. - 6
   Question no. - 1 */



                      


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 int main()
{
  char text[100] ;
  int *alphabet;
  char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  alphabet = (int *)calloc(26,sizeof(int)); 
  int wrd = 0;sen =0; vow = 0;
  int i = 0 ;
  printf("Sentence\n");
  scanf("%[^\n]s", & *sen);
  printf("%s",& *sen);
  while(text[i-1]!='\n'){
     scanf(%c",&text[i]);
     i++;
    }
 text[i-1] ='\0';
 printf("Length counted without using library is %d\n",i-1);
 printf("Length counted using strlen() is %d\n", strlen(text));
 
 printf("Number of vowels : %d\n",vow);
 printf("Frequency of count of each alphabet : %d\n");
 for(int k=0;k<i-1;k++){
        if(text[k]=='') wrd++;
           } wrd++;
 printf("Number of words : %d",wrd);
 for(int k=0;k<i-1;k++){ 
   if(text[k]=='.') sen++;
    }
  printf("Number of sentences : %d",sen);
 for(int k=0 ; k<i-1;k++){
   switch (text[k]){
        case 'a':
        case 'A':vow++;break;
        case 'e':
        case 'E':vow++;break;
 case 'i':
        case 'I':vow++;break;
 case 'o':
        case 'O':vow++;break;
 case 'u':
        case 'U':vow++;break;
        }
  }


  














   switch (text[j]){
                  case 'a':
                  case 'A':alphbet[0]++;break;
                  case 'b':
                  case 'B':alphbet[1]++;break;
                  case 'c':
                  case 'C':alphbet[2]++;break
                  case 'd':
                  case 'D':alphbet[3]++;break
	          case 'e':
                  case 'E':alphbet[4]++;break
		  case 'f':
                  case 'F':alphbet[5]++;break
		  case 'g':
                  case 'G':alphbet[6]++;break
		  case 'h':
                  case 'H':alphbet[7]++;break
		  case 'i':
                  case 'I':alphbet[8]++;break
		  case 'j':
                  case 'J':alphbet[9]++;break
		  case 'k':
                  case 'K':alphbet[10]++;break
		  case 'l':
                  case 'L':alphbet[11]++;break
		  case 'm':
                  case 'M':alphbet[12]++;break
		  case 'n':
                  case 'N':alphbet[13]++;break
		  case 'o':
                  case 'O':alphbet[14]++;break
		  case 'p':
                  case 'P':alphbet[15]++;break
		  case 'q':
                  case 'Q':alphbet[16]++;break
		  case 'r':
                  case 'R':alphbet[17]++;break
		  case 's':
                  case 'S':alphbet[18]++;break
		  case 't':
                  case 'T':alphbet[19]++;break
		  case 'u':
                  case 'U':alphbet[20]++;break
		  case 'v':
                  case 'V':alphbet[21]++;break
		  case 'w':
                  case 'W':alphbet[22]++;break
		  case 'x':
                  case 'X':alphbet[23]++;break
		  case 'y':
                  case 'Y':alphbet[24]++;break
		  case 'z':
                  case 'Z':alphbet[25]++;break
              }
  for(int j=0;j<26;j++){
   if(alphabet[j]==0) continue;
   else printf("'%c'=%d",alphabet[j]);



  return 0;
}

 
   
   
