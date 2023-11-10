//Name- Asad Ali Jaffrey
//Roll Number - 23CH30007

//set-A

#include<stdio.h>
#include<string.h>

typedef struct stud{

  unsigned int roll;
  char name[20];
  int points;
}stud;

stud badminton[10];
stud chess[10];
stud carrom[10];
stud tt[10];

stud tmp[30];

int nbad, ncar, nchess, ntt;

int findroll(stud a[], int size, int key){

  for (int i = 0; i<size; i++){

    if (a[i].roll==key){
      return i;
    }
    
  }

  return -1;
 
}

void displayMeritList(){

  //for badminton

  for (int i = 0; i<nbad-1; i++){
    for (int j = 0; j<nbad-i-1; j++){

      if (badminton[j].points<badminton[j+1].points){
    stud tempn;
    tempn = badminton[j];
    badminton[j] = badminton[j+1];
    badminton[j+1] = tempn;   
      }

      if (badminton[j].points==badminton[j+1].points){

    if (strcmp(badminton[j].name,badminton[j+1].name)>0){
    stud tempn;
    tempn = badminton[j];
    badminton[j] = badminton[j+1];
    badminton[j+1] = tempn;   
    }

    if (strcmp(badminton[j].name,badminton[j+1].name)==0){
      if (badminton[j].roll>badminton[j+1].roll){
        stud tempn;
        tempn = badminton[j];
        badminton[j] = badminton[j+1];
        badminton[j+1] = tempn;
      }
    }
        
      }     
    }
  }


  //for printing

  printf("For Badminton\n");

  for (int i = 0; i<nbad; i++){
    printf("Roll : %u ", badminton[i].roll);
    printf("Name : %s ", badminton[i].name);
    printf("Points : %d \n", badminton[i].points);
  }


    //for chess

  for (int i = 0; i<nchess-1; i++){
    for (int j = 0; j<nchess-i-1; j++){

      if (chess[j].points<chess[j+1].points){
    stud tempn;
    tempn = chess[j];
        chess[j] = chess[j+1];
        chess[j+1] = tempn;   
      }

      if (chess[j].points==chess[j+1].points){

    if (strcmp(chess[j].name,chess[j+1].name)>0){
    stud tempn;
    tempn = chess[j];
        chess[j] = chess[j+1];
        chess[j+1] = tempn;   
    }

    if (strcmp(chess[j].name,chess[j+1].name)==0){
      if (chess[j].roll>chess[j+1].roll){
        stud tempn;
        tempn = chess[j];
        chess[j] = chess[j+1];
        chess[j+1] = tempn;
      }
    }
        
      }     
    }
  }

  //for printing

  printf("For Chess\n");

  for (int i = 0; i<nchess; i++){
    printf("Roll : %u ", chess[i].roll);
    printf("Name : %s ", chess[i].name);
    printf("Points : %d \n", chess[i].points);
  }

    

    //for carrom

  for (int i = 0; i<ncar-1; i++){
    for (int j = 0; j<ncar-i-1; j++){

      if (carrom[j].points<carrom[j+1].points){
    stud tempn;
    tempn = carrom[j];
        carrom[j] = carrom[j+1];
        carrom[j+1] = tempn;   
      }

      if (carrom[j].points==carrom[j+1].points){

    if (strcmp(carrom[j].name,carrom[j+1].name)>0){
    stud tempn;
    tempn = carrom[j];
        carrom[j] = carrom[j+1];
        carrom[j+1] = tempn;   
    }

    if (strcmp(carrom[j].name,carrom[j+1].name)==0){
      if (carrom[j].roll>carrom[j+1].roll){
        stud tempn;
        tempn = carrom[j];
        carrom[j] = carrom[j+1];
        carrom[j+1] = tempn;
      }
    }
        
      }     
    }
  }


  //for printing
  printf("For Carrom\n");

  for (int i = 0; i<ncar; i++){
    printf("Roll : %u ", carrom[i].roll);
    printf("Name : %s ", carrom[i].name);
    printf("Points : %d \n", carrom[i].points);
  }
 


//for tt

  for (int i = 0; i<ntt-1; i++){     
    for (int j = 0; j<ntt-i-1; j++){

      if (tt[j].points<tt[j+1].points){
    stud tempn;
    tempn = tt[j];
        tt[j] = tt[j+1];
        tt[j+1] = tempn;   
      }

      if (tt[j].points==tt[j+1].points){

    if (strcmp(tt[j].name,tt[j+1].name)>0){
    stud tempn;
    tempn = tt[j];
        tt[j] = tt[j+1];
        tt[j+1] = tempn;   
    }

    if (strcmp(tt[j].name,tt[j+1].name)==0){
      if (tt[j].roll>tt[j+1].roll){
        stud tempn;
        tempn = tt[j];
        tt[j] = tt[j+1];
        tt[j+1] = tempn;
      }
    }
        
      }     
    }
  }

 //for printing

printf("For TT\n");
  for (int i = 0; i<ntt; i++){
    printf("Roll : %u ", tt[i].roll);
    printf("Name : %s ", tt[i].name);
    printf("Points : %d \n", tt[i].points);
  }

    
  }

int maxandadd3(int a, int b, int c, int d){    //adds the three largest points

  int min = a;
  if (b<min) min = b;
  if (c<min) min = c;
  if (d<min) min = d;
//Name- Asad Ali Jaffrey
//Roll Number - 23CH30007

//set-A

#include<stdio.h>
#include<string.h>

typedef struct stud{

  unsigned int roll;
  char name[20];
  int points;
}stud;

stud badminton[10];
stud chess[10];
stud carrom[10];
stud tt[10];

stud tmp[30];

int nbad, ncar, nchess, ntt;

int findroll(stud a[], int size, int key){

  for (int i = 0; i<size; i++){

    if (a[i].roll==key){
      return i;
    }
    
  }

  return -1;
 
}

void displayMeritList(){

  //for badminton

  for (int i = 0; i<nbad-1; i++){
    for (int j = 0; j<nbad-i-1; j++){

      if (badminton[j].points<badminton[j+1].points){
    stud tempn;
    tempn = badminton[j];
    badminton[j] = badminton[j+1];
    badminton[j+1] = tempn;   
      }

      if (badminton[j].points==badminton[j+1].points){

    if (strcmp(badminton[j].name,badminton[j+1].name)>0){
    stud tempn;
    tempn = badminton[j];
    badminton[j] = badminton[j+1];
    badminton[j+1] = tempn;   
    }

    if (strcmp(badminton[j].name,badminton[j+1].name)==0){
      if (badminton[j].roll>badminton[j+1].roll){
        stud tempn;
        tempn = badminton[j];
        badminton[j] = badminton[j+1];
        badminton[j+1] = tempn;
      }
    }
        
      }     
    }
  }


  //for printing

  printf("For Badminton\n");

  for (int i = 0; i<nbad; i++){
    printf("Roll : %u ", badminton[i].roll);
    printf("Name : %s ", badminton[i].name);
    printf("Points : %d \n", badminton[i].points);
  }


    //for chess

  for (int i = 0; i<nchess-1; i++){
    for (int j = 0; j<nchess-i-1; j++){

      if (chess[j].points<chess[j+1].points){
    stud tempn;
    tempn = chess[j];
        chess[j] = chess[j+1];
        chess[j+1] = tempn;   
      }

      if (chess[j].points==chess[j+1].points){

    if (strcmp(chess[j].name,chess[j+1].name)>0){
    stud tempn;
    tempn = chess[j];
        chess[j] = chess[j+1];
        chess[j+1] = tempn;   
    }

    if (strcmp(chess[j].name,chess[j+1].name)==0){
      if (chess[j].roll>chess[j+1].roll){
        stud tempn;
        tempn = chess[j];
        chess[j] = chess[j+1];
        chess[j+1] = tempn;
      }
    }
        
      }     
    }
  }

  //for printing

  printf("For Chess\n");

  for (int i = 0; i<nchess; i++){
    printf("Roll : %u ", chess[i].roll);
    printf("Name : %s ", chess[i].name);
    printf("Points : %d \n", chess[i].points);
  }

    

    //for carrom

  for (int i = 0; i<ncar-1; i++){
    for (int j = 0; j<ncar-i-1; j++){

      if (carrom[j].points<carrom[j+1].points){
    stud tempn;
    tempn = carrom[j];
        carrom[j] = carrom[j+1];
        carrom[j+1] = tempn;   
      }

      if (carrom[j].points==carrom[j+1].points){

    if (strcmp(carrom[j].name,carrom[j+1].name)>0){
    stud tempn;
    tempn = carrom[j];
        carrom[j] = carrom[j+1];
        carrom[j+1] = tempn;   
    }

    if (strcmp(carrom[j].name,carrom[j+1].name)==0){
      if (carrom[j].roll>carrom[j+1].roll){
        stud tempn;
        tempn = carrom[j];
        carrom[j] = carrom[j+1];
        carrom[j+1] = tempn;
      }
    }
        
      }     
    }
  }


  //for printing
  printf("For Carrom\n");

  for (int i = 0; i<ncar; i++){
    printf("Roll : %u ", carrom[i].roll);
    printf("Name : %s ", carrom[i].name);
    printf("Points : %d \n", carrom[i].points);
  }
 


//for tt

  for (int i = 0; i<ntt-1; i++){     
    for (int j = 0; j<ntt-i-1; j++){

      if (tt[j].points<tt[j+1].points){
    stud tempn;
    tempn = tt[j];
        tt[j] = tt[j+1];
        tt[j+1] = tempn;   
      }

      if (tt[j].points==tt[j+1].points){

    if (strcmp(tt[j].name,tt[j+1].name)>0){
    stud tempn;
    tempn = tt[j];
        tt[j] = tt[j+1];
        tt[j+1] = tempn;   
    }

    if (strcmp(tt[j].name,tt[j+1].name)==0){
      if (tt[j].roll>tt[j+1].roll){
        stud tempn;
        tempn = tt[j];
        tt[j] = tt[j+1];
        tt[j+1] = tempn;
      }
    }
        
      }     
    }
  }

 //for printing

printf("For TT\n");
  for (int i = 0; i<ntt; i++){
    printf("Roll : %u ", tt[i].roll);
    printf("Name : %s ", tt[i].name);
    printf("Points : %d \n", tt[i].points);
  }

    
  }

int maxandadd3(int a, int b, int c, int d){    //adds the three largest points

  int min = a;
  if (b<min) min = b;
  if (c<min) min = c;
  if (d<min) min = d;

  int sum = a+b+c+d-min;
  return sum;
 
}



void findChamp(){

  for (int i = 0; i<nbad; i++){
    
    int key = badminton[i].roll;

    if (((findroll(chess,nchess,key)>=0)&&(findroll(carrom,ncar,key)>=0))||((findroll(chess,nchess,key)>=0)&&(findroll(tt,ntt,key)>=0))||((findroll(carrom,ncar,key)>=0)&&(findroll(tt,ntt,key)>=0))){
        int ind_chess = findroll(chess,nchess,key);
        int ind_carrom = findroll(carrom,ncar,key);
        int ind_tt = findroll(tt,ntt,key);

        tmp[i].roll = badminton[i].roll;
        strcpy(tmp[i].name,badminton[i].name);

        if ((ind_chess>=0)&&(ind_carrom>=0)&&(ind_tt>=0)){
          tmp[i].points = maxandadd3(chess[ind_chess].points,badminton[i].points,carrom[ind_carrom].points,tt[ind_tt].points);
        }

        else if ((findroll(chess,nchess,key)>=0)&&(findroll(carrom,ncar,key)>=0)){
          tmp[i].points = badminton[i].points+chess[ind_chess].points+carrom[ind_carrom].points;
        }

        else if ((findroll(chess,nchess,key)>=0)&&(findroll(tt,ntt,key)>=0)){
          tmp[i].points = badminton[i].points+chess[ind_chess].points+tt[ind_tt].points;
        }

        else {
          tmp[i].points = badminton[i].points+carrom[ind_carrom].points+tt[ind_tt].points;
        }
      }
    }
      }

int main(){


  printf("How many students have participated in badminton : ");
  scanf("%d",&nbad);

  //FOR BADMINTON

  for (int i = 0; i<nbad; i++){

    int flag = 1;
    int roll_tmp;


    printf("Enter the roll of %d student : ", i+1);
    scanf("%u", &roll_tmp);

    if (findroll(badminton, i, roll_tmp)>=0){

    printf("Roll already found\n");
      
    int new = findroll(badminton, i, roll_tmp);
    printf("Enter the new name of student : ");
    scanf("%s", badminton[new].name);
    printf("Enter the new points of student : ");
    scanf("%d", &badminton[new].points);
    flag = 0;
    i--;
    }
    

    if (flag==1){
      
    badminton[i].roll = roll_tmp;
    printf("Enter the name of %d student : ", i+1);
    scanf("%s", badminton[i].name);
    printf("Enter the points of %d student : ", i+1);
    scanf("%d", &badminton[i].points);
    }
  }

  //for printing

  for (int i = 0; i<nbad; i++){
    printf("Roll : %u ", badminton[i].roll);
    printf("Name : %s ", badminton[i].name);
    printf("Points : %d \n", badminton[i].points);
  }


  //FOR CARROM

  printf("How many students have participated in carrom : ");
  scanf("%d",&ncar);
 

  for (int i = 0; i<ncar; i++){

    int flag = 1;
    int roll_tmp;


    printf("Enter the roll of %d student : ", i+1);
    scanf("%u", &roll_tmp);

    if (findroll(carrom, i, roll_tmp)>=0){

    printf("Roll already found\n");
      
    int new = findroll(carrom, i, roll_tmp);
    printf("Enter the new name of student : ");
    scanf("%s", carrom[new].name);
    printf("Enter the new points of student : ");
    scanf("%d", &carrom[new].points);
    flag = 0;
    i--;
    }
    

    if (flag==1){
      
    carrom[i].roll = roll_tmp;
    printf("Enter the name of %d student : ", i+1);
    scanf("%s", carrom[i].name);
    printf("Enter the points of %d student : ", i+1);
    scanf("%d", &carrom[i].points);
    }
  }

  //for printing

  for (int i = 0; i<ncar; i++){
    printf("Roll : %u ", carrom[i].roll);
    printf("Name : %s ", carrom[i].name);
    printf("Points : %d \n", carrom[i].points);
  }

  //FOR CHESS

  printf("How many students have participated in chess : ");
  scanf("%d",&nchess);

  for (int i = 0; i<nchess; i++){

    int flag = 1;
    int roll_tmp;


    printf("Enter the roll of %d student : ", i+1);
    scanf("%u", &roll_tmp);

    if (findroll(chess, i, roll_tmp)>=0){

    printf("Roll already found\n");
      
    int new = findroll(chess, i, roll_tmp);
    printf("Enter the new name of student : ");
    scanf("%s", chess[new].name);
    printf("Enter the new points of student : ");
    scanf("%d", &chess[new].points);
    flag = 0;
    i--;
    }
    

    if (flag==1){
      
    chess[i].roll = roll_tmp;
    printf("Enter the name of %d student : ", i+1);
    scanf("%s", chess[i].name);
    printf("Enter the points of %d student : ", i+1);
    scanf("%d", &chess[i].points);
    }
  }

  //for printing

  for (int i = 0; i<nchess; i++){
    printf("Roll : %u ", chess[i].roll);
    printf("Name : %s ", chess[i].name);
    printf("Points : %d \n", chess[i].points);
  }

  //FOR TT

  printf("How many students have participated in tt : ");
  scanf("%d",&ntt);

  for (int i = 0; i<ntt; i++){  

    int flag = 1;
    int roll_tmp;


    printf("Enter the roll of %d student : ", i+1);
    scanf("%u", &roll_tmp);

    if (findroll(tt, i, roll_tmp)>=0){

    printf("Roll already found\n");
      
    int new = findroll(tt, i, roll_tmp);
    printf("Enter the new name of student : ");
    scanf("%s", tt[new].name);
    printf("Enter the new points of student : ");
    scanf("%d", &tt[new].points);
    flag = 0;
    i--;
    }
    

    if (flag==1){
      
    chess[i].roll = roll_tmp;
    printf("Enter the name of %d student : ", i+1);
    scanf("%s",tt[i].name);
    printf("Enter the points of %d student : ", i+1);
    scanf("%d", &tt[i].points);
    }
  }

  //for printing

  for (int i = 0; i<ntt; i++){
    printf("Roll : %u ", tt[i].roll);
    printf("Name : %s ", tt[i].name);
    printf("Points : %d \n", tt[i].points);
  }


  displayMeritList();
  findchamp();


  return 0;
}

  int sum = a+b+c+d-min;
  return sum;
 
}



void findChamp(){

  for (int i = 0; i<nbad; i++){
    
    int key = badminton[i].roll;

    if (((findroll(chess,nchess,key)>=0)&&(findroll(carrom,ncar,key)>=0))||((findroll(chess,nchess,key)>=0)&&(findroll(tt,ntt,key)>=0))||((findroll(carrom,ncar,key)>=0)&&(findroll(tt,ntt,key)>=0))){
        int ind_chess = findroll(chess,nchess,key);
        int ind_carrom = findroll(carrom,ncar,key);
        int ind_tt = findroll(tt,ntt,key);

        tmp[i].roll = badminton[i].roll;
        strcpy(tmp[i].name,badminton[i].name);

        if ((ind_chess>=0)&&(ind_carrom>=0)&&(ind_tt>=0)){
          tmp[i].points = maxandadd3(chess[ind_chess].points,badminton[i].points,carrom[ind_carrom].points,tt[ind_tt].points);
        }

        else if ((findroll(chess,nchess,key)>=0)&&(findroll(carrom,ncar,key)>=0)){
          tmp[i].points = badminton[i].points+chess[ind_chess].points+carrom[ind_carrom].points;
        }

        else if ((findroll(chess,nchess,key)>=0)&&(findroll(tt,ntt,key)>=0)){
          tmp[i].points = badminton[i].points+chess[ind_chess].points+tt[ind_tt].points;
        }

        else {
          tmp[i].points = badminton[i].points+carrom[ind_carrom].points+tt[ind_tt].points;
        }
      }
    }
      }

int main(){


  printf("How many students have participated in badminton : ");
  scanf("%d",&nbad);

  //FOR BADMINTON

  for (int i = 0; i<nbad; i++){

    int flag = 1;
    int roll_tmp;


    printf("Enter the roll of %d student : ", i+1);
    scanf("%u", &roll_tmp);

    if (findroll(badminton, i, roll_tmp)>=0){

    printf("Roll already found\n");
      
    int new = findroll(badminton, i, roll_tmp);
    printf("Enter the new name of student : ");
    scanf("%s", badminton[new].name);
    printf("Enter the new points of student : ");
    scanf("%d", &badminton[new].points);
    flag = 0;
    i--;
    }
    

    if (flag==1){
      
    badminton[i].roll = roll_tmp;
    printf("Enter the name of %d student : ", i+1);
    scanf("%s", badminton[i].name);
    printf("Enter the points of %d student : ", i+1);
    scanf("%d", &badminton[i].points);
    }
  }

  //for printing

  for (int i = 0; i<nbad; i++){
    printf("Roll : %u ", badminton[i].roll);
    printf("Name : %s ", badminton[i].name);
    printf("Points : %d \n", badminton[i].points);
  }


  //FOR CARROM

  printf("How many students have participated in carrom : ");
  scanf("%d",&ncar);
 

  for (int i = 0; i<ncar; i++){

    int flag = 1;
    int roll_tmp;


    printf("Enter the roll of %d student : ", i+1);
    scanf("%u", &roll_tmp);

    if (findroll(carrom, i, roll_tmp)>=0){

    printf("Roll already found\n");
      
    int new = findroll(carrom, i, roll_tmp);
    printf("Enter the new name of student : ");
    scanf("%s", carrom[new].name);
    printf("Enter the new points of student : ");
    scanf("%d", &carrom[new].points);
    flag = 0;
    i--;
    }
    

    if (flag==1){
      
    carrom[i].roll = roll_tmp;
    printf("Enter the name of %d student : ", i+1);
    scanf("%s", carrom[i].name);
    printf("Enter the points of %d student : ", i+1);
    scanf("%d", &carrom[i].points);
    }
  }

  //for printing

  for (int i = 0; i<ncar; i++){
    printf("Roll : %u ", carrom[i].roll);
    printf("Name : %s ", carrom[i].name);
    printf("Points : %d \n", carrom[i].points);
  }

  //FOR CHESS

  printf("How many students have participated in chess : ");
  scanf("%d",&nchess);

  for (int i = 0; i<nchess; i++){

    int flag = 1;
    int roll_tmp;


    printf("Enter the roll of %d student : ", i+1);
    scanf("%u", &roll_tmp);

    if (findroll(chess, i, roll_tmp)>=0){

    printf("Roll already found\n");
      
    int new = findroll(chess, i, roll_tmp);
    printf("Enter the new name of student : ");
    scanf("%s", chess[new].name);
    printf("Enter the new points of student : ");
    scanf("%d", &chess[new].points);
    flag = 0;
    i--;
    }
    

    if (flag==1){
      
    chess[i].roll = roll_tmp;
    printf("Enter the name of %d student : ", i+1);
    scanf("%s", chess[i].name);
    printf("Enter the points of %d student : ", i+1);
    scanf("%d", &chess[i].points);
    }
  }

  //for printing

  for (int i = 0; i<nchess; i++){
    printf("Roll : %u ", chess[i].roll);
    printf("Name : %s ", chess[i].name);
    printf("Points : %d \n", chess[i].points);
  }

  //FOR TT

  printf("How many students have participated in tt : ");
  scanf("%d",&ntt);

  for (int i = 0; i<ntt; i++){  

    int flag = 1;
    int roll_tmp;


    printf("Enter the roll of %d student : ", i+1);
    scanf("%u", &roll_tmp);

    if (findroll(tt, i, roll_tmp)>=0){

    printf("Roll already found\n");
      
    int new = findroll(tt, i, roll_tmp);
    printf("Enter the new name of student : ");
    scanf("%s", tt[new].name);
    printf("Enter the new points of student : ");
    scanf("%d", &tt[new].points);
    flag = 0;
    i--;
    }
    

    if (flag==1){
      
    chess[i].roll = roll_tmp;
    printf("Enter the name of %d student : ", i+1);
    scanf("%s",tt[i].name);
    printf("Enter the points of %d student : ", i+1);
    scanf("%d", &tt[i].points);
    }
  }

  //for printing

  for (int i = 0; i<ntt; i++){
    printf("Roll : %u ", tt[i].roll);
    printf("Name : %s ", tt[i].name);
    printf("Points : %d \n", tt[i].points);
  }


  displayMeritList();
  findchamp();


  return 0;
}