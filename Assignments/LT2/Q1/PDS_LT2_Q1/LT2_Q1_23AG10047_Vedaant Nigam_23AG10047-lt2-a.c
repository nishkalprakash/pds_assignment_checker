#include <stdio.h>
#include <string.h>
struct stud{
  unsigned int roll;
  char name[20];
  int points;
}tmp[30],badminton[10],chess[10],carrom[10],tt[10];
void findchamp(struct stud [],struct stud [],struct stud [],struct stud [],struct stud[],int,int,int,int);
void findrunnerup(struct stud [],struct stud [],struct stud [],struct stud [],struct stud[],int,int,int,int);
void findconsolationwinner(struct stud [],struct stud [],struct stud [],struct stud [],struct stud[],int,int,int,int);
int main(){
  int a,b,c,d;
  printf("enter the number of students who have participated in badminton ");
  scanf("%d",&a);
  for(int i=0;i<a;i++){
    printf("enter roll number of student %d ",i+1);
    scanf("%u",&badminton[i].roll);
    printf("enter name of student %d ",i+1);
    scanf("%s",badminton[i].name);
    printf("enter points scored by student %d ",i+1);
    scanf("%d",&badminton[i].points);
  }
   printf("enter the number of students who have participated in chess ");
  scanf("%d",&b);
  for(int i=0;i<b;i++){
    printf("enter roll number of student %d ",i+1);
    scanf("%u",&chess[i].roll);
    printf("enter name of student %d ",i+1);
    scanf("%s",chess[i].name);
    printf("enter points scored by student %d ",i+1);
    scanf("%d",&chess[i].points);
  }
   printf("enter the number of students who have participated in carrom ");
  scanf("%d",&c);
  for(int i=0;i<c;i++){
    printf("enter roll number of student %d ",i+1);
    scanf("%u",&carrom[i].roll);
    printf("enter name of student %d ",i+1);
    scanf("%s",carrom[i].name);
    printf("enter points scored by student %d ",i+1);
    scanf("%d",&carrom[i].points);
  }
   printf("enter the number of students who have participated in tt ");
  scanf("%d",&d);
  for(int i=0;i<d;i++){
    printf("enter roll number of student %d ",i+1);
    scanf("%u",&tt[i].roll);
    printf("enter name of student %d ",i+1);
    scanf("%s",tt[i].name);
    printf("enter points scored by student %d ",i+1);
    scanf("%d",&tt[i].points);
  }
  printf("badminton :\n");
  for(int i=0;i<a;i++){
    printf("student %d\n",i+1);
    printf("roll: %u\n",badminton[i].roll);
    printf("name: %s\n",badminton[i].name);
    printf("points: %d\n",badminton[i].points);
  }
   printf("chess :\n");
  for(int i=0;i<b;i++){
    printf("student %d\n",i+1);
    printf("roll: %u\n",chess[i].roll);
    printf("name: %s\n",chess[i].name);
    printf("points: %d\n",chess[i].points);
  }
   printf("carrom :\n");
  for(int i=0;i<c;i++){
    printf("student %d\n",i+1);
    printf("roll: %u\n",carrom[i].roll);
    printf("name: %s\n",carrom[i].name);
    printf("points: %d\n",carrom[i].points);
  }
   printf("tt :\n");
  for(int i=0;i<d;i++){
    printf("student %d\n",i+1);
    printf("roll: %u\n",tt[i].roll);
    printf("name: %s\n",tt[i].name);
    printf("points: %d\n",tt[i].points);
  }
  findchamp(badminton,chess,carrom,tt,tmp,a,b,c,d);
  findrunnerup(badminton,chess,carrom,tt,tmp,a,b,c,d);
  findconsolationwinner(badminton,chess,carrom,tt,tmp,a,b,c,d);
  return 0;
}
void findchamp(struct stud badminton [],struct stud chess [],struct stud carrom [],struct stud tt [],struct stud tmp[],int a,int b,int c,int d){
  int index1,index2,index3,k=0;
  if(a>=b && a>=c && a>=d){
  for(int i=0;i<a;i++){
    int count =0;
    for(int j=0;j<b;j++){
      if(badminton[i].roll==chess[j].roll){count++; index1=j;break;}
    }
     for(int j=0;j<c;j++){
       if(badminton[i].roll==carrom[j].roll){count++; index2=j;break;}
    }
      for(int j=0;j<d;j++){
	if(badminton[i].roll==tt[j].roll){count++; index3=j;break;}
    }
      if(count>=3){
	tmp[i].roll=badminton[i].roll;
	strcpy(tmp[i].name,badminton[i].name);
	tmp[i].points= badminton[i].points +chess[index1].points +carrom[index2].points +tt[index3].points;
	k++;
      }}}
 

  else if(b>=a && b>=c && b>=d){
  for(int i=0;i<b;i++){
    int count =0;
    for(int j=0;j<b;j++){
      if(chess[i].roll==badminton[j].roll){count++;index1=j;break;}
    }
     for(int j=0;j<c;j++){
       if(chess[i].roll==carrom[j].roll){count++; index2=j;break;}
    }
      for(int j=0;j<d;j++){
	if(chess[i].roll==tt[j].roll){count++; index3=j;break;}
    }
      if(count>=3){
	tmp[i].roll=chess[i].roll;
	strcpy(tmp[i].name,chess[i].name);
	tmp[i].points= chess[i].points +badminton[index1].points +carrom[index2].points +tt[index3].points;
	k++;
      }}}

  else if(c>=a && c>=b && c>=d){
  for(int i=0;i<c;i++){
    int count =0;
    for(int j=0;j<b;j++){
      if(carrom[i].roll==chess[j].roll){count++;int index1=j;break;}
    }
     for(int j=0;j<c;j++){
       if(carrom[i].roll==badminton[j].roll){count++;int index2=j;break;}
    }
      for(int j=0;j<d;j++){
	if(carrom[i].roll==tt[j].roll){count++;int index3=j;break;}
    }
      if(count>=3){
	tmp[i].roll=carrom[i].roll;
	strcpy(tmp[i].name,carrom[i].name);
	tmp[i].points= carrom[i].points +chess[index1].points +badminton[index2].points +tt[index3].points;
	k++;
      }}}

    else if(d>=b && d>=c && d>=a){
  for(int i=0;i<a;i++){
    int count =0;
    for(int j=0;j<b;j++){
      if(tt[i].roll==chess[j].roll){count++; index1=j;break;}
    }
     for(int j=0;j<c;j++){
       if(tt[i].roll==carrom[j].roll){count++; index2=j;break;}
    }
      for(int j=0;j<d;j++){
	if(tt[i].roll==badminton[j].roll){count++; index3=j;break;}
    }
      if(count>=3){
	tmp[i].roll=tt[i].roll;
	strcpy(tmp[i].name,tt[i].name);
	tmp[i].points= tt[i].points +chess[index1].points +carrom[index2].points +badminton[index3].points;
	k++;
      }}}


    int max=0;
    for(int i=0;i<k;i++){
      if (tmp[i].points>max) max=tmp[i].points;
    }
    printf("champion(s) is/are \n");
    for (int i=0;i<k;i++){
      if(tmp[i].points==max){
	printf("roll %u\n", tmp[i].roll);
	printf("name %s\n",tmp[i].name);
	printf("points %d\n",tmp[i].points);
      }
    }
  
}
void findrunnerup(struct stud badminton [],struct stud chess [],struct stud carrom [],struct stud tt [],struct stud tmp[],int a,int b,int c,int d){
  int index1,index2,index3,k=0,max=0,max1=0,max2=0,max3=0,max4,max5;
  if(a>=b && a>=c && a>=d){
  for(int i=0;i<a;i++){
    int count =0;max=badminton[i].points;
    for(int j=0;j<b;j++){
      if(badminton[i].roll==chess[j].roll){count++; index1=j;max1=chess[j].points; break;}
    }
     for(int j=0;j<c;j++){
       if(badminton[i].roll==carrom[j].roll){count++; index2=j;max2=carrom[j].points;break;}
    }
      for(int j=0;j<d;j++){
	if(badminton[i].roll==tt[j].roll){count++; index3=j;max3=tt[i].points;break;}
    }
      if(count>=2){
	if(max>max1 && max>max2 && max>max3){max4=max;
	  if(max1>max2 && max1>max3)max5=max1;
	   if(max2>max1 && max2>max3)max5=max2;
	    if(max3>max2 && max3>max1)max5=max3;
	}
	if(max1>max && max1>max2 && max1>max3){max4=max1;
 if(max>max2 && max>max3)max5=max;
	   if(max2>max && max2>max3)max5=max2;
	    if(max3>max2 && max3>max)max5=max3;
	}
	if(max2>max && max2>max1 && max2>max3){max4=max2;
 if(max1>max && max1>max3)max5=max1;
	   if(max>max1 && max>max3)max5=max;
	    if(max3>max && max3>max1)max5=max3;
	}
	if(max3>max && max3>max2 && max3>max1){max4=max3;
 if(max1>max2 && max1>max)max5=max1;
	   if(max2>max1 && max2>max)max5=max2;
	    if(max3>max2 && max>max1)max5=max3;
	}
	tmp[i].roll=badminton[i].roll;
	strcpy(tmp[i].name,badminton[i].name);
	tmp[i].points=max4 +max5;
	k++;
      }}}

  else if(b>=a && b>=c && b>=d){
  for(int i=0;i<b;i++){
    int count =0;
    for(int j=0;j<b;j++){
      if(chess[i].roll==badminton[j].roll){count++;index1=j;break;}
    }
     for(int j=0;j<c;j++){
       if(chess[i].roll==carrom[j].roll){count++; index2=j;break;}
    }
      for(int j=0;j<d;j++){
	if(chess[i].roll==tt[j].roll){count++; index3=j;break;}
    }
      if(count>=2){
	if(max>max1 && max>max2 && max>max3){max4=max;
	  if(max1>max2 && max1>max3)max5=max1;
	   if(max2>max1 && max2>max3)max5=max2;
	    if(max3>max2 && max3>max1)max5=max3;
	}
	if(max1>max && max1>max2 && max1>max3){max4=max1;
 if(max>max2 && max>max3)max5=max;
	   if(max2>max && max2>max3)max5=max2;
	    if(max3>max2 && max3>max)max5=max3;
	}
	if(max2>max && max2>max1 && max2>max3){max4=max2;
 if(max1>max && max1>max3)max5=max1;
	   if(max>max1 && max>max3)max5=max;
	    if(max3>max && max3>max1)max5=max3;
	}
	if(max3>max && max3>max2 && max3>max1){max4=max3;
 if(max1>max2 && max1>max)max5=max1;
	   if(max2>max1 && max2>max)max5=max2;
	    if(max3>max2 && max>max1)max5=max3;
	}
	
	tmp[i].roll=chess[i].roll;
	strcpy(tmp[i].name,chess[i].name);
	tmp[i].points=max4 +max5;
	k++;
      }}}

  else if(c>=a && c>=b && c>=d){
  for(int i=0;i<c;i++){
    int count =0;
    for(int j=0;j<b;j++){
      if(carrom[i].roll==chess[j].roll){count++;int index1=j;break;}
    }
     for(int j=0;j<c;j++){
       if(carrom[i].roll==badminton[j].roll){count++;int index2=j;break;}
    }
      for(int j=0;j<d;j++){
	if(carrom[i].roll==tt[j].roll){count++;int index3=j;break;}
    }
      if(count>=2){


	if(max>max1 && max>max2 && max>max3){max4=max;
	  if(max1>max2 && max1>max3)max5=max1;
	   if(max2>max1 && max2>max3)max5=max2;
	    if(max3>max2 && max3>max1)max5=max3;
	}
	if(max1>max && max1>max2 && max1>max3){max4=max1;
 if(max>max2 && max>max3)max5=max;
	   if(max2>max && max2>max3)max5=max2;
	    if(max3>max2 && max3>max)max5=max3;
	}
	if(max2>max && max2>max1 && max2>max3){max4=max2;
 if(max1>max && max1>max3)max5=max1;
	   if(max>max1 && max>max3)max5=max;
	    if(max3>max && max3>max1)max5=max3;
	}
	if(max3>max && max3>max2 && max3>max1){max4=max3;
 if(max1>max2 && max1>max)max5=max1;
	   if(max2>max1 && max2>max)max5=max2;
	    if(max3>max2 && max>max1)max5=max3;
	}
	
	tmp[i].roll=carrom[i].roll;
	strcpy(tmp[i].name,carrom[i].name);
	tmp[i].points=max4+ max5 ;
	k++;
      }}}

    else if(d>=b && d>=c && d>=a){
  for(int i=0;i<a;i++){
    int count =0;
    for(int j=0;j<b;j++){
      if(tt[i].roll==chess[j].roll){count++; index1=j;break;}
    }
     for(int j=0;j<c;j++){
       if(tt[i].roll==carrom[j].roll){count++; index2=j;break;}
    }
      for(int j=0;j<d;j++){
	if(tt[i].roll==badminton[j].roll){count++; index3=j;break;}
    }
      if(count>=2){
	if(max>max1 && max>max2 && max>max3){max4=max;
	  if(max1>max2 && max1>max3)max5=max1;
	   if(max2>max1 && max2>max3)max5=max2;
	    if(max3>max2 && max3>max1)max5=max3;
	}
	if(max1>max && max1>max2 && max1>max3){max4=max1;
 if(max>max2 && max>max3)max5=max;
	   if(max2>max && max2>max3)max5=max2;
	    if(max3>max2 && max3>max)max5=max3;
	}
	if(max2>max && max2>max1 && max2>max3){max4=max2;
 if(max1>max && max1>max3)max5=max1;
	   if(max>max1 && max>max3)max5=max;
	    if(max3>max && max3>max1)max5=max3;
	}
	if(max3>max && max3>max2 && max3>max1){max4=max3;
 if(max1>max2 && max1>max)max5=max1;
	   if(max2>max1 && max2>max)max5=max2;
	    if(max3>max2 && max>max1)max5=max3;
	}

	
	tmp[i].roll=tt[i].roll;
	strcpy(tmp[i].name,tt[i].name);
	tmp[i].points=max4 +max5;
	k++;
      }}}
  int max6=0;
    for(int i=0;i<k;i++){
      if (tmp[i].points>max6) max=tmp[i].points;
    }
    printf("runnerup(s) is/are \n");
    for (int i=0;i<k;i++){
      if(tmp[i].points==max){
	printf("roll %u\n", tmp[i].roll);
	printf("name %s\n",tmp[i].name);
	printf("points %d\n",tmp[i].points);
      }
    }

  
}
void findconsolationwinner(struct stud badminton [],struct stud chess [],struct stud carrom [],struct stud tt [],struct stud tmp[],int a,int b,int c,int d){
  int max1=0;
  for(int i=0;i<a;i++){
    if(badminton[i].points>max1) max1=badminton[i].points;
  }
  printf("consolation winner in badminton is\n");
  for(int i=0;i<a;i++){
    if(badminton[i].points==max1){
      printf("roll %u\n",badminton[i].roll);
      printf("name %s\n",badminton[i].name);
      printf("points %d\n",badminton[i].points);
    }
  }
    max1=0;
  for(int i=0;i<b;i++){
    if(chess[i].points>max1) max1=chess[i].points;
  }
  printf("consolation winner in chess is\n");
  for(int i=0;i<b;i++){
    if(chess[i].points==max1){
      printf("roll %u\n",chess[i].roll);
      printf("name %s\n",chess[i].name);
      printf("points %d\n",chess[i].points);
    }
  }
    max1=0;
  for(int i=0;i<c;i++){
    if(carrom[i].points>max1) max1=carrom[i].points;
  }
  printf("consolation winner in carrom is\n");
  for(int i=0;i<c;i++){
    if(carrom[i].points==max1){
      printf("roll %u\n",carrom[i].roll);
      printf("name %s\n",carrom[i].name);
      printf("points %d\n",carrom[i].points);
    }
  }
    max1=0;
  for(int i=0;i<d;i++){
    if(tt[i].points>max1) max1=tt[i].points;
  }
  printf("consolation winner in tt is\n");
  for(int i=0;i<d;i++){
    if(tt[i].points==max1){
      printf("roll %u\n",tt[i].roll);
      printf("name %s\n",tt[i].name);
      printf("points %d\n",tt[i].points);
    }
  }
}
