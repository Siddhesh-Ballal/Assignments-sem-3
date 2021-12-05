//Siddhesh Ballal
//A106
//18 Oct 2021
/*
Represent sets using one-dimensional arrays and implement functions to perform
i. Union
ii. Intersection
iii. Difference
iv. Symmetric difference of two sets
*/
#include <stdio.h>

int main()
{
  int menu_check= 1, a, b, size, n = 0, intersection_counter= 0;
  
  printf("\nEnter the no. of elements in Set A: ");
  scanf("%d", &a);
  printf("\nEnter the no. of elements in Set B: ");
  scanf("%d", &b);
  
  int Set_A[a], Set_B[b];

  printf("\n\n For Set A: ");
  for (int i=0 ; i<a ; i++)
  {
    printf("\nEnter element %d of Set A: ", i+1);
    scanf("%d", &Set_A[i]);
  }
  
  printf("\n\n For Set B: ");
  for (int i=0 ; i<b ; i++)
  {
    printf("\nEnter element %d of Set B: ", i+1);
    scanf("%d", &Set_B[i]);
  }

  printf("\nThe Sets are: \n");
  printf("Set A : {\t");
  for (int i=0 ; i<a ; i++)
  {
    printf("%d\t", Set_A[i]);
  }
  printf("}");
  printf("\nSet B : {\t");
  for (int i=0 ; i<b ; i++)
  {
    printf("%d\t", Set_B[i]);
  }
  printf("}");

    do
  {
    int menu_choice;
    printf("\n\n");
    printf("\nEnter the option corresponding to the choice that you want to operate:");
    printf("\n 1. Union\n 2. Intersection\n 3. Difference\n 4. Symmetric difference of two sets\n 5. Exit:\t\t");
    scanf(" %d", &menu_choice);

    switch(menu_choice)
    {
      
      case(1):
      {
        // Union
        size = a+b;
        int Union[size];
        
        printf("\n\n");
        for(int i=0; i<a; i++)
        {
          Union[n]=Set_A[i];
          n++;
        }

        for(int i=0; i<b; i++)
        {
          int flag=0;
          for(int j=0; j<a; j++)
          {
            if (Set_B[i]==Set_A[j])
            {
              flag=1;
              break;
            }

          }

          if(flag==0)
          {
            Union[n]=Set_B[i];
            n++;
            intersection_counter++;
          }
          
        }

        int i=0;
        printf("A Union B: {\t");
        while(i<(a + intersection_counter))
        {
          printf("%d\t", Union[i]);
          i++;
        }
        printf("}");
        break;
      }

case(0):
      {
        // Difference
        int Diff_A_B[20], Diff_B_A[20];
        printf("Difference");
        // A - B = A - (A intersection B)
        n=0;
        for(int i=0; i < a; i++)
        {
          int flag = 0;
          for(int j=0; j < b; j++)
          {
            if(Set_A[i]==Set_B[j])
            {
              flag=1;
              break;
            }
          }

          if (flag==0)
          {
            Diff_A_B[n] = Set_A[i];
            n++;
          }
        }
        
        printf("\n {\t");
        for(int i; i<n; i++)
        {
          printf("%d\t", Diff_A_B[i]);
        }
      	printf("}");

  /*      // B - A = B - (A intersection B)
        int k=0;
        for(int j=0; j < b; j++)
        {
          int flag = 0;
          for(int i=0; i < a; i++)
          {
            if(Set_A[i]==Set_B[j])
            {
              flag=1;
              break;
            }
          }

          if (flag==0)
          {
            Diff_B_A[k] = Set_B[j];
            k++;
          }
        }

        printf("\nDifference B-A: {\t");
        for(int i; i<k; i++)
        {
          printf("%d  ", Diff_B_A[i]);
        }
        printf("}");*/
      break;
      }
      case(2):
      {
        // Intersection
        intersection_counter = 0, n = 0;
        if(a>=b)
        size = b;
        else
        size = a;

        int Intersection[size];
        
        for(int i=0; i<b; i++)
        {
          int flag=0;
          for(int j=0; j<a; j++)
          {
            if (Set_B[i]==Set_A[j])
            {
              flag=1;
              intersection_counter++;
              break;
            }
          }

          if(flag==1)
          {
            Intersection[n] = Set_B[i];
            n++;
          }
        }
        printf("A intrsection B: {\t");
        for (int i=0; i<intersection_counter; i++)
        {
          printf("%d\t", Intersection[i]);
        }
        printf("}");
        break;
      }

      case(3):
      {
        // Difference
        int Diff_A_B[a], Diff_B_A[b];
        
        // A - B = A - (A intersection B)
        n=0;
        for(int i=0; i < a; i++)
        {
          int flag = 0;
          for(int j=0; j < b; j++)
          {
            if(Set_A[i]==Set_B[j])
            {
              flag=1;
              break;
            }
          }

          if (flag==0)
          {
            Diff_A_B[n] = Set_A[i];
            n++;
          }
        }
        printf("\nDifference A-B: {\t");
        for(int i; i<n; i++)
        {
          printf("%d  ", Diff_A_B[i]);
        }
        printf("}");
        // B - A = B - (A intersection B)
        int k=0;
        for(int j=0; j < b; j++)
        {
          int flag = 0;
          for(int i=0; i < a; i++)
          {
            if(Set_A[i]==Set_B[j])
            {
              flag=1;
              break;
            }
          }

          if (flag==0)
          {
            Diff_B_A[k] = Set_B[j];
            k++;
          }
        }

        printf("\nDifference B-A: {\t");
        for(int i; i<k; i++)
        {
          printf("%d  ", Diff_B_A[i]);
        }
        printf("}");

      break;
      }

     case(4):
      {
        // Symmetric difference
        n=0;
        int Sym_diff[a+b];
        for(int i=0; i<a; i++)
        {
          int flag = 0;
          for(int j=0; j<b; j++)
          {
            if (Set_A[i]==Set_B[j])
            {
              flag=1;
              break;
            }
            }
            if (flag==0)
            {
              Sym_diff[n]=Set_A[i];
              n++;
          }
        }

        for(int j=0; j<b; j++)
        {
          int flag = 0;
          for(int i=0; i<a; i++)
          {
            if (Set_A[i]==Set_B[j])
            {
              flag=1;
              break;
            }
            }
            if (flag==0)
            {
              Sym_diff[n]=Set_B[j];
              n++;
          }
        }

        printf("Symmetric Difference:  {\t");
        for(int i=0; i<n; i++)
        {
          printf("%d\t", Sym_diff[i]);
        }
        printf("}");
        break;
      }

      case(5):
      {
        menu_check = 0;
        break;
      }

      default:
      printf("Invalid Input");
      break;
  }
  }
  while(menu_check==1);
  return 0;
}
