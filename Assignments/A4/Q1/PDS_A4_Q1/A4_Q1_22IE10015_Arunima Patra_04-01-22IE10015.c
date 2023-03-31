#include<stdio.h>
//Section-2
//roll no-22IE10015
//Name-Arunima patra
//assignment no-4
//question no-1
int main(){
    char ch;int counter=0; int count=0; int c=0;
    int i=1;
   while(1){
        printf ("Enter a charachter:");
        scanf ("%c", &ch);

        if (i==1){
        if (ch<"A" || ch> "Z"){
            printf ("Not a valid password");
            break;
        }
        }
        if (ch==" "){
           printf ("Not a valid password");
            break;
        }
        if (ch=="$" || ch=="#" || ch== "%" || ch=="&" || ch=="@"){
            counter++;
            break;
        }
        if (ch=="1" || ch== "2"|| ch=="3" || ch== "4" || ch== "5"||ch== "6"||ch== "7"||ch== "8"|| ch== "9"){
            count++;
            break;
        }
         i++;


        if(i<8 || i>12){

            c++;

        }
        if (counter==0){

            c++;
        }
        if (count==0){

            c++;
        }
   }

        if (c>0){
            printf ("Not a valid password");
        }
        printf ("Valid Password");
        return 0;

    }















