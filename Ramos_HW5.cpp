//
//  Aiden Ramos
//  Homework 5
//  Ramos_HW5
//
//
//

#include <iostream>
using namespace std;


bool isPrime(int);
    
int main() {
    
    int usernum;
    
    
    cout<<"Enter the number you woukd like to check: ";
    cin>>usernum;
    
    if (isPrime(usernum))
        cout<< usernum<<" is a prime number. \n";
    else
        cout<<usernum<< " is not a prime number. \n";
    
    
    return 0;

}
bool isPrime(int usernum) {
    int checker = 1;
    int count = 0;
    bool status;
        
        while (checker <= usernum) {
            if (usernum % checker == 0) {
                count += 1;
            }
            checker += 1;
        }

        if (count == 2) {
            status=true;
        } else {
            status=false;
        }
    return status;
    }
    
    

