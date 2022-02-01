// Copyright (c) 2022 Alexander Matheson All rights reserved.

// Created by: Alexander Matheson
// Created on: Feb 1 2022
// This program generates random numbers,
// puts these numbers into a 2D array and calculates the average.
#include <iostream>
#include <time.h>

// declare constants
const int ROWS = 10;
const int COLUMNS = 3;
const int MIN_NUM = 1;
const int MAX_NUM = 50;

// don't know what this does
template <int rows, int cols>
// function to calculate average
float CalcAverage(int (&numList)[rows][cols]) {
    // declare variables
    float total = 0;
    float counter = 0;
    float average;
    // add up elements
    for (size_t currentRow = 0; currentRow < rows; ++currentRow) {
        for (size_t currentColumn = 0; currentColumn < cols; ++currentColumn) {
            total += numList[currentRow][currentColumn];
            counter += 1;
        }
    }
    // calculate and return average
    average = total / counter;
    return average;
}


int main() {
    // declare variables
    int randNum;
    float averageMain;
    int array2D[ROWS][COLUMNS];

    // don't know what this does
    srand(time(NULL));

    // generate random numbers and add them to array
    for (int rowElement = 0; rowElement < ROWS; rowElement++) {
        for (int columnElement = 0; columnElement < COLUMNS; columnElement++) {
            randNum = (rand() % MAX_NUM) + MIN_NUM;
            array2D[rowElement][columnElement] = randNum;
            std::cout << randNum << ", ";
        }
        std::cout << std::endl;
    }

    // display average
    averageMain = CalcAverage(array2D);
    std::cout << "The average is: " << averageMain << std::endl;
}
