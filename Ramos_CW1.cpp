//
//  main.cpp
//  29
//
//  Created by Aiden Ramos on 8/29/24.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // insert code here...
    int s1,s2,s3;
    double average;
    
    
    
    cout<<"Enter 3 test scores and I will average them: ";
    cin>> s1 >> s2 >> s3;
    
    
    average=(s1+s2+s3)/3.0;
    cout<< fixed <<showpoint << setprecision (1);
    cout<<"Your average is " <<average <<endl;
    
    if (average>95)
        cout<<" Congrats! Thats a high score! \n";
    
    
    /*/int leng,wid,area;
    
    cout<<"This program calculates the area of a ";
    cout<<"rectangle. \n";
    cout<<"What is the length of the rectangle? ";
    cin>>leng;
    cout<<"What is the width if the rectangle? ";
    cin>>wid;
    area=leng*wid;
    cout<<" The area of the rectangle is "<<area << ".\n";
    
    
    */
    //cout << "Hello, World!\n";
    return 0;
}
