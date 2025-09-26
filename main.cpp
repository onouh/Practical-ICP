//
//  main.cpp
//  Practical Computer Programming
//
//  Created by Omar Nouh on 12/21/24.
//

#include <iostream>
using namespace std;

const int _size = 3;
void SwapRows(int Arr[][_size], int row1, int row2);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int Arr[_size][_size];
    cout << "enter values of 3x3 matrix" << endl;
    for (int i = 0; i < _size; i++) {
        for (int j = 0; j < _size; j++) {
            cin >> Arr[i][j];
        }
    }
    int row1 = 0, row2 = 0;
    while (true) {
        cout << "enter value of first row: ";
        cin >> row1;
        if (row1 <= _size && row1 > 0) {
            break;
        }
        cout << "invalid row number, please stay within the boundries of 1 to 3 :) " << endl;
    }
    while (true) {
        cout << "enter value of second row: ";
        cin >> row2;
        if (row2 <= _size && row2 > 0) {
            break;
        }
        cout << "invalid row number, please stay within the boundries of 1 to 3 :) " << endl;
    }
    
    SwapRows(Arr, row1, row2);
    
    
    return 0;
}

void SwapRows(int Arr[_size][_size], int row1, int row2) {
    int firstRow = row1 - 1;
    int secondRow = row2 - 1;
    for (int h = 0; h < _size; h++) {
        int temp = Arr[firstRow][h];
        Arr[firstRow][h] = Arr[secondRow][h];
        Arr[secondRow][h] = temp;
    }
    cout << "matrix after swap" << endl;
    for (int i = 0; i < _size; i++) {
        for (int j = 0; j < _size; j++) {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }
}
