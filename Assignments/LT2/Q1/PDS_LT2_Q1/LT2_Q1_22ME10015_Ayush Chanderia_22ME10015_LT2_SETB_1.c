#include <stdio.h>
typedef struct Person {
char *name[30];
char *passport_no[11];
char *nationality[16];
};
typedef struct dob{
int *dd;
int *mm;
int *yyyy;
};
void read(Person p){
    printf("Enter your name:");
    fgets(p.name,sizeof(p.name),stdin);



}
int main(){
    int n;
    printf("")

return 0;
}


