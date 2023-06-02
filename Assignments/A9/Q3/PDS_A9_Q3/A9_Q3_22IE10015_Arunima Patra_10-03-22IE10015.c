//sec 2
//Assignment no-8
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1

#include<stdio.h>
struct user{
  char userid[100];
  char password[100];

};
void enrolment(struct user *u){
    int ctr1=0,ctr2=0,count=0, check1=0, check2=0, check3=0, check4=0;
   scanf("%s", &u->userid);
   for(int i=0; u->userid[i]!='\0'; i++){
      if(u->userid[i]==' '){
        ctr1++;
      }

   }
   if(ctr1==0){
      printf("%s enrolled successfully",u->userid );
   }
   for(int i=0; u->password[i]!='\0'; i++){
      if(ctr1==0){
       scanf("%s", &u->password);
      if(u->password[i]==' '){
        ctr2++;
      }
      for(int i=0;u->password[i]!='\0'; i++){
        count++;
      }
      if(count<12){
        ctr2++;
      }
       for(int i=0;u->password[i]!='\0'; i++){
            if(u->password[i]>=90 && u->password[i]<=115){
                check1++;
            }
       }
       if(check1==0){
          ctr2++;
       }
       for(int i=0;u->password[i]!='\0'; i++){
            if(u->password[i]>=65 && u->password[i]<=90){
                check2++;
            }
       }
       if(check2==0){
          ctr2++;
       }
       for(int i=0;u->password[i]!='\0'; i++){
            if(u->password[i]==0 ||u->password[i]==1 ||u->password[i]==2 ||u->password[i]==3 ||u->password[i]==4 ||u->password[i]==5 ||u->password[i]==6 ||u->password[i]==7 ||u->password[i]==8 ||u->password[i]==9){
                check3++;
            }
       }
       if(check3==0){
          ctr2++;
       }
        for(int i=0;u->password[i]!='\0'; i++){
            if(u->password[i]=='~'||u->password[i]=='!'||u->password[i]=='@'||u->password[i]=='#' ||u->password[i]=='$' ||u->password[i]=='%' ||u->password[i]=='&' ||u->password[i]=='*' ){
                check4++;
            }
       }
       if(check4==0){
          ctr2++;
       }
       if(ctr2>0){
        printf("Invalid Password");
       }

   }
   else{
    printf("Not a correct user id");
   }
   }
}
int main(){
    int n,m;
   printf("Enter max no. of user:");
   scanf("%d", &n);
   struct user u[n];
   for(int i=0; i<n; i++){
   printf("Choose one of the options:1.Enroll\n 2.Signin\n 3.Exit");
   scanf("%d", &m);
   if(m==1){
    enrolment( u);
   }


   }

}
