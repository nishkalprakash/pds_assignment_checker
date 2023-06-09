#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*NAME-Sumit Kumar
Roll nO.-22CS30056
Section-2
Description-Lab Test question 1 Management of records*/
typedef struct {
    char name[30];
    char passport_no[11];
    char nationality[15];
     struct dob{
        int dd;
        int mm;
        int yy;
    }dob;
 }Persons;
 void read(Persons *r,int n){
       for(int i=0;i<n;i++){
        scanf(" %[^\n]",&r[i].name);
        scanf("%s",&r[i].passport_no);
        scanf("%s",&r[i].nationality);
        scanf("%d-%d-%d",&r[i].dob.dd,&r[i].dob.mm,&r[i].dob.yy);
        printf("\n");
       }
 }
 void Fprint(Persons *r,int n){
       for(int i=0;i<n;i++){
        printf("\n***Person %d***\n",i);

        printf("%s &&&&",r[i].passport_no);
        printf("%s ",r[i].nationality);

       }
 }
 void print(Persons *r,int n){
       for(int i=0;i<n;i++){
        printf("\n***Person %d***\n",i);
        printf("%s\n",r[i].name);
        printf("%s ",r[i].passport_no);
        printf("%.10s ",r[i].nationality);
        printf("%d",r[i].dob.dd);
        printf("-");
        printf("%d",r[i].dob.mm);
        printf("-");
        printf("%d",r[i].dob.yy);
        printf("\n");
       }
 }
 void merge(Persons *r1,Persons *r2,int n,int m,Persons *r){
     for(int i=0;i<n;i++){
        r[i]=r1[i];
     }
     for(int i=n;i<m+n;i++){
        r[i]=r2[i-n];
     }
 }
 void exprint(Persons *r,int n){
     printf("\nAll the persons having Nationality as India:");
     int count=0;
     char a[]="India";
       for(int i=0;i<n;i++){
            if(strcmp(r[i].nationality,a)==0){
        printf("\n***Person %d***\n",i);
        printf("%s\n",r[i].name);
        printf("%s ",r[i].passport_no);
        printf("%.10s ",r[i].nationality);
        printf("%d",r[i].dob.dd);
        printf("-");
        printf("%d",r[i].dob.mm);
        printf("-");
        printf("%d",r[i].dob.yy);
        printf("\n");
        count++;
         }
       }
       if(count==0) printf("\nNo persons having Nationality as India\n");
 }
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    Persons *Persons1=(Persons *)malloc(n*sizeof(Persons));
    read(Persons1,n);
    print(Persons1,n);
    int m;
    printf("\nEnter the value of m:");
    scanf("%d",&m);
    Persons *Persons2=(Persons *)malloc(m*sizeof(Persons));
    read(Persons2,m);
    Persons *Persons_merged=(Persons *)malloc((m+n)*sizeof(Persons));
    merge(Persons1,Persons2,n,m,Persons_merged);
    exprint(Persons_merged,m+n);
   return 0;
}
