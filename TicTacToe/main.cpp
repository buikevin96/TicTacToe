//
//  main.cpp
//  TicTacToe
//
//  Created by Kevin Bui on 9/2/18.
//  Copyright © 2018 Kevin Bui. All rights reserved.
//

#include <iostream>
using namespace std;
char matrix[3][3] ={'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // Global variable for grid with values

// Function that won't return anything
void Draw(){
    cout << "ITCS 3112 Module 2 TIC TAC TOE" << endl;
    // Range from 0 - 2
    for (int i = 0; i<3; i++){
        // Range from 0-2
        for(int j=0;j<3;j++){
            // Print every element [row][colums]
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Prints it like a matrix
    }
}

int main() {
    Draw();
    system("pause");
    return 0;
}
// https://www.youtube.com/watch?v=xwwl8TgkwgU
// You Have a 3 x 3 Grid, with each coordinate marked with a number
// When your turn is up, it will ask you to select a number
// If you Select 5, the 5 will be replaced by your letter,in this case X,
// Then the next player will play
// He/She presses 9, it will be replaced with O
// Then next player will play and the steps repeat

// use a char matrix that is going to be 3 x 3
