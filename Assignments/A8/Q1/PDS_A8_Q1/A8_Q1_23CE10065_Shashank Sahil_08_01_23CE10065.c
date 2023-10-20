// roll - 23CE10065
// NAME - SHASHANK SAHIL
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* sptr[100];
char tempname[100] ;
int num = 0 ;
int numwords;
int count = 0;
void print(){
    for ( int i = 0 ; i < numwords ;i++){
            printf("Word no %d is\n ",i);
            int len = strlen(sptr[i]);
            for(int j = 0 ; j < len; j++){
                printf( "%c",sptr[i][j]);
            }
        }

}
void create(){
    printf(" How many words to enter (<100)?\n");
    scanf("%d",&numwords);
    for(int i =0 ; i < numwords ; i++){
        printf("Enter the word number %d\n",i+1);
        scanf("%s",tempname);
        count = strlen(tempname);
        sptr[i] =(char*) malloc( count *sizeof(char));
        for(int j =0 ; j <= count ; j++){
            sptr[i][j] = tempname[j];
            
        }
        count = 0;
        }
        print();
        

    }

void lengthStat(){
    for ( int i = 0 ; i < numwords ;i++){
            int len = strlen(sptr[i]);
            if (len <=2 && len >=1){
                printf("Following words have lengths (1-2)");
                for(int j = 0 ; j < len; j++){
                printf( "%c",sptr[i][j]);
            }

            }


            if (len <=5 && len >=3){
                printf("Following words have lengths (3-5)");
                for(int j = 0 ; j < len; j++){
                printf( "%c",sptr[i][j]);
            }

            }


            if (len > 5){
                printf("Following words have lengths (1-2)");
                for(int j = 0 ; j < len; j++){
                printf( "%c",sptr[i][j]);
            }

            }
            
        }


}


void letterStat(){
    int vowelcount = 0;
    for ( int i = 0 ; i < numwords ;i++){
            int len = strlen(sptr[i]);
            for(int j = 0 ; j < len; j++){
               
                if ( sptr[i][j]== 'a'||sptr[i][j]== 'e'||sptr[i][j]== 'i'||sptr[i][j]== 'o'||sptr[i][j]== 'u'){
                    vowelcount++;

                }
            }
        }
        printf("Number of vowels in all words considered together is %d\n", vowelcount);

}


int search (){
    int i = 0;
    char tempword[100];
    printf(" Enter the Word you want to search!");
    scanf("%s",tempword);
     for ( i ; i < numwords ;i++){
                if (!(strcmp(tempword, sptr[i]))){
                    printf("Sequence number is %d",i);
                    return 0;
                }
            
        }

    return i ;

}




/*void removeDuplicate (){
     for ( int i = 0 ; i < numwords ;i++){

         if (!(strcmp(, sptr[i]))){
                }
            
        }
    

}*/



void searchReplace(){
 int  i = search();
  char tempword[100];
  printf("Enter the new word");
  scanf("%s", tempword);
  int len = strlen(tempword);
  sptr[i] = realloc( sptr[i],len*sizeof(char));
  for(int j =0 ; j < len ; j++){
    sptr[i][j] = tempword[j];
  }
}





int main(){
prompt:
printf( " Enter the menu choice : \n 1.Create\n2.lengthStat\n3.letterStat\n4.search\n5.removeDuplicate\n6.searchReplace\n7.arrange\n ");
scanf("%d",&num);
while(num<=7 && num>=1){
if( num == 1){
    create();
    goto prompt;
}
if( num == 2){
    lengthStat();
    goto prompt;
}
if( num == 3){
    letterStat();
    goto prompt;
}
if( num == 4){
    search();
    goto prompt;
}
if( num == 5){
    //removeDuplicate();
    goto prompt;
}
if( num == 6){
    searchReplace();
    goto prompt;
}


}
if(num > 7){
    goto prompt;
}
}