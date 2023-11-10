// Name - Anshuman Acharya
// roll No- 23CH10006
// set- A
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct stud{

  unsigned int roll;
  char name[20];
  int point;

};

struct student{

  int points[4];

};

struct stud badminton[10], chess[10], carrom[10], tt[10];
struct stud tmp[30];
struct student info[30];                                   // to store student information explicitly

int findsum(int a, int b, int c, int d){

  int min = 11, sum = 0;
  int points[4] = {a, b, c, d};

  for(int i = 0;i < 4;i++){
    if(points[i] < min){
      min = points[i];
    }
  }

  for(int i = 0;i < 4;i++){
    if(points[i] == min){
      sum += 0;
    }

    else{
      sum += points[i];
    }
  }

  return sum;

}

void findchamp(int bad, int ches, int car, int tabt){

  struct stud store[30];    // to store the students participated in all the 4 games
  int init = 0, count = 0, min = 11, ans;

  // we have to compare the roll no.s form all the games
  for(int i = 0;i < bad;i++){
    for(int j = 0;j < ches;j++){
      for(int k = 0;k < car;k++){
	for(int l = 0;l < tabt;l++){
	  if(badminton[i].roll == chess[j].roll && badminton[i].roll == carrom[k].roll && badminton[i].roll == tt[l].roll){
	    store[init].roll = badminton[i].roll;                          // if the student has participated in all 4 games , stored.
	    strcpy(store[init].name, badminton[i].name);
	    store[init].point = 0;
	    // now find min of all the points for all games
	    ans = findsum(badminton[i].point, chess[j].point, carrom[k].point, tt[l].point);    // sum of all the equired gamepoints got.
	    store[init].point = ans;
	    tmp[init] = store[init];            // data stored in stored transferred to tmp.
	    init++;
	    count++;                                           // for no of elements in store
	  }
	}
      }
    }
    
  }
  // done for the students participated in all 4 games.

  // for students participated in 3 games
  for(int i = 0;i < bad;i++){
    for(int j = 0;j < ches;j++){
      for(int k = 0;k < car;k++){
	for(int l = 0;l < tabt;l++){
	if((badminton[i].roll == chess[j].roll && badminton[i].roll == carrom[k].roll) &&  badminton[i].roll != tt[l].roll){
	  ans = findsum(badminton[i].point, chess[j].point, carrom[k].point, 0);        // for students participated in 3 particular games
	  tmp[init].roll = badminton[i].roll;
	  strcpy(tmp[init].name, badminton[i].name);
	  tmp[init].point = ans;
	  init++;
	}
	if((badminton[i].roll == chess[j].roll && badminton[i].roll == tt[l].roll) &&  badminton[i].roll != carrom[k].roll){
	  ans = findsum(badminton[i].point, chess[j].point, 0, tt[l].point);        // for students participated in 3 particular games
	  tmp[init].roll = badminton[i].roll;
	  strcpy(tmp[init].name, badminton[i].name);
	  tmp[init].point = ans;
	  init++;
	}
	if((badminton[i].roll == carrom[k].roll && badminton[i].roll == tt[l].roll) &&  badminton[i].roll != chess[j].roll){
	  ans = findsum(badminton[i].point, 0, carrom[k].point, tt[l].point);        // for students participated in 3 particular games
	  tmp[init].roll = badminton[i].roll;
	  strcpy(tmp[init].name, badminton[i].name);
	  tmp[init].point = ans;
	  init++;
	}
	if((chess[j].roll == carrom[k].roll && chess[j].roll == tt[l].roll) && chess[j].roll != badminton[i].roll){
	  ans = findsum(0, chess[j].point, carrom[k].point, tt[l].point);        // for students participated in 3 particular games
	  tmp[init].roll = chess[j].roll;
	  strcpy(tmp[init].name, badminton[i].name);
	  tmp[init].point = ans;
	  init++;
	}
	}
      }
    }
  }

  // done for students participating in 3 games andk others will not be considered.
  
  // iterate over tmp and chek for max points in tmp arr
  int max = -1;
  for(int i = 0;i < init;i++){

    if(tmp[i].point > max){
      max = tmp[i].point;    // Maximum of the points obtained.
    }

  }

  int storein = 0;
  struct stud champ[10];

  // now for jont max or final declararion of champ
  for(int i = 0;i < init;i++){

    if(tmp[i].point == max){
      champ[storein] = tmp[i];
      storein++;                                // all the champions stored in champ.
  }
  }

    for(int i = 0;i < storein;i++){

      printf("Name : %s\n", champ[i].name);
      printf("Roll : %d\n", champ[i].roll);
      printf("Points : %d\n", champ[i].point);

      printf("\n");                                 // All the champions displayed.

    }

}

void dispmeritlist(int bad, int ches, int car, int tabt){

  printf("Displaying the merit list : \n");

  printf("For badminton : \n");

  for(int i = 0;i < bad;i++){

    printf("Name : %s\n", badminton[i].name);
    printf("Roll No : %u\n", badminton[i].roll);
    printf("Name : %d\n", badminton[i].point);

  }

  printf("For chess : \n");

  for(int i = 0;i < ches;i++){

    printf("Name : %s\n", chess[i].name);
    printf("Roll No : %u\n", chess[i].roll);
    printf("Name : %d\n", chess[i].point);

  }

  printf("For carrom : \n");

  for(int i = 0;i < car;i++){

    printf("Name : %s\n", carrom[i].name);
    printf("Roll No : %u\n", carrom[i].roll);
    printf("Name : %d\n", carrom[i].point);

  }

  printf("For tt : \n");

  for(int i = 0;i < tabt;i++){

    printf("Name : %s\n", tt[i].name);
    printf("Roll No : %u\n", tt[i].roll);
    printf("Name : %d\n", tt[i].point);

  }

}


int main(){

  int bad, ches, car, tabt, i, j, count = 0, k;
  char ;

  struct stud champ[10];

  printf("Enter the number of students participating in badminton : ");
  scanf(" %d", &bad);

  printf("Enter the number of students participating in chess : ");
  scanf(" %d", &ches);

  printf("Enter the number of students participating in carrom : ");
  scanf(" %d", &car);

  printf("Enter the number of students participating in tt : ");
  scanf(" %d", &tabt);

  for(i = 0;i < bad;i++){

    printf("Enter the details of %dth student of badminton : \n", i+1);
    printf("Enter name : \n");
    scanf(" %s", badminton[i].name);
    printf("Enter roll no. : ");
    scanf(" %u", &badminton[i].roll);
    printf("Enter points : ");
    scanf(" %d", &badminton[i].point);

    info[i].points[0] = badminton[i].point;                  // details of i+1th student stored
    count++;                                          // no. of students in badminton

  }

  for(i = 0;i < ches;i++){

    printf("Enter the details of %dth student of chess : \n", i+1);
    printf("Enter name : \n");
    scanf(" %s", chess[i].name);
    printf("Enter roll no. : ");
    scanf(" %u", &chess[i].roll);
    printf("Enter points : ");
    scanf(" %d", &chess[i].point);

  }

  for(i = 0;i < car;i++){

    printf("Enter the details of %dth student of carrom : \n", i+1);
    printf("Enter name : \n");
    scanf(" %s", carrom[i].name);
    printf("Enter roll no. : ");
    scanf(" %u", &carrom[i].roll);
    printf("Enter points : ");
    scanf(" %d", &carrom[i].point);

  }

  for(i = 0;i < tabt;i++){

    printf("Enter the details of %dth student of tt : \n", i+1);
    printf("Enter name : \n");
    scanf(" %s", tt[i].name);
    printf("Enter roll no. : ");
    scanf(" %u", &tt[i].roll);
    printf("Enter points : ");
    scanf(" %d", &tt[i].point);                        // details input taken

  }

  findchamp(bad, ches, car, tabt);        //champion found

  // findrunnersup();
  
  //findconsolationwinner();

  dispmeritlist(bad, ches, car, tabt);

  return 0;
}
