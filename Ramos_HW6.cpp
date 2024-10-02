//
//  Homework 6
//  Ramos_HW6
//
//  Created by Aiden Ramos on 10/2/24.
//

#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int);

int recur_call(int);

int main() {
    
    recur_call(2);

    return 0;
}

// Recursive call for number
int recur_call(int cur_num) {
    ofstream outputFile;
    
    //base case to stop loop
    if (cur_num>100){
        // Letting user know the code is done running
        cout << "Done!" << endl;
        return 0;
    }
    
    if (isPrime(cur_num)){
                                                    //The "ios::app" makes it so the nums
                                                    //list and do not overwite eachother
        outputFile.open("/Users/aidenramos/Desktop/Junior/Programming 2/Assignemnts/HW6/Ramos_HW6/Ramos_HW6/RamosList.txt",ios::app);
        outputFile<<cur_num<<endl;
        outputFile.close();
    }
    return recur_call(cur_num+1);
}
    
// Checks if current number is prime
bool isPrime(int cur_num) {
    int checker = 1;
    int count = 0;
    bool status;
    
    while (checker <= cur_num) {
        if (cur_num % checker == 0) {
            count += 1;
        }
        checker += 1;
    }

    if (count == 2) {
        status = true;
    } else {
        status = false;
    }
    
    return status;
}

