// Siddhesh Ballal
// A106 

/*
Write a Menu driven program in C for a cricket player’s display board. The information of the
2	+ Bubble Sort
4	- cricketer can be (not limited to) Name, Age, Country, Category (Batsman, Bowler, Wicket keeper,
5	- All-rounder), Number of ODI’s played, Number of International 20-20’s played. Display
6	- following.
7	- a) Number of batsman of a particular country
8	- b) Sort the Batsman as per the average batting score(Bubble/insertion sort)
9	- c) Batsman with highest average score (Binary search)
10	- d) Number of bowlers of a particular country
11	- e) The bowler that has taken a maximum no of wickets
12	- f) Show particular players the entire “Display board information”
*/   



#include <stdio.h>
#include <string.h>


struct player_info{
  char name [20], player_type[20], country[20];
  int ID, wickets, runs, ODIs, T20s, age;
  float avg_score;
} ;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)     
 
       // Last i elements are already in place  
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {

  int no_of_players, menu_control= 1;
  char choice;

  printf("Data of How many players is to be held?\n");
  scanf("%d", &no_of_players);

  struct player_info player[no_of_players];

  for (int i=0; i<no_of_players; i++)
  {
    player[i].ID = i;
    printf("\nEnter details of player of ID= %d\n",i+1);
    printf("Player %d name:\t",i+1);
    scanf("%s",player[i].name);
    printf("Player %d type:\t",i+1);
    scanf("%s",player[i].player_type);
    printf("Player %d country:\t",i+1);
    scanf("%s",player[i].country);
    printf("Player %d ODI’s played:\t",i+1);
    scanf("%d",&player[i].ODIs);
    printf("Player %d T20s played:\t",i+1);
    scanf("%d",&player[i].T20s);
    printf("Player %d wickets taken:\t",i+1);
    scanf("%d",&player[i].wickets);
    printf("Player %d runs:\t",i+1);
    scanf("%d",&player[i].runs);
    printf("Player %d average score:\t",i+1);
    scanf("%f",&player[i].avg_score);
  }

 while (menu_control==1)
  {  
  
 printf("a) Number of batsman of a particular country\nb) Sort the Batsman as per the average batting score(Bubble/insertion sort)\nc) Batsman with highest average score (Binary search)\nd) Number of bowlers of a particular countrye) The bowler that has taken a maximum no of wickets\nf) Show particular players the entire “Display board information\t");
  scanf("%c", &choice);
  switch(choice)
  {
    case('a'):
      printf("\nEnter country: ");
      char country[20];
      scanf("%s", country);
      int batsman_counter=0;
      for(int i=0; i<no_of_players; i++)
      {
        if(strcmp(player[i].player_type,"Batsman")==0 && strcmp(player->country, country)==0)
        {
          batsman_counter++;
        }
      }
      printf("Number of batsmen are: %d\n", batsman_counter);
      break;

    case('e'):
      printf("\nEnter country: ");
      scanf("%s", country);
      int bowler_counter=0;
      for(int i=0; i<no_of_players; i++)
      {
        if(strcmp(player[i].player_type,"Bowler")==0 && strcmp(player->country, country)==0)
        {
          bowler_counter++;
        }
      }
      printf("Number of bowlers are: %d\n", bowler_counter);
      break;

    case('b'):
      printf("");
      int batsmen[20];
      for(int i=0; i<no_of_players; i++)
      {
        if(strcmp(player[i].player_type,"Batsman")==0)
        {
          batsman_counter++;
          batsmen[i]= player[i].ID;
        }
      }
      printf("\nThe batsmen are: ");
      printArray(&batsmen[batsman_counter], batsman_counter);
      printf("\nThe sorted array is: ");
      bubbleSort(&batsmen[batsman_counter], batsman_counter);
      printArray(&batsmen[batsman_counter], batsman_counter);
      break;

    case('f'):
      printf("\n\nPlayers' details are as follows:\n");
      printf("Name\tWickets\t\tRuns\tAverage score");

      for (int i=0; i<no_of_players; i++)
      {
        printf("\n%s\t\t\t%d\t\t%d\t\t%.2f\t\t%d\t\t%d",player[i].name,player[i].wickets, player[i].runs, player[i].avg_score, player[i].ODIs, player[i].T20s);
      }
      break;
        
      case('g'):
      printf("");
      menu_control=0;
  }
  }
  return 0;
}
