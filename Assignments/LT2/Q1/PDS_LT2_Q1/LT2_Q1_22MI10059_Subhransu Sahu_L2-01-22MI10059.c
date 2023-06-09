//SUBHRANSU SAHU
//22MI10059

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Person{
char name[30];
char passport_no[10];
char nationality[15];};

struct dob{
int dd;
int mm;
int yyyy;};

void read(struct Person Person1, struct dob dob1){
scanf("%s", Person1.name);
scanf("%s %s %s %d %d %d", Person1.passport_no, Person1.nationality, &dob1.dd,&dob1.mm,&dob1.yyyy);
}

void print(struct Person Person1, struct dob dob1){
printf("%s", Person1.name);
printf("\n%s", Person1.passport_no);
printf("%s",Person1.nationality);
printf("%d-%d-%d",dob1.dd,dob1.mm,dob1.yyyy);}


int main(){
struct Person person2;
struct dob dob2;
read(person2,dob2);
print(person2,dob2);
return 0;}