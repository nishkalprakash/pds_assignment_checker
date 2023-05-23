/*name -samares malik
  roll no-22ME10072
  assignment7 q3*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,m;
    scanf("%d",&n);
    //scanf("%d",&m);
    char **name1;
    char **name2;
    char **name3;
    name1 = (char*)malloc(n*sizeof(char));
    for(int i=0;i<n;i++){
        //mane1[i]=(char*)malloc(100*sizeof(char));
        name1[i]=(char*)malloc(100*sizeof(char));
        int k=0;
        char ch;
        do{
            //fflush(stdin);
            scanf("%c",&ch);
            name1[i][k]=ch;
            k++;
            printf("gre");

        }while(ch != '\n');
        k = k-1;
        name1[i][k]='\0';

    }
    printf("cth\n");
    scanf("%d",&m);
    name2 = (char**)malloc(m*sizeof(char*));
    for(int i=0;i<m;i++){
        name2[i] = (char*)malloc(100*sizeof(char));
        int k=0;
        char ch;
        do{
            ch=getchar();
            name2[i][k]=ch;
            k++;

        }while(ch != '\n');
        k = k-1;
        name2[i][k]='\0';

    }
    return 0;

}
