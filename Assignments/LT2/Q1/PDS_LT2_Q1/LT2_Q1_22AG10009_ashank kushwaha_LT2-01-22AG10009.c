/*
Name- ASHANK KUMAR KUSHWAHA
LAB TEST 2
SECTION 2
22AG1009*/
#include<stdio.h>
#include<stdlib.h>
struct dob{
    int date;
    int month;
    int year;
};

struct Person{
    char name[31];
    char passport_no[11];
    char nationality[16];
    struct dob d;
};

void read(struct Person * x){
    /*fgets(x->name,30,stdin);
    fgets(x->passport_no,10,stdin);
    fgets(x->nationality,15,stdin);*/
    scanf("\n%[^\n]*c",x->name);
    scanf("\n%[^ ]*c",x->passport_no);
    scanf(" %[^ ]*c",x->nationality);
    scanf("%d-%d-%d",&((x->d).date),&((x->d).month),&((x->d).year));
}

void print(struct Person *x,int j){
    printf("** Person %d**\n",j);
    printf("%s\n%s %s %d-%d-%d\n",x->name,x->passport_no,x->nationality,(x->d).date,(x->d).month,(x->d).year );
}
int main(){
    int n,i,j,m,count=0,count1=0;
    scanf("%d",&n);
    struct Person *Persons;
    Persons=(struct Person *)malloc(n*sizeof(struct Person));
    for (i=0;i<n;i++){
        read(&Persons[i]);
    }
    for (j=0;j<n;j++){
        print(&Persons[j],j);
    }
    scanf("%d",&m);
    Persons=(struct Person *)realloc(Persons,(m+n)*(sizeof(struct Person)));
    for (i=i;i<m+n;i++){
        read(&Persons[i]);
    }
    for (i=0;i<m+n;i++){
        if (strcmp(Persons[i].nationality,"India")==0) {
            count1++;
        }

    }
    printf("\n");
    if (count1==0) printf("no persons have nationality as india\n");
    else if (count1=m+n) printf("all persons have nationality as india\n");
    else printf("%d persons have nationality as india\n",count1);

    for (i=0;i<m+n;i++){
        if (strcmp(Persons[i].nationality,"India")==0) {
            print(&(Persons[i]),count);
            count++;
        }

    }

    free(Persons);


}
