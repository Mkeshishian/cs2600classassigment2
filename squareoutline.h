#ifndef SQUAREOUTLINE_H
#define SQUAREOUTLINE_H

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <stdbool.h>

//Declaring variables and making a 2d array for the square
bool foundSquare;
int MagicSquare[3][3];
int iteration;

int number();

//row and col sums
int row1Sum;
int row2Sum;
int row3Sum;

int column1Sum;
int column2Sum;
int column3Sum;

int diagSum;

void createNewSquare();
void printSquare();
bool evaluateSquare();

#endif