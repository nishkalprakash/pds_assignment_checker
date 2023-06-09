/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Lab Test 2
* Description : Management of records
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//defining structure
struct Dob{
    int dd;
    int mm;
    int yyyy;
  };

struct Person{
  char name[30];
  char passport_no[10];
  char nationality[15];
  struct Dob dob;
};

//function declaration
void read(struct Person Persons[],int n);
void print(struct Person Persons[],int n);


int main(){
 int n,ctr=0;
 char ind[]="India";
 printf("Enter number of persons: ");
 scanf("%d",&n);
 struct Person Persons[n];
 read(Persons,n); //function call


 int m;
 printf("Enter number of persons: ");
 scanf("%d",&m);
 struct Person Persons2[m];
 read(Persons,m); //function call

 print(Persons,n); //function call
 print(Persons,m); //function call

 struct Person Persons_merged[m+n]; //merging two arrays
  for(int i=0;i<n;i++){
    Persons_merged[i]= Persons[i];
  }
  for(int i=n;i<m;i++){
    Persons_merged[i]= Persons2[i];
  }

 for(int i=0;i<n+m;i++){
    if(strcmp(Persons_merged[i].name,ind)==0){
        printf("** Person %d **\n",i);
        printf("%s\n",Persons_merged[i].name);
        printf("%s ",Persons_merged[i].passport_no);
        printf("%s ",Persons_merged[i].nationality);
        printf("%d-%d-%d\n",Persons_merged[i].dob.dd,Persons_merged[i].dob.mm,Persons_merged[i].dob.yyyy);
        ctr++;
    }
 }

 if(ctr==0){
    printf("No person having nationality as India");
 }


return 0;
}

//function definition
void read(struct Person Persons[],int n){
  for(int i=0;i<n;i++){
   printf("Enter your name : ");
   gets(Persons[i].name);
   printf("Enter your passport number : ");
   scanf("%s",&Persons[i].passport_no);
   printf("Enter your nationality : ");
   scanf("%s",&Persons[i].nationality);
   printf("Enter your date of birth : ");
   scanf("%d%d%d",&Persons[i].dob.dd,&Persons[i].dob.mm,&Persons[i].dob.yyyy);

  }

}

void print(struct Person Persons[],int n){
  for(int i=0;i<n;i++){
    printf("** Person %d **\n",i);
    printf("%s\n",Persons[i].name);
    printf("%s ",Persons[i].passport_no);
    printf("%s ",Persons[i].nationality);
    printf("%d-%d-%d\n",Persons[i].dob.dd,Persons[i].dob.mm,Persons[i].dob.yyyy);

  }
}
