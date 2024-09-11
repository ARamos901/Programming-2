//
//  main.cpp
//  HW2
//
//  Created by Aiden Ramos on 9/4/24.
//

#include <iostream>
using namespace std;

int main() {
    int rect1_L,rect1_W;
    
    int rect2_L,rect2_W;
    
    int area_rect1,area_rect2;
    
    cout <<" Enter the length and width for rectangle 1: ";
    cin>> rect1_L >> rect1_W;
    
    cout <<" Enter the length and width for rectangle 2: ";
    cin>> rect2_L >> rect2_W;
    
    area_rect1=rect1_L*rect1_W;
    
    area_rect2=rect2_L*rect2_W;
    
    if (area_rect1>area_rect2)
        cout <<" rectangle 1 has a bigger area than rectangle 2 with an area of " <<area_rect1 << "\n";
    
    else if (area_rect2>area_rect1)
        cout <<" rectangle 2 has a bigger area than rectangle 1 with a area of " <<area_rect2<< "\n";
    else
        cout<<"The two rectangles have the same area with the area of " <<area_rect1<< "\n";
        
        
    
    
    
    
    return 0;
}
