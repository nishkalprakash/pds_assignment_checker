#include<stdio.h>
#include<string.h>


struct student{
    char first_name[20];
    char last_name[20];
    char address[40];
    long long int mobile;
    char grade[5];
    float gpa;

} studArray[50];
int nStuds;


void enrolStuds(void){
    printf("Number of students\n");
    scanf("%d", &nStuds);
    for(int i =0;i<nStuds;i++){
    printf("%d. ",i+1);
    printf("First name: ");
    scanf("%s", studArray[i].first_name);
    printf("last name: ");
    scanf("%s", studArray[i].last_name);
    printf("Address: ");
    scanf("%s",studArray[i].address);
    printf("Mob no: ");
    scanf("%lld",&studArray[i].mobile);
    }
    printf("List of students:\n");
    for(int i=0;i<nStuds;i++){
        printf("%d.\t%s %s\t%s\t%lld\n",i+1,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile);
    }
};

void enterGrade(void){
    float sum=0;
    int flag=0;
    printf("\n");
    for(int i=0;i<nStuds;i++){
        printf("For %d.\t%s %s\n",i+1,studArray[i].first_name,studArray[i].last_name);
        printf("Enter 5 grades:\n");
        getchar();
        for(int j=0;j<5;j++){

            scanf("%c\n",&studArray[i].grade[j]);
            if(studArray[i].grade[j]=='E'){
                sum+=10;
                flag++;
            }if(studArray[i].grade[j]=='A'){
                sum+=9;
                flag++;
            }if(studArray[i].grade[j]=='B'){
                sum+=8;
                flag++;
            }if(studArray[i].grade[j]=='C'){
                sum+=7;
                flag++;
            }if(studArray[i].grade[j]=='D'){
                sum+=6;
                flag++;
            }if(studArray[i].grade[j]=='P'){
                sum+=5;
                flag++;
            }if(studArray[i].grade[j]=='F'){
                sum+=0;
                flag++;
            }

        }

        studArray[i].gpa=(sum)/5;
        sum=0;
        flag=0;
        }
        for(int i=0;i<nStuds;i++){

            printf("%d.\t%s %s\tGPA: %0.2f\n",i+1,studArray[i].first_name,studArray[i].last_name,studArray[i].gpa);
        }
        }


void displayStuds(void){
    struct student sortedStuds[50];
    struct student temp[50];
    for(int i=0;i<nStuds;i++){
            for(int j=0;j<nStuds;j++){
        if(strcasecmp(studArray[i].first_name,studArray[j].first_name)>0){

            sortedStuds[i]=studArray[j];
            sortedStuds[j]=studArray[i];
        }else if(strcasecmp(studArray[i].first_name,studArray[j].first_name)==0){
            if(strcasecmp(studArray[i].last_name,studArray[j].last_name)>0){

            sortedStuds[i]=studArray[j];
            sortedStuds[j]=studArray[i];

    }
}}}
for(int i=0;i<nStuds;i++){
        printf("%d.\t%s %s \n",i+1,sortedStuds[i].first_name,studArray[i].last_name);
    }
}

void displayMerit(void){
    for(int i=0;i<nStuds;i++){

    }
}

int main(){
    int choice;
    printf("1.enrol student\n");
        printf("2.enter grade\n");
        printf("3.display students\n");
        printf("4.search student\n");
        printf("5.edit student grade\n");
        printf("6.modify student list\n");
        printf("7.display merit list\n");
        printf("8.exit\n");
    while(1){
            scanf("%d", &choice);
        switch (choice) {

        case 1:
                enrolStuds();
                break;
        case 2:
                enterGrade();
                break;
        case 3:
                displayStuds();
                break;




            case 8:
                return 0;
            default:
                printf("Wrong Input. Should be between 1 and 8.\n");
        }}}


