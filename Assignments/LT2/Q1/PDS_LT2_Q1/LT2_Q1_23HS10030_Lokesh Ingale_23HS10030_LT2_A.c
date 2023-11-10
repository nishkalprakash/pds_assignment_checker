//Name :Lokesh Nitin Ingale
//Roll no:23HS10030
//set:A
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct{
  unsigned int roll;
  char name[20];
  int points,max;
}stud;

stud badminton[10],chess[10],carrom[10],tt[10],tmp[30];

//void displaymeritlist(stud badminton,stud carrom, stud chess , stud tt, stud tmp ){
//  char tempo[50];
//for (int i=0;i<b;i++){
//for(int i=0;i<b;i++)
      //    if (badminton[i].roll>badminton[i+1].roll){
//	strcpy(tempo,badminton[i].roll);
//	strcpy(badminton[i].roll,badminton[i+1].roll);
//	strcpy(badminton[i+1].roll,tempo);
//    }
//}
//for (int i=0;i<b;i++){

//printf("Roll no of player%d in badminton:%d\n",i+1,badminton[i].roll);
//printf("name of player%d:%s\n",i+1,badminton[i].name);
//printf("points of player%d:%d\n",i+1,badminton[i].points);
//}
//}

    


      

int main(){
  int ta,ch,c,b;
  unsigned int t;

  printf("enter the number of students who played badminton\n");
  scanf("%d",&b);

  for(int i=0;i<b;i++)
    {
    printf("Enter the roll of player%d in badminton\n",i+1);
    scanf("%u",&badminton[i].roll);
    printf("Enter the name of player%d\n",i+1);
    scanf("%s",&badminton[i].name);
    printf("Enter the points of player%d\n",i+1);
    scanf("%u",&badminton[i].points);
    }
  
  for(int i=0;i<b;i++){
  printf("Roll no of player%d in badminton:%d\n",i+1,badminton[i].roll);
  printf("name of player%d:%s\n",i+1,badminton[i].name);
  printf("points of player%d:%d\n",i+1,badminton[i].points);
  
     }

  printf("enter the number of students who played chess\n");
  scanf("%d",&ch);

  for(int i=0;i<ch;i++)
    {
    printf("Enter the roll of player%d in chess\n",i+1);
    scanf("%u",&chess[i].roll);
    printf("Enter the name of player%d\n",i+1);
    scanf("%s",&chess[i].name);
    printf("Enter the points of player%d\n",i+1);
    scanf("%u",&chess[i].points);
    }
  
  for(int i=0;i<ch;i++){
  printf("Roll no of player%d in chess:%d\n",i+1,chess[i].roll);
  printf("name of player%d:%s\n",i+1,chess[i].name);
  printf("points of player%d:%d\n",i+1,chess[i].points);
     }
   printf("enter the number of students who played carrom\n");
  scanf("%d",&c);

  for(int i=0;i<c;i++)
    {
    printf("Enter the roll of player%d: in carrom\n",i+1);
    scanf("%u",&carrom[i].roll);
    printf("Enter the name of player%d\n",i+1);
    scanf("%s",&carrom[i].name);
    printf("Enter the points of player%d\n",i+1);
    scanf("%u",&carrom[i].points);
    }
  
  for(int i=0;i<c;i++){
    printf("Roll no of player%d in carrom:%d\n",i+1,carrom[i].roll);
  printf("name of player%d:%s\n",i+1,carrom[i].name);
  printf("points of player%d:%d\n",i+1,carrom[i].points);
  
     }
   printf("enter the number of students who played tt\n");
  scanf("%d",&ta);

  for(int i=0;i<ta;i++)
    {
    printf("Enter the roll of player%d: in tt\n",i+1);
    scanf("%u",&tt[i].roll);
    printf("Enter the name of player%d\n",i+1);
    scanf("%s",&tt[i].name);
    printf("Enter the points of player%d\n",i+1);
    scanf("%u",&tt[i].points);
    }
  
  for(int i=0;i<ta;i++){
    printf("Roll no of player%d in tt:%d\n",i+1,tt[i].roll);
  printf("name of player%d:%s\n",i+1,tt[i].name);
  printf("points of player%d:%d\n",i+1,tt[i].points);

  // displaymeritlist(badminton,carrom,chess,tt,tmp);
  
     }
   int p;
   for(int i=0;i<b;i++){
     for(int j=0;j<ch;j++){
      for(int k=0;k<c;k++){
	for(int l=0;l<ta;l++){
	  if(badminton[i].roll==chess[j].roll==carrom[k].roll ||badminton[i].roll==chess[j].roll==tt[l].roll || badminton[i].roll==carrom[k].roll==tt[l].roll || carrom[k].roll==chess[j].roll==tt[l].roll )
	    
	    { if(badminton[i].roll==chess[j].roll==carrom[k].roll){
	      strcpy(tmp[i].roll,badminton[i].roll);
	      strcpy(tmp[i].name,badminton[i].name);}
	      else { strcpy(tmp[i].roll,carrom[k].roll);
		strcpy(tmp[i].name,carrom[k].name);}
	     if(badminton[i].points<chess[j].points && badminton[i].points<carrom[k].points && badminton[i].points<tt[l].points)
	       tmp[i].points=chess[j].points+ carrom[k].points+tt[l].points;
	     if(chess[j].points<badminton[i].points && chess[j].points<tt[l].points && chess[j].points<carrom[k].points)
	       tmp[i].points=badminton[i].points+tt[l].points+carrom[k].points;
	     if(carrom[k].points< badminton[i].points && carrom[k].points< chess[j].points && carrom[k].points<tt[l].points)
	       tmp[i].points=badminton[i].points+tt[l].points+chess[j].points;
	     if(tt[l].points<badminton[i].points && tt[l].points<chess[j].points && tt[l].points<carrom[k].points)
	       tmp[i].points=badminton[i].points+carrom[k].points+chess[j].points;
	    }
	}
      }
    }
  }
  for(int i=0;i<b;i++){
    printf("roll no:%u",tmp[i].roll);
    printf("name:%s",tmp[i].name);
    printf("total points in top 3 games:%d",tmp[i].points);
  }
  int max=0;
  for(int i=0;i<b;i++){
    if(tmp[i].points>max){ max=tmp[i].points;
      p=i;
    printf("roll no with max points:%u",tmp[p].roll);
    printf("name with max points:%s",tmp[p].name);
    printf(" max points=%d",tmp[p].points);
    }
  }
    
  
  

    return 0;
}
  
    
    
    
//( if(for(int p=0;p<i;p++){
//	t!=badminton[p].roll;
//    }
//    )
//    {
//    badminton[i].roll=t;
//    break;
//    }
//    else {badminton[i].roll=t;
//    badminton[p]=Null;
//    }
//})
