//
//  Hw #8
//  Aiden Ramos
//
//  Created by Aiden Ramos on 10/16/24.
//

#include <iostream>
using namespace std;


bool isMagicSquare(int square[3][3]);
int sumRow(int square[3][3], int row);
int sumColumn(int square[3][3], int col);
int sumDiagonal(int square[3][3], bool mainDiagonal);

int main() {
    int square[3][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    };

    if (isMagicSquare(square)) {
        cout << "The square is a Magic Square.\n";
    } else {
        cout << "The square is not a Magic Square.\n";
    }

    return 0;
}

// Function to check for a magic square
bool isMagicSquare(int square[3][3]) {
    int sum = sumRow(square, 0);  // sum of the first row

    // rows
    for (int i = 1; i < 3; i++) {
        if (sumRow(square, i) != sum)
            return false;
    }

    // columns
    for (int i = 0; i < 3; i++) {
        if (sumColumn(square, i) != sum)
            return false;
    }

    // diagonals
    if (sumDiagonal(square, true) != sum || sumDiagonal(square, false) != sum)
        return false;

    return true;
}

// sum for rows
int sumRow(int square[3][3], int row) {
    return square[row][0] + square[row][1] + square[row][2];
}

//sum for columns
int sumColumn(int square[3][3], int col) {
    return square[0][col] + square[1][col] + square[2][col];
}

//sum for diagonal
int sumDiagonal(int square[3][3], bool mainDiagonal) {
    if (mainDiagonal) {
        return square[0][0] + square[1][1] + square[2][2];
    } else {
        return square[0][2] + square[1][1] + square[2][0];
    }
}

