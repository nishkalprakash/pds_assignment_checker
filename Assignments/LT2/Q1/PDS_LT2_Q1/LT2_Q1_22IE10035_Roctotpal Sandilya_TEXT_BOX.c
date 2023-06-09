#include<stdio.h>
#include<string.h>
/*
   sec-2
   Assignment no.- End Test
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 1
*/
struct person{
    char name[30];
    char sur[30];
    char passport_no[10];
    char nationality[15];
    char dob[11];
};

void read(struct person *p){
    scanf("%s", p->name);
    scanf("%s", p->sur);
    scanf("%s",p->passport_no);
    scanf("%s",p->nationality);
    scanf("%s",p->dob);
}

void print(struct person *p){
    printf("\n%s %s", p->name, p->sur);
    printf("\n%s %s %s", p->passport_no, p->nationality, p->dob);
}

int main(){
int n,m;

scanf("%d", &n);
struct person *persons= (struct person*)malloc(n*sizeof(struct person));
for(int i=0; i<n; i++){
    read(&persons[i]);
}

for(int i=0; i<n; i++){
    printf("\n** Person %d **", i);
    print(&persons[i]);
}
scanf("%d", &m);
struct person *persons2= (struct person*)malloc(m*sizeof(struct person));
for(int i=0; i<m; i++){
    read(&persons2[i]);
}
struct person *persons_merged= (struct person*)malloc((m+n)*sizeof(struct person));
for(int i=0; i<n; i++){
    strcpy(persons_merged[i].name , persons[i].name);
    strcpy(persons_merged[i].dob, persons[i].dob);
    strcpy(persons_merged[i].passport_no, persons[i].passport_no);
    strcpy(persons_merged[i].nationality, persons[i].nationality);
}
for(int i=0; i<m; i++){
    strcpy(persons_merged[i+n].name , persons2[i].name);
    strcpy(persons_merged[i+n].dob, persons2[i].dob);
    strcpy(persons_merged[i+n].passport_no, persons2[i].passport_no);
    strcpy(persons_merged[i+n].nationality, persons2[i].nationality);
}
for(int i=0; i<m+n; i++){
    if(strcmp(persons_merged[i].nationality, "India")==0){
        printf("\n** Person %d **", i);
        print(&persons_merged[i]);
    }
}
return 0;
}