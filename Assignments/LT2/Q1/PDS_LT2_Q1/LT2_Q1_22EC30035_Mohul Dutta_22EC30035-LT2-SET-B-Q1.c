/*Name - Mohul Dutta
Roll No. - 22EC30035
Question 1
Description-*/
#include<stdio.h>
typedef struct{
char d[3];
char m[3];
char y[5];
}dob;
typedef struct{
    char name[31];
    char passport_no[11];
    char nationality[16];
    dob dobh;
}Person;
void read(Person* p,int i){
    gets(p[i].name);
    scanf("%s",p[i].passport_no);
    scanf("%s",p[i].nationality);
    char c;
    c=getchar();
    int k=0;
    while(c!='-'){
        p[i].dobh.d[k]=c;
        c=getchar();
        k++;
    }
    p[i].dobh.d[k]='\0';
    c=getchar();
    k=0;
    while(c!='-'){
        p[i].dobh.m[k]=c;
        c=getchar();
        k++;
    }
    p[i].dobh.m[k]='\0';
    c=getchar();
    k=0;
    while(c!='\n'){
        p[i].dobh.y[k]=c;
        c=getchar();
        k++;
    }
    p[i].dobh.y[k]='\0';
}
void print(Person p){
printf("%s\n",p.name);
printf("%s  ",p.passport_no);
printf("%s  ",p.nationality);
printf("%s-%s-%s",p.dobh.d,p.dobh.m,p.dobh.y);

}
int main(){
    Person *Persons;
    int n;
    scanf("%d",&n);
    Persons=malloc(n*sizeof(Person));
    for(int i=0;i<n;i++)
        read(Persons,i);
    Person *Persons2;
    int m;
    scanf("%d",&m);
    Persons2=malloc(m*sizeof(Person));
    for(int i=0;i<m;i++)
        read(Persons2,i);
    printf("\n");
    Person* Persons_merged=(Person *)malloc((m+n)*sizeof(Person));
    for(int i=0;i<n;i++){
        Persons_merged[i]=Persons[i];
    }
    for(int i=0;i<m;i++){
        Persons_merged[i+n]=Persons2[i];
    }
    for(int i=0;i<m+n;i++){
        printf("**Person %d **\n",i);
        print(Persons_merged[i]);
        printf("\n\n");
    }
    int z1=0;
    for(int i=0;i<m+n;i++){
        if(strcmp(Persons_merged[i].nationality,"India")==0){
            z1++;
            print(Persons_merged[i]);
            printf("\n\n");
        }
    }
    if(z1==0)
        printf("No persons having Indian nationality");
}

