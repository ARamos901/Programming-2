//
//  Aiden Ramos
//  Account Num Validation
//  HW8
//
//  Created by Aiden Ramos on 10/24/24.
//

#include <iostream>

using namespace std;

bool NumLook(int[],int,int);

const int SIZE=18;

int main() {
    
    int AccNum[SIZE]=
    {
        845,125,122,541,277,850,152,555,012,552,877,255,231,232,075,651,200,002
    };
    
    int usernum;
    
    cout <<"Please enter a 3 digit account number:  ";
    cin>>usernum;
    
    if(NumLook(AccNum,SIZE,usernum))
        cout<< "Account number is valid. \n";
    else
        cout<<"Account number is not valid\n";
    
    
    
    
    return 0;
}

bool NumLook(int arr[],int numEls,int val)
{
    bool found=false;
    int count;
    
    for (count=0;count<(numEls-1);count++){
        if(val==arr[count]){
            found=true;
            }
    
    }
    
return found;
    
}
