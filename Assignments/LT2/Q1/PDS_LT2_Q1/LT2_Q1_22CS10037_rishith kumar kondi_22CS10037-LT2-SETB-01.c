
//rollno:22cs10037//

//NAME:K.RISHITH KUMAR//

//SEC:2//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

struct person{

    char s[30];

    char p[10];

    char n[15];

    char d[10];

};

void read(struct person *q)

{

    scanf("%s",q->s);

    scanf("%s",q->p);

    scanf("%s",q->n);

    scanf("%s",q->d);

}

void print(struct person *t,int n)

{

   printf("** person %d **\n",n);

   printf("%s %s %s %s",t->s,t->p,t->n,t->d);

}

int main()

{

    int m,n,i,j,g;struct person *p[3];

    scanf("%d",&n);

    p[0]=(struct person*)malloc(n*sizeof(struct person));

    for(i=0;i<n;i++)

    {

        read(&p[0][i]);

    }

    scanf("%d",&m);

    p[1]=(struct person*)malloc(m*sizeof(struct person));

    for(i=0;i<m;i++)

    {

        read(&p[1][i]);

    }

    for(i=0;i<n;i++)

    {

     print(&p[0][i],i);

    }

    p[2]=(struct person*)malloc((m+n)*sizeof(struct person));

    for(i=0;i<n;i++)

    {

        strcpy(p[2][i].s,p[0][i].s);strcpy(p[2][i].p,p[0][i].p);strcpy(p[2][i].n,p[0][i].n);strcpy(p[2][i].d,p[0][i].d);

    }

    for(j=i;j<(m+n);j++)

    {

        strcpy(p[2][j].s,p[1][j].s);strcpy(p[2][j].p,p[1][j].p);strcpy(p[2][j].n,p[1][j].n);strcpy(p[2][j].d,p[1][j].d);

    }

    for(i=0;i<(m+n);i++)

    {

        if(p[2][i].n=="India"){print(&p[2][i],i);}

        else g++;

    }

    if(g==(m+n)){printf("no persons having nationality indian");}

}

