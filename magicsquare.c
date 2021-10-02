#include "squareoutline.h"
//use rand function 
int number()
{
    return rand()%15;
}
//creating the squares
void createNewSquare()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            MagicSquare[i][j] = number();
        }
    }
}
//printing the squares
void printSquare()
{
    for(int i=0; i<3; i++)
    {
        printf("%s","[");
        for(int j=0; j<3; j++)
        {
            printf("%2i ",MagicSquare[i][j]);
        }
         printf("%s","]\n");
    }
    
}

//getting the sums of the rows of the magic square, ends program if the square's sum that is generated is 15
bool evaluateSquare(int MagicSquare[3][3])
{
    row1Sum = 0;
    row2Sum = 0;
    row3Sum = 0;

    column1Sum = 0;
    column2Sum = 0;
    column3Sum = 0;

    diagSum = 0;

    for (int i=0; i<3; i++)
    {
        row1Sum += MagicSquare[0][i];
        row2Sum += MagicSquare[1][i];
        row3Sum += MagicSquare[2][i];

        column1Sum += MagicSquare[i][0];
        column2Sum += MagicSquare[i][1];
        column3Sum += MagicSquare[i][2];
    }

    diagSum = MagicSquare[0][0] + MagicSquare[1][1] + MagicSquare[2][2];

    if (row1Sum == 15 && row2Sum == 15 && row3Sum == 15 && column1Sum == 15 && column2Sum == 15 && column3Sum == 15)
    {
        return true;
    }else{
        printf("Mod Result: %i\n", (row1Sum+row2Sum+row3Sum+column1Sum+column2Sum+column3Sum+diagSum)%15);
        return false;
    }
}
//using srand to create new random squares until a magic square is found
void main()
{
    srand(time(0));

    while (true)
    {
        createNewSquare();
        
        evaluateSquare(MagicSquare);

        printSquare();
        printf("%s","\n");

        iteration++;
        
        //use this function if you would like to slow down the output 
        //sleep();
    }

    printf("Total # of squares made before finding a Magic Square: %i", iteration);

    return 0;
}