//
//  HW 7
//
//  Aiden Ramos
//
//  Created by Aiden Ramos on 10/10/24.
//

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void getLowestAndHighest(const double numbers[], int size, double &lowest, double &highest);

int main()
{
    const int SIZE = 10;
    double numbers[SIZE];
    double lowest, highest;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> numbers[i];
    }

    getLowestAndHighest(numbers, SIZE, lowest, highest);
    
    cout << "The lowest number is: " << lowest << endl;
    cout << "The highest number is: " << highest << endl;

    return 0;
}

void getLowestAndHighest(const double numbers[], int size, double &lowest, double &highest)
{
    lowest = numbers[0];
    highest = numbers[0];

    for (int count = 1; count < size; count++)
    {
        if (numbers[count] < lowest)
            lowest = numbers[count];
        if (numbers[count] > highest)
            highest = numbers[count];
    }
}


