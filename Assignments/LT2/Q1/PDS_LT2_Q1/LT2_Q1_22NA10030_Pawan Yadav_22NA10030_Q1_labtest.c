#include<stdio.h>
struct person{
 char name[30];
 char passport_no[15];
 char nationality[15];
 struct dob{
  int dd;
  int mm;
  int yyyy;
 }d_o_b;
     }persons[30],persons2[30];
  void read(int n){
  for(int i=0;i<n;i++){
    gets(persons[i].name);
    gets(persons[i].passport_no);

 gets(persons[j].nationality);


    scanf("%d",&persons[j].d_o_b.dd);

    scanf("%d",&persons[j].d_o_b.mm);

    scanf("%d",&persons[j].d_o_b.yyyy);
    }

 }
 void print(int n){
  for(int i=0;i<n;i++){
   printf("%s",persons[i].name);

   printf(" %s",persons[i].passport_no);

    printf(" %s",persons[i].nationality);

   printf(" %d",persons[i].d_o_b.dd);
   printf("-%d",persons[i].d_o_b.mm);
   printf("-%d",persons[i].d_o_b.yyyy);
  }
 }
  int main(){
int n;
scanf("%d",&n);
  read(n);
  print(n);
return 0;
}
