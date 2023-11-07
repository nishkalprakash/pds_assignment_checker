//name: mummidi sri sai karthik pranav
//roll no: 23EC10046
#include<stdio.h>
#include<string.h>
struct student{
  char fname[20];
  char lname[20];
  char address[40];
  long unsigned int phno;
  char grade[5];
  float gpa;
  int rollno;}studarray[50];
int nstuds;
int enrolstuds(){
  printf("enter no of students:");
  scanf("%d",&nstuds);
  for(int i=0;i<nstuds;i++){
    studarray[i].rollno=(i+1);
    printf("enter first name:");
    scanf("%s",studarray[i].fname);
    printf("enter last name:");
    scanf("%s",studarray[i].lname);
    printf("enter address:");
    scanf("%s",studarray[i].address);
    printf("enter mobileno:");
    scanf("%ld",&studarray[i].phno);}
  for(int i=0;i<nstuds;i++){
    printf("rollno=%d  firstname=%s  lastname=%s address=%s  phno=%ld\n",studarray[i].rollno,studarray[i].fname,studarray[i].lname,studarray[i].address,studarray[i].phno);}
  return 0;}
int entergrades(){
  for(int i=0;i<nstuds;i++){
    printf("rollno=%d  firstname=%s  lastname=%s\n",studarray[i].rollno,studarray[i].fname,studarray[i].lname);}
  char c;
  for(int i=0;i<nstuds;i++){
    float sum=0;
    printf("enter grades in 5 subjects:");
    for(int j=0;j<5;j++){
      scanf("%c",&c);
      if(c!='a'||c!='b'||c!='c'||c!='d'||c!='e'||c!='f'||c!='p'){
	printf("enter!");
	scanf("%c",&c);}
      if(c=='e') sum+=10;
      if(c=='a') sum+=9;
      if(c=='b') sum+=8;
      if(c=='c') sum+=7;
      if(c=='d') sum+=6;
      if(c=='p') sum+=5;
      if(c=='f') sum+=0;
      studarray[i].grade[j]=c;}
    studarray[i].gpa=(sum/5.0);}
  for(int i=0;i<nstuds;i++){
    printf("rollno=%d  firstname=%s  lastname=%s address=%s  phno=%ld  ",studarray[i].rollno,studarray[i].fname,studarray[i].lname,studarray[i].address,studarray[i].phno);
    printf("grades in 5 subjects:");
    for(int j=0;j<5;j++){
      printf("%c ",studarray[i].grade[j]);}
    printf("  gpa=%f\n",studarray[i].gpa);}
  return 0;}
int searchstud(){
  char str[20];
  printf("enter a string to search:");
  scanf("%s",str);
  int b=strlen(str);
  for(int i=0;i<nstuds;i++){
    int count=0,count1=0;
    for(int j=0;j<b;j++){
      if(studarray[i].fname[j]==str[j]) count++;
      if(studarray[i].lname[j]==str[j]) count1++;}
    if(count==b||count1==b) printf("found at rollno=%d  firstname=%s  lastname=%s\n",studarray[i].rollno,studarray[i].fname,studarray[i].lname);}
  return 0;}
int modifystuddetails(){
  printf("enter a rollno to modify:");
  int roll;
  int flag=0;
  scanf("%d",&roll);
  for(int i=0;i<nstuds;i++){
    if(roll==studarray[i].rollno){
      flag=1;
      printf("enter mobileno:");
      scanf("%ld",&studarray[i].phno);
      printf("enter address:");
      scanf("%s",studarray[i].address);
      printf("rollno=%d firstname=%s lastname=%s address=%s phno=%ld gpa=%f",studarray[i].rollno,studarray[i].fname,studarray[i].lname,studarray[i].address,studarray[i].phno,studarray[i].gpa);
      break;}}
  if(flag==1) printf("not found");
  return 0;}
int editstudgrades(){
  int roll;
  printf("enter rollno");
  scanf("%d",&roll);
  if(roll>nstuds){
    printf("not found! enter again");
    scanf("%d",&roll);}
  printf("rollno=%d  firstname=%s  lastname=%s address=%s  phno=%ld  ",studarray[roll].rollno,studarray[roll].fname,studarray[roll].lname,studarray[roll].address,studarray[roll].phno);
  printf("grades in 5 subjects:");
  for(int j=0;j<5;j++){
    printf("%c ",studarray[roll].grade[j]);}
  printf("  gpa=%f\n",studarray[roll].gpa);
  float sum=0;
  char c;
   for(int j=0;j<5;j++){
      scanf("%c",&c);
      if(c!='a'||c!='b'||c!='c'||c!='d'||c!='e'||c!='f'||c!='p'){
	printf("enter!");
	scanf("%c",&c);}
      if(c=='e') sum+=10;
      if(c=='a') sum+=9;
      if(c=='b') sum+=8;
      if(c=='c') sum+=7;
      if(c=='d') sum+=6;
      if(c=='p') sum+=5;
      if(c=='f') sum+=0;
      studarray[roll].grade[j]=c;}
   studarray[roll].gpa=(sum/5.0);
   printf("the modified details are:");
   printf("rollno=%d  firstname=%s  lastname=%s address=%s  phno=%ld  ",studarray[roll].rollno,studarray[roll].fname,studarray[roll].lname,studarray[roll].address,studarray[roll].phno);
   printf("grades in 5 subjects:");
   for(int j=0;j<5;j++){
     printf("%c ",studarray[roll].grade[j]);}
   printf("  gpa=%f\n",studarray[roll].gpa);
   return 0;
}
int dispmeritlist(){
  float tmp;
  for(int i=0;i<nstuds;i++){
    for(int j=i+1;j<nstuds;j++){
      if(studarray[j].gpa>studarray[i].gpa){
	tmp=studarray[i].gpa;
	studarray[i].gpa=studarray[j].gpa;
	studarray[j].gpa=tmp;}
      if(studarray[j].gpa==studarray[i].gpa){
	for(int k=0;i<20;k++){
	  if(studarray[j].lname[k]==studarray[i].lname[k]) continue;
	  if(studarray[j].lname[k]<studarray[i].lname[k]){
	    tmp=studarray[i].gpa;
	    studarray[i].gpa=studarray[j].gpa;
	    studarray[j].gpa=tmp;
	    break;}}}}}
   for(int i=0;i<nstuds;i++){
    printf("rollno=%d  firstname=%s  lastname=%s address=%s  phno=%ld  ",studarray[i].rollno,studarray[i].fname,studarray[i].lname,studarray[i].address,studarray[i].phno);
    printf("grades in 5 subjects:");
    for(int j=0;j<5;j++){
      printf("%c ",studarray[i].grade[j]);}
    printf("  gpa=%f\n",studarray[i].gpa);}
   return 0;}
int displaystuds(){
   for(int i=0;i<nstuds;i++){
    printf("rollno=%d  firstname=%s  lastname=%s address=%s  phno=%ld  ",studarray[i].rollno,studarray[i].fname,studarray[i].lname,studarray[i].address,studarray[i].phno);
    printf("grades in 5 subjects:");
    for(int j=0;j<5;j++){
      printf("%c ",studarray[i].grade[j]);}
    printf("  gpa=%f\n",studarray[i].gpa);}
   char tmp;
   for(int i=0;i<nstuds;i++){
     for(int j=i+1;j<nstuds;j++){
       for(int k=0;k<20;k++){
	 if(studarray[i].fname[k]==studarray[j].fname[k]) continue;
	 if(studarray[j].fname[k]<studarray[i].fname[k]){
	   // tmp=studarray[i].fname;
	   //  studarray[i].fname=studarray[j].fname;
	   //studarray[j].fname=tmp;
	    break;}}}}
   printf("modified details");
   for(int i=0;i<nstuds;i++){
    printf("rollno=%d  firstname=%s  lastname=%s address=%s  phno=%ld  ",studarray[i].rollno,studarray[i].fname,studarray[i].lname,studarray[i].address,studarray[i].phno);
    printf("grades in 5 subjects:");
    for(int j=0;j<5;j++){
      printf("%c ",studarray[i].grade[j]);}
    printf("  gpa=%f\n",studarray[i].gpa);}
   return 0;}
      

int main(){
  nstuds=0;
  int c;
  while(1){
    printf("1.enrol student\n");
    printf("2.enter grade\n");
    printf("3.display students\n");
    printf("4.search student\n");
    printf("5.edit student grades\n");
    printf("6.modify student details\n");
    printf("7.display merit list\n");
    printf("8.exit the program\n");
    printf("enter a number:");
    scanf("%d",&c);
    if(c==8) break;
    if(c==1) enrolstuds();
    if(c==2) entergrades();
    if(c==4) searchstud();
    if(c==6) modifystuddetails();
    if(c==5) editstudgrades();
    if(c==7) dispmeritlist();
    if(c==3) displaystuds();
  }
  return 0;}
    
