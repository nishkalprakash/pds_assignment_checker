/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3IM06
q. no-01
description- operations on complex number  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>




typedef struct{

  char userid[100];
  char pass[100];

}enroll;



enroll readenroll(enroll e1){


    int f1=0,f2=0,f3=0,f4=0,f5=0;

   printf("ENTER  THE USER ID\n");

   scanf("%s",e1.userid);

   for(int i=0;e1.userid[i]!='\0';i++){


    if(e1.userid[i]==' '){
        printf("INvalid user id");
        exit(0);
    }
   }

   printf("Enter password\n");
   scanf("%s",e1.pass);


   if(strlen(e1.pass)<12){

    printf("Invalid password\n");
    exit(1);
   }

   for(int i=0;e1.pass[i]!='\n';i++){
    if(e1.pass[i]==' '){
        printf("INvalid user password");
        exit(0);
    }
   }


    for(int i=0;e1.pass[i]!='\n';i++){


        if(e1.pass[i]>='A' || e1.pass[i]<='Z'){
                f1=1;

        }

        if(e1.pass[i]>='0' || e1.pass[i]<='9'){
                f2=1;

        }

        if(e1.pass[i] == '$' || e1.pass[i] == '#' || e1.pass[i]== '&' || e1.pass[i]== '%' || e1.pass[i]== '@' || e1.pass[i]=='~'){
            f3=1;
        }




    }

    if(f1!=1 && f2!=1 && f3!=1){

        printf("INvalid password \n");
        exit(1);
    }

    else{
        printf("  %s ENROLLED SUCCESSFULLY \n",e1.userid);

    }





return e1;

   }











int main(){


    enroll e[20];
    int n,n1;

     printf("ENTER NUMBER OF USER \n");


     printf("Choose one of following\n");
       printf("1 enroll\n");
         printf("2 sign in\n");
           printf(" 3 exit\n");

     scanf("%d",&n);
     if(n==1){
    readenroll(e[1]);
     }
     if(n==3){
    printf("EXITING\n");
    exit(1);
     }

      printf("Choose one of following\n");
       printf("1 enroll\n");
         printf("2 sign in\n");
           printf(" 3 exit\n");

     scanf("%d",&n1);
      if(n1==1){
    readenroll(e[2]);


     }
    /* if(strcasecmp(e[1].userid,e[2].userid)==0){
        printf("ALREADY EXist\n");
        exit(1);

     }*/















return 0;
}
