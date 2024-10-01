//
//  Class work week 6
//  Aiden Ramos
//  Ramos_CW6
//
//
//
#include <iostream>
using namespace std;


void doubleNum(int &);

int main() {
    
    int value=4;
    
    cout<<" In main, value is " <<value<< endl;
    
    cout<<"Now calling doubleNum.."<< endl;
    
    doubleNum(value);
    
    cout << "Now back in main. Value is " <<value<< endl;
    
    return 0;
}

void doubleNum(int &w)
{
    w*=2;
}
