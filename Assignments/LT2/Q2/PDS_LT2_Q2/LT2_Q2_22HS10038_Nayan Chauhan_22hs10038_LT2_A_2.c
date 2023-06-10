#include <stdio.h>
#include <stdlib.h>

typedef struct Record{
    char rollNo[10];
    char branch[2];
    int d;
    int m;
    int y;
    } record;
int main()
{
    record *p;
    int n;
    scanf("%d", &n);
    if(n<0||n>100) printf("Invalid Value of N");
    else{
    // scanf("%d");
    getchar();
    p = (record *) malloc((n)*sizeof(record));
    for(int i =0; i<n; i++){
        scanf("%s %s %d/%d/%d", p[i].rollNo, p[i].branch, &p[i].d, &p[i].m, &p[i].y);
    }
    int year;
    scanf("%d", &year);
    int m;
    record z;
    for(int i =0; i<n; i++){
        if(p[i].y<year){
            ++m;
            printf("Deleted Record %s %s %d/%d/%d\n", p[i].rollNo, p[i].branch, p[i].d,p[i].m, p[i].y);
            for(int j =i; j<n; j++){
                p[j]=p[j+1];
            }
        }
    }
    printf("Remaining records \n");
    for(int i =0; i<n-m; i++){
            printf("%s %s %d/%d/%d\n", p[i].rollNo, p[i].branch, p[i].d,p[i].m, p[i].y);
        }
    }
    }

