/*Name: Ashutosh Malik
Roll No: 22EE10016
SET A*/
#include<stdio.h>
typedef struct records{
char rollNo[12];
char branch[12];
char dob[12];

}rec;


int main(){
int n;
scanf("%d",&n);
if (n > 100){
    printf("Invalid value of N");
}

rec r[n];
rec t[n];
rec p[n];

for (int i = 0; i<n; i++){
    scanf("%s", &r[i].rollNo);
    scanf("%s", &r[i].branch);
    scanf("%s", &r[i].dob);

}

char a[4];
scanf("%s",a);
int x=0,y=0;
int c = a[0] + a[1] + a[2] + a[3];
int j = 0;
while(j < n){
    int k = r[j].dob[6] + r[j].dob[7] + r[j].dob[8] + r[j].dob[9];
    if (k >= c){
        t[x] = r[j];

    x++;
        }
    if (k < c){
        p[y] =  r[j];

    y++;
    }

j++;

        }


if (y > 0){
for (int i = 0; i<y; i++){
    printf("Deleted Records: %s %s %s\n", p[i].rollNo, p[i].branch, p[i].dob);
}
}

if ( y == 0){
    printf("No deleted records \n");
}

printf("m = %d, ", y);

if (y - n < 0){
    printf("n - m = %d\n", n-y);
}


if (n - y < 0){
    printf("n - m = %d \n", y - n);
}

if (n-y == 0){
    printf("n - m = %d \n", 0);
}
if (x > 0 ){
printf("Remaining Records: \n");
for (int i = 0; i<x; i++){

    printf("%s %s %s \n",  t[i].rollNo, t[i].branch, t[i].dob);
}
}

if (x == 0){

printf("Remaining records :\n");
printf("No remaining records \n");
}







return 0;
}



