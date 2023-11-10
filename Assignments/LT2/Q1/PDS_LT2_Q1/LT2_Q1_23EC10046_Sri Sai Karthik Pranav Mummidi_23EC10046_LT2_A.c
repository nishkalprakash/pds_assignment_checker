//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
//set: A
#include<stdio.h>
#include<string.h>
typedef struct stud{
  unsigned int roll;
  char name[20];
  int points;
};
stud badminton[10];
stud chess[10];
stud carrom[10];
stud tt[10];
stud tmp[30];
int ct=0;

int findchamp(int n1,int n2,int n3,int n4){
  
 
  for(int i=0;i<n1;i++){
    int sum=0,max=0,flag=0;
    for(int j=0;j<n2;j++){
      for(int k=0;k<n3;k++){
	for(int l=0;l<n4;l++){
	  if(badminton[i].roll==chess[j].roll&&chess[j].roll==carrom[k].roll){
	    sum=badminton[i].points+chess[j].points+carrom[k].points;
	    if(sum>max){ max=sum;flag=1;}
	    }
	  if(tt[l].roll==chess[j].roll&&chess[j].roll==carrom[k].roll){
	    sum=tt[l].points+chess[j].points+carrom[k].points;
	    if(sum>max){ max=sum; flag=2;}
	    }
	  if(badminton[i].roll==chess[j].roll&&chess[j].roll==tt[l].roll){
	    sum=badminton[i].points+chess[j].points+tt[l].points;
	    if(sum>max){ max=sum;flag=3;}
            }
	  if(badminton[i].roll==tt[l].roll&&tt[l].roll==carrom[k].roll){
	    sum=badminton[i].points+tt[l].points+carrom[k].points;
	    if(sum>max){ max=sum;flag=4;}
            }
          if(flag==1){
            tmp[ct].roll=chess[j].roll;
	    tmp[ct].points=max;
	    strcpy(tmp[ct].name,chess[j].name);
	    printf("roll=%u  name=%s  points=%d games=badminton,chess,carrom\n",chess[j].roll,chess[j].name,max);}
	  if(flag==2){
            tmp[ct].roll=chess[j].roll;
	    tmp[ct].points=max;
	    strcpy(tmp[ct].name,chess[j].name);
	    printf("roll=%u  name=%s  points=%d games=tt,chess,carrom\n",chess[j].roll,chess[j].name,max);}
	  if(flag==1){
            tmp[ct].roll=chess[j].roll;
	    tmp[ct].points=max;
	    strcpy(tmp[ct].name,chess[j].name);
	    printf("roll=%u  name=%s  points=%d games=badminton,chess,tt\n",chess[j].roll,chess[j].name,max);}
	  if(flag==1){
            tmp[ct].roll=tt[l].roll;
	    tmp[ct].points=max;
	    strcpy(tmp[ct].name,tt[l].name);
	    printf("roll=%u  name=%s  points=%d games=badminton,tt,carrom\n",tt[l].roll,tt[l].name,max);}
	}}}
    ct++;}
  int max=0;
  int f;
  for(int i=0;i<ct;i++){
    if(tmp[i].points>=max){
      max=tmp[i].points;
      f=i;}}
  printf("champion\n");
  printf("roll=%u  name=%s  points=%d\n",tmp[f].roll,tmp[f].name,max);
  return 0;}
int displaymeritlist(int n1,int n2,int n3,int n4){
  int mx,tp;
  for(int i=0;i<n1;i++){
    for(int j=i+1;j<n1;j++){
      if(badminton[j].points<badminton[i].points){
	tp=badminton[j].points;
        badminton[j].points=badminton[i].points;
	badminton[i].points=tp;}
      if(badminton[j].points==badminton[i].points){
	mx=strcmp(badminton[j].name,badminton[j].name);
	if(mx>0){
	  tp=badminton[j].points;
          badminton[j].points=badminton[i].points;
	  badminton[i].points=tp;}
	if(mx=0){
	  if(badminton[j].roll>badminton[i].roll)
	    tp=badminton[j].points;
            badminton[j].points=badminton[i].points;
	    badminton[i].points=tp;}}}}
  for(int i=0;i<n1;i++){
    printf("roll=%u   name=%s   points=%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);}
  for(int i=0;i<n2;i++){
    for(int j=i+1;j<n2;j++){
      if(chess[j].points<chess[i].points){
	tp=chess[j].points;
        chess[j].points=chess[i].points;
	chess[i].points=tp;}
      if(chess[j].points==chess[i].points){
	mx=strcmp(chess[j].name,chess[j].name);
	if(mx>0){
	  tp=chess[j].points;
          chess[j].points=chess[i].points;
	  chess[i].points=tp;}
	if(mx=0){
	  if(chess[j].roll>chess[i].roll)
	    tp=chess[j].points;
            chess[j].points=chess[i].points;
	    chess[i].points=tp;}}}}
  for(int i=0;i<n2;i++){
    printf("roll=%u   name=%s   points=%d\n",chess[i].roll,chess[i].name,chess[i].points);}
  for(int i=0;i<n3;i++){
    for(int j=i+1;j<n3;j++){
      if(carrom[j].points<carrom[i].points){
	tp=carrom[j].points;
        carrom[j].points=carrom[i].points;
	carrom[i].points=tp;}
      if(carrom[j].points==carrom[i].points){
	mx=strcmp(carrom[j].name,carrom[j].name);
	if(mx>0){
	  tp=carrom[j].points;
          carrom[j].points=carrom[i].points;
	  carrom[i].points=tp;}
	if(mx=0){
	  if(carrom[j].roll>carrom[i].roll)
	    tp=carrom[j].points;
            carrom[j].points=carrom[i].points;
	    carrom[i].points=tp;}}}}
  for(int i=0;i<n3;i++){
    printf("roll=%u   name=%s   points=%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);}
  for(int i=0;i<n4;i++){
    for(int j=i+1;j<n4;j++){
      if(tt[j].points<tt[i].points){
	tp=tt[j].points;
        tt[j].points=tt[i].points;
	tt[i].points=tp;}
      if(tt[j].points==tt[i].points){
	mx=strcmp(tt[j].name,tt[j].name);
	if(mx>0){
	  tp=tt[j].points;
          tt[j].points=tt[i].points;
	  tt[i].points=tp;}
	if(mx=0){
	  if(tt[j].roll>tt[i].roll)
	    tp=tt[j].points;
            tt[j].points=tt[i].points;
	    tt[i].points=tp;}}}}
  for(int i=0;i<n4;i++){
    printf("roll=%u   name=%s   points=%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);}
  return 0;}
int findconsolationwinner(int n1,int n2,int n3,int n4){
  int mx,tp;
   for(int i=0;i<n1;i++){
    for(int j=i+1;j<n1;j++){
      if(badminton[j].points<badminton[i].points){
	tp=badminton[j].points;
        badminton[j].points=badminton[i].points;
	badminton[i].points=tp;}
      if(badminton[j].points==badminton[i].points){
	mx=strcmp(badminton[j].name,badminton[j].name);
	if(mx>0){
	  tp=badminton[j].points;
          badminton[j].points=badminton[i].points;
	  badminton[i].points=tp;}
	if(mx=0){
	  if(badminton[j].roll>badminton[i].roll)
	    tp=badminton[j].points;
            badminton[j].points=badminton[i].points;
	    badminton[i].points=tp;}}}}
   printf("the winner is");
   printf("roll=%u   name=%s   points=%d\n",badminton[n1-1].roll,badminton[n1-1].name,badminton[n1-1].points);
   return 0;}
  
  
	  
	    
	  





int main(){
  int n1,n2,n3,n4;
  printf("enter no of student participated in badminton:");
  scanf("%d",&n1);
  printf("enter no of student participated in chess:");
  scanf("%d",&n2);
  printf("enter no of student participated in carrom:");
  scanf("%d",&n3);
  printf("enter no of student participated in tt:");
  scanf("%d",&n4);
  printf("for badminton students\n");
  for(int i=0;i<n1;i++){
    printf("enter roll no:");
    scanf("%u",&badminton[i].roll);
    printf("enter name:");
    scanf("%s",badminton[i].name);
    printf("enter points:");
    scanf("%d",&badminton[i].points);
    for(int j=0;j<i;j++){
      if(badminton[j].roll==badminton[i].roll){
	printf("enter again\n");
	printf("enter roll no:");
        scanf("%u",&badminton[i].roll);
        printf("enter name:");
        scanf("%s",badminton[i].name);
        printf("enter points:");
        scanf("%d",&badminton[i].points);}
    }}
  printf("for chess students\n");
  for(int i=0;i<n2;i++){
    printf("enter roll no:");
    scanf("%u",&chess[i].roll);
    printf("enter name:");
    scanf("%s",chess[i].name);
    printf("enter points:");
    scanf("%d",&chess[i].points);
    for(int j=0;j<i;j++){
      if(chess[j].roll==chess[i].roll){
	printf("enter again\n");
	printf("enter roll no:");
        scanf("%u",&chess[i].roll);
        printf("enter name:");
        scanf("%s",chess[i].name);
        printf("enter points:");
        scanf("%d",&chess[i].points);}
    }}
  printf("for carrom students\n");
  for(int i=0;i<n3;i++){
    printf("enter roll no:");
    scanf("%u",&carrom[i].roll);
    printf("enter name:");
    scanf("%s",carrom[i].name);
    printf("enter points:");
    scanf("%d",&carrom[i].points);
    for(int j=0;j<i;j++){
      if(carrom[j].roll==carrom[i].roll){
	printf("enter again");
	printf("enter roll no:");
        scanf("%u",&carrom[i].roll);
        printf("enter name:");
        scanf("%s",carrom[i].name);
        printf("enter points:");
        scanf("%d",&carrom[i].points);}
    }}
  printf("for tt students\n");
  for(int i=0;i<n4;i++){
    printf("enter roll no:");
    scanf("%u",&tt[i].roll);
    printf("enter name:");
    scanf("%s",tt[i].name);
    printf("enter points:");
    scanf("%d",&tt[i].points);
    for(int j=0;j<i;j++){
      if(tt[j].roll==tt[i].roll){
	printf("enter again");
	printf("enter roll no:");
        scanf("%u",&tt[i].roll);
        printf("enter name:");
        scanf("%s",tt[i].name);
        printf("enter points:");
        scanf("%d",&tt[i].points);}
    }}
  printf("badminton students\n");
  for(int i=0;i<n1;i++){
    printf("roll=%u   name=%s   points=%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);}
  printf("chess students\n");
  for(int i=0;i<n2;i++){
    printf("roll=%u   name=%s   points=%d\n",chess[i].roll,chess[i].name,chess[i].points);}
  printf("carrom students\n");
  for(int i=0;i<n3;i++){
    printf("roll=%u   name=%s   points=%d\n",carrom[i].roll,carrom[i].name,carrom[i].points);}
  printf("tt students\n");
  for(int i=0;i<n4;i++){
    printf("roll=%u   name=%s   points=%d\n",tt[i].roll,tt[i].name,tt[i].points);} 
  findchamp(n1,n2,n3,n4);
  displaymeritlist(n1,n2,n3,n4);
  findconsolationwinner(n1,n2,n3,n4);
  return 0;
}
  

