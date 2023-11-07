#include <stdio.h>
#include <string.h>
struct student { 
char fname[20];
char lname[20];
char address[40];
long int mob;
char grade[5];
float gpa1[5];
float gpa;
} studArray[50];
int nStuds;



void enrolStuds(){
printf( " Enter the number of students \n");
scanf("%d",&nStuds);
for( int i = 0 ; i < nStuds; i++){
printf(" Enter the first name of studArray \n%d", i);
scanf("%s",studArray[i].fname );
printf(" Enter the last name of studArray \n%d", i);
scanf("%s",studArray[i].lname );


printf(" Enter the address of studArray \n%d", i);
scanf("%s",studArray[i].address );

printf(" Enter the phone number of studArray\n %d", i);
scanf("%ld",studArray[i].mob );


}
printa();
}

void pritn(){
    for( int i = 0 ; i < nStuds; i++){
        printf(" Roll %d Name -- %s %s , address -- %s , Phone--%d\n",i+1 , studArray[i].fname,studArray[i].lname,studArray[i].address , studArray[i].mob);
    }

}





void enterGrades(){
int gpa = 0;
for( int i = 0 ; i < nStuds; i++){
printf(" SN-%d Name --%s %s ", i +1 , studArray[i].fname , studArray[i].lname );
for (int j = 0 ; j< 5 ; j ++){
    start:
pritnf("Grade for subject %d",j+1);
scanf("% c", studArray[i].grade[j] );
if (studArray[i].grade[j]== "A"||studArray[i].grade[j]== 'B'||studArray[i].grade[j]== "C"||studArray[i].grade[j]== "D"||studArray[i].grade[j]== "E"||studArray[i].grade[j]== "F"||studArray[i].grade[j]== "P"){

}
else{
    printf(" Incorrect Grade , Enter Again\n");
    goto start;
}
// Reject unwanted grades
if ( studArray[i].grade[j] == 'E'){
    studArray[i].gpa1[j] = 10.00;
}

if ( studArray[i].grade[j] == 'A'){
    studArray[i].gpa1[j] = 9.00;
}
if ( studArray[i].grade[j] == 'B'){
    studArray[i].gpa1[j] = 8.00;
}
if ( studArray[i].grade[j] == 'C'){
    studArray[i].gpa1[j] = 7.00;
}
if ( studArray[i].grade[j] == 'D'){
    studArray[i].gpa1[j] = 6.00;
}
if ( studArray[i].grade[j] == 'P'){
    studArray[i].gpa1[j] = 5.00;
}
if ( studArray[i].grade[j] == 'F'){
    studArray[i].gpa1[j] = 0;
}

// Assign the grades
}
gpa = 0 ;
for( int j =0 ; j < 5 ; j++){
    gpa = studArray[i].gpa1[j] + gpa ;
}
studArray[i].gpa = gpa / 5;

}
 for( int i = 0 ; i < nStuds; i++){
        printf(" Roll %d Name -- %s %s , address -- %s , Phone--%d , grade -- %f\n",i+1 , studArray[i].fname,studArray[i].lname,studArray[i].address , studArray[i].mob,studArray[i].gpa);
    }
}





/*void displayStuds(){
for( int i = 0 ; i < nStuds; i++){
    for ( int j = i ; j < nStuds ; j++){
        if()
    }

}}*/

void searchStud(){
    int x = 0 ;
    char name1[20];
    printf( " Enter the search keyword");
    scanf("%s", name1);
    for( int i = 0 ; i < nStuds ; i++){
    int p = strcasecmp(name1 , studArray[i].fname );
    int q = strcasecmp(name1 , studArray[i].lname );
    
    if ( (!p)||(!q)){
         
        printf(" Roll %d Name -- %s %s , address -- %s , Phone--%d , grade -- %f\n",i+1 , studArray[i].fname,studArray[i].lname,studArray[i].address , studArray[i].mob,studArray[i].gpa);
    
         }
    }

}

void modifyStudDetails(){
    int a = 0;
   printf(" Enter the roll number ");
   scanf( " %d", &a);
   a = a-1;
   printa();
    printf(" Enter new address ");
   scanf( "%s",studArray[a].address);
   printf("Enter the new mobile number");
   scanf("%ld",studArray[a].mob );
   printa();
   


}

void editStudGrades(){
    float gpa;
     int a = 0;
   printf(" Enter the roll number ");
   scanf( " %d", &a);
   a = a-1;
   printf(" Roll %d Name -- %s %s , address -- %s , Phone--%d\n",a , studArray[a].fname,studArray[a].lname,studArray[a].address , studArray[a].mob);
   for( int i = 0 ; i < 5; i++){
        printf("G-S%d -- %c\n", i , studArray[a].grade[i]);
    }





for (int j = 0 ; j< 5 ; j ++){
    start:
pritnf("Grade for subject %d",j+1);
scanf("% c", studArray[a].grade[j] );
if (studArray[a].grade[j]== "A"||studArray[a].grade[j]== 'B'||studArray[a].grade[j]== "C"||studArray[a].grade[j]== "D"||studArray[a].grade[j]== "E"||studArray[a].grade[j]== "F"||studArray[a].grade[j]== "P"){

}
else{
    printf(" Incorrect Grade , Enter Again\n");
    goto start;
}
// Reject unwanted grades
if ( studArray[a].grade[j] == 'E'){
    studArray[a].gpa1[j] = 10.00;
}

if ( studArray[a].grade[j] == 'A'){
    studArray[a].gpa1[j] = 9.00;
}
if ( studArray[a].grade[j] == 'B'){
    studArray[a].gpa1[j] = 8.00;
}
if ( studArray[a].grade[j] == 'C'){
    studArray[a].gpa1[j] = 7.00;
}
if ( studArray[a].grade[j] == 'D'){
    studArray[a].gpa1[j] = 6.00;
}
if ( studArray[a].grade[j] == 'P'){
    studArray[a].gpa1[j] = 5.00;
}
if ( studArray[a].grade[j] == 'F'){
    studArray[a].gpa1[j] = 0;
}

   
}


gpa = 0 ;
for( int j =0 ; j < 5 ; j++){
    gpa = studArray[a].gpa1[j] + gpa ;
}
studArray[a].gpa = gpa / 5;
 printf(" Roll %d Name -- %s %s , address -- %s , Phone--%d\n",a , studArray[a].fname,studArray[a].lname,studArray[a].address , studArray[a].mob);
   for( int i = 0 ; i < 5; i++){
        printf("G-S%d -- %c\n", i , studArray[a].grade[i]);
    }
    prinf("GPA is %f", studArray[a].gpa);
}




int main(){
nStuds = 0;
while(1){
    int flag = 0;
    printf("Enter a number 1-8 1.Enroll2. Enter Grade3.DIsplay Students4.Search Student 5.Edit Grades6.Modify Details7.Merit list Display8.Exit");
    switch(n){
        case 1 : enrolStuds();
        case 2 : enterGrades();
        case 3 : 
        case 4 : searchStuds();
        case 5 : editStudGrades();
        case 8 :  flag = 1 ;
    }
    if (flag){
        break;
    }

}


}