//sec 2
//Assignment no-2
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1
#include<stdio.h>
#include<string.h>
struct dob{
      int dd;
      int mm;
      int yyyy;

   };
struct record{
   char rollno[11];
   char branch[3];

    struct dob d;

};

int main(){
   int n,y;
   printf("Enter the value:");
   scanf("%d", &n);
   getchar();
   if(n>100){
    printf("Invalid value");
   }
   else{
   struct record *s;
   s=(struct record*) malloc(n*sizeof(struct record));
   for(int i=0; i<n; i++){
      scanf("%s %s %d/%d/%d", &s[i].rollno, &s[i].branch,&s[i].d.dd, &s[i].d.mm, &s[i].d.yyyy );
   }



   scanf("%d", &y);
   struct record *s1;
   struct record *s2;
   s1=(struct record*) malloc(n*sizeof(struct record));
   s2=(struct record*) malloc(n*sizeof(struct record));
   int j=0;
   int k=0;
   for(int i=0; i<n; i++){
      if(s[i].d.yyyy<y){
         strcpy(s1[j].rollno, s[i].rollno);
         strcpy(s1[j].branch, s[i].branch);
         s1[j].d.dd=s[i].d.dd;
         s1[j].d.mm=s[i].d.mm;
         s1[j].d.yyyy=s[i].d.yyyy;
         j++;
      }
      else{
        strcpy(s2[k].rollno, s[i].rollno);
         strcpy(s2[k].branch, s[i].branch);
         s2[k].d.dd=s[i].d.dd;
         s2[k].d.mm=s[i].d.mm;
         s2[k].d.yyyy=s[i].d.yyyy;
         k++;

      }
      }
      printf("m=%d, n-m=%d\n", j, n-j );
      printf("Deleted records:\n");

      for(int i=0; i<j; i++){
        printf("%s %s %d/%d/%d\n", s1[i].rollno, s1[i].branch, s1[i].d.dd, s1[i].d.mm, s1[i].d.yyyy);
      }
      printf("Remaining records:\n");

      for(int i=0; i<k; i++){
        printf("%s %s %d/%d/%d\n", s2[i].rollno, s2[i].branch, s2[i].d.dd, s2[i].d.mm, s2[i].d.yyyy);
      }
   }

return 0;






}
