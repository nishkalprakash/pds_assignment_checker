#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct dob{
    int dd;
    int mm;
    int yy;
    };

struct Person{
    char name[30];
    char passport_no[10];
    char nationality[15];
    struct dob d;
};

void read(struct Person *per){
    scanf(" %[^\n]*s",(*per).name);
    scanf("%s",(*per).passport_no);
    scanf("%s",(*per).nationality);
    scanf("%d %d %d",&(*per).d.dd,&(*per).d.mm,&(*per).d.yy);


}
void print(struct Person *per){
    printf("%s\n",(*per).name);
    printf("%s  ",(*per).passport_no);
    printf("%s  ",(*per).nationality);
    printf("%d-%d-%d  \n",(*per).d.dd,(*per).d.mm,(*per).d.yy);
}
int main(){
    int n;
    scanf("%d",&n);
    struct Person *Persons;
    Persons = (struct Person *)malloc(n*sizeof(struct Person));
    for(int i = 0;i<n;i++){
            read(&Persons[i]);

    }
    for(int i = 0;i<n;i++){
    print(&Persons[i]);
    }
    //second
    printf("\n");
    int m;
    scanf("%d",&m);
    struct Person *Persons2;
    Persons2 = (struct Person *)malloc(n*sizeof(struct Person));
    for(int i = 0;i<m;i++){
            read(&Persons2[i]);

    }
struct Person *Persons_merged;
Persons_merged = (struct Person *)malloc((n+m)*sizeof(struct Person));
for(int i = 0;i<n;i++){
        Persons_merged[i]=Persons2[i];

}
for(int i = n-1;i<(n+m-1);i++){
        Persons_merged[i]=Persons2[i-n+1];

}
for(int i = 0;i<(n+m-1);i++){
if(Persons_merged[i].nationality=="India"){
    print(&Persons_merged);
}
}








return 0;}
