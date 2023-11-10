//SetA

#include <stdio.h>
#include <string.h>

typedef struct stud2{
  unsigned int roll;
  char name[20];
  int points;
} stud;

stud badminton[10], chess[10], carrom[10], tt[10];
stud tmp[30];
void findChamp(stud a[10], stud b[10], stud c[10], stud d[10], int ba, int ch, int ca, int t){
  int i, j, k, m, n, min, max, index;
  for(j=0;j<ba;j++)
    {
      for(k=0;k<ch;k++)
    {
  for(m=0;m<ca;m++)
    {
for(n=0;n<t;n++)
    {
 if(a[j].roll==b[k].roll && a[j].roll==c[m].roll && a[j].roll==d[n].roll){
    min=0;
    if(a[j].points<min) min=a[j].points;
     if(b[k].points<min) min=a[j].points;
      if(c[m].points<min) min=a[j].points;
       if(d[n].points<min) min=a[j].points;
        strcpy(tmp[i].name, a[j].name);
    tmp[i].roll=a[j].roll;
    tmp[i].points=a[j].points+b[k].points+c[m].points+d[n].points-min;
     if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
 }
 //a
  if(a[j].roll==b[k].roll && a[j].roll==c[m].roll){
           strcpy(tmp[i].name, a[j].name);

    tmp[i].roll=a[j].roll;
    tmp[i].points=a[j].points+b[k].points+c[m].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
  }
    
    if(a[j].roll==b[k].roll && a[j].roll==d[n].roll ){
           strcpy(tmp[i].name, a[j].name);

    tmp[i].roll=a[j].roll;
    tmp[i].points=a[j].points+b[k].points+d[n].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
    }
    
    if(a[j].roll==d[n].roll && a[j].roll==c[m].roll){
           strcpy(tmp[i].name, a[j].name);

    tmp[i].roll=a[j].roll;
    tmp[i].points=a[j].points+d[n].points+c[m].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
    }
    //b
    if(a[j].roll==b[k].roll && b[k].roll==c[m].roll){
          strcpy(tmp[i].name, b[k].name);

    tmp[i].roll=b[k].roll;
    tmp[i].points=a[j].points+b[k].points+c[m].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
    }

     if(a[j].roll==b[k].roll && b[k].roll==d[n].roll){
             strcpy(tmp[i].name, b[k].name);
    tmp[i].roll=b[k].roll;
    tmp[i].points=a[j].points+d[n].points+b[k].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
     }
     if(b[k].roll==d[n].roll && b[k].roll==c[m].roll){
             strcpy(tmp[i].name, b[k].name);
    tmp[i].roll=b[k].roll;
    tmp[i].points=b[k].points+d[n].points+c[m].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
     }
    //c
     if(c[m].roll==a[j].roll && b[k].roll==c[m].roll){
             strcpy(tmp[i].name, c[m].name);
    tmp[i].roll=c[m].roll;
    tmp[i].points=b[k].points+a[j].points+c[m].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
     }
   if(c[m].roll==d[n].roll && b[k].roll==c[m].roll){
    strcpy(tmp[i].name, c[m].name);
    tmp[i].roll=c[m].roll;
    tmp[i].points=b[k].points+d[n].points+c[m].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
     }
     if(c[m].roll==d[n].roll && a[j].roll==c[m].roll){
    strcpy(tmp[i].name, c[m].name);
    tmp[i].roll=c[m].roll;
    tmp[i].points=a[j].points+d[n].points+c[m].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
     }

       //d
     if(d[n].roll==a[j].roll && d[n].roll==b[k].roll){
    strcpy(tmp[i].name, d[n].name);
    tmp[i].roll=d[n].roll;
    tmp[i].points=b[k].points+a[j].points+d[n].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
     }
   if(c[m].roll==d[n].roll && d[n].roll==a[j].roll){
    strcpy(tmp[i].name, d[n].name);
    tmp[i].roll=d[n].roll;
    tmp[i].points=c[m].points+d[n].points+a[j].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
     }
     if(c[m].roll==d[n].roll && d[n].roll==b[k].roll){
    strcpy(tmp[i].name, d[n].name);
    tmp[i].roll=d[n].roll;
    tmp[i].points=b[k].points+d[n].points+c[m].points;
    if(tmp[i].points>max){
      max=tmp[i].points;
      index=i;
    }
     }
     printf("Name:%s, Roll Number:%d, Max points:%d\n", tmp[i].name, tmp[i].roll, tmp[i].points);
     }
    }
    }
    }
      printf("%d", max);
     return;
     }
   



  
int main(){
  int b, i, j, k, r, p, flag, ch, ca, t;
  char s[20];
  printf("How many students have participated in badminton:\n");
  scanf("%d", &b);

   printf("How many students have participated in chess:\n");
  scanf("%d", &ch);

   printf("How many students have participated in carrom:\n");
  scanf("%d", &ca);

   printf("How many students have participated in tt:\n");
  scanf("%d", &t);

  k=0;i=0;

  printf("Enter details of students who play badminton:\n");
  while(i<b){
    flag=0;
  
    printf("name:\n");
    scanf("%s", s);
    printf("roll no:\n");
    scanf("%d", &r);
    printf("points:\n");
    scanf("%d",&p);
   
    for(j=0;j<i+1;j++){
      if(badminton[j].roll==r){flag=1;}
    }
    if(flag==0){
      strcpy(badminton[i].name, s);
      badminton[i].roll=r;
      badminton[i].points=p;
      i++;
  }
      k=0;i=0;

  printf("Enter details of students who play chess:\n");
  while(i<ch){
    flag=0;
  
    printf("name:\n");
    scanf("%s", s);
    printf("roll no:\n");
    scanf("%d", &r);
    printf("points:\n");
    scanf("%d",&p);
   
    for(j=0;j<i+1;j++){
      if(chess[j].roll==r){flag=1;}
    }
    if(flag==0){
      strcpy(chess[i].name, s);
      chess[i].roll=r;
      chess[i].points=p;
      i++;
  }
  }
    k=0;i=0;

  printf("Enter details of students who play carrom:\n");
  while(i<ca){
    flag=0;
  
    printf("name:\n");
    scanf("%s", s);
    printf("roll no:\n");
    scanf("%d", &r);
    printf("points:\n");
    scanf("%d",&p);
   
    for(j=0;j<i+1;j++){
      if(carrom[j].roll==r){flag=1;}
    }
    if(flag==0){
      strcpy(carrom[i].name, s);
      carrom[i].roll=r;
      carrom[i].points=p;
      i++;
  }
  }
    k=0;i=0;

  printf("Enter details of students who play tt:\n");
  while(i<t){
    flag=0;
  
    printf("name:\n");
    scanf("%s", s);
    printf("roll no:\n");
    scanf("%d", &r);
    printf("points:\n");
    scanf("%d",&p);
   
    for(j=0;j<i+1;j++){
      if(tt[j].roll==r){flag=1;}
    }
    if(flag==0){
      strcpy(tt[i].name, s);
      tt[i].roll=r;
      tt[i].points=p;
      i++;
  }
  }
  }

  for(i=0;i<b;i++){
    printf("Name:%s, Roll Number:%d,  points:%d\n",badminton[i].name, badminton[i].roll, badminton[i].points);
  }
   for(i=0;i<ch;i++){
    printf("Name:%s, Roll Number:%d,  points:%d\n",chess[i].name, chess[i].roll, chess[i].points);
  }
    for(i=0;i<ca;i++){
    printf("Name:%s, Roll Number:%d,  points:%d\n",carrom[i].name, carrom[i].roll, carrom[i].points);
  }
     for(i=0;i<t;i++){
    printf("Name:%s, Roll Number:%d,  points:%d\n",tt[i].name, tt[i].roll, tt[i].points);
  }

     findChamp(badminton,chess,carrom,tt,b,ch,ca,t);
  return 0;
}
