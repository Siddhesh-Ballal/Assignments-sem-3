// A106 Siddhesh Ballal
/*
Implement a sparse matrix with operations like initialize empty sparse matrix, insert an element, add two matrices, transpose a matrix
*/


#include <stdio.h>
//void Three_tuple(rows, cols, )
int main()
{
  int rows, cols, menu_choice, menu_control=1;
  printf("Enter no. of rows: ");
  scanf("%d",&rows);
  printf("Enter no. of cols: ");
  scanf("%d",&cols);

  int matrix[rows][cols];
  int matrix2[rows][cols];

  printf("\nEnter matrix values:\n");
  for(int i=0; i<rows; i++)
  {
    for(int j=0; j<cols; j++)
    {
      printf("Matrix[%d][%d]= ",i+1,j+1);
      scanf("%d",&matrix[i][j]);
    }
  }

  printf("\nThe matrix is:\n");
  for(int i=0; i<rows; i++)
  {
    for(int j=0; j<cols; j++)
    {
      printf("%d  ", matrix[i][j]);
    }
    printf("\n");
  }

  do{
  printf("\nSparce Matrix Menu\nEnter:");
  printf("\n1 to generate Three tuple representation of Entered matrix\n2 to generate Three Tuple representation of its sum with another %dX%d matrix\n3 to insert an element\n4 Transpose of the matrix\n5 to Exit\nEnter your choice:  ",rows,cols);
  scanf("%d", &menu_choice);

  switch(menu_choice)
  {
    case(1):
    {
      printf("\n--------------------------------------------------------------------\n");
      printf("\nThree Tuple Form:\n");
      printf("Rows  Cols    Value\n");
      for(int i=0; i<rows; i++)
      {
        for(int j=0; j<cols; j++)
        {
          if(matrix[i][j] != 0)
          {
            printf("%d\t\t%d\t\t%d\n",i, j, matrix[i][j]);
          }
        }
      }
      break;
    }
    case(2):
    {
      printf("\n--------------------------------------------------------------------\n");

      printf("\nLet another %d X %d matrix be Matrix2", rows, cols);

    
      printf("\nEnter matrix2 values:\n");
      for(int i=0; i<rows; i++)
      {
        for(int j=0; j<cols; j++)
        {
          printf("Matrix2[%d][%d]= ",i+1,j+1);
          scanf("%d",&matrix2[i][j]);
        }
      }

      printf("\nThe matrix2 is:\n");
      for(int i=0; i<rows; i++)
      {
        for(int j=0; j<cols; j++)
        {
          printf("%d  ", matrix2[i][j]);
        }
        printf("\n--------------------------------------------------------------------\n");
      }

      int matsum[rows][cols];
      printf("\nMatrix1 + Matrix2 =\n");
      for(int i=0; i<rows; i++)
      {
        for(int j=0; j<cols; j++)
        {
          matsum[i][j] = matrix[i][j] + matrix2[i][j];
          printf("%d  ", matsum[i][j]);
        }
        printf("\n--------------------------------------------------------------------\n");
      }

      printf("\nThree Tuple Form:\n");
      printf("Rows  Cols    Value\n");
      for(int i=0; i<rows; i++)
      {
        for(int j=0; j<cols; j++)
        {
          if(matsum[i][j] != 0)
          {
            printf("%d\t\t%d\t\t%d\n",i, j, matsum[i][j]);
          }
        }
      }
      printf("\n--------------------------------------------------------------------\n");
      break;
    }

    case(5):
    {
      printf("\n--------------------------------------------------------------------\n");
      menu_control=0;
    }
  }
  }while(menu_control==1);
  printf("Program ended succesfully");
  return 0;
}
