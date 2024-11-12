//
//  Aiden Ramos
//  CW-11_12
//
//  Created by Aiden Ramos on 11/12/24.
//

#include <iostream>
using namespace std;


class Rectangle{
private:
    double width;
    double length;
    
public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

void Rectangle::setWidth(double w){
    width=w;
}

void Rectangle::setLength(double len){
    length=len;
}

double Rectangle::getWidth()const{
    return width;
}

double Rectangle::getLength()const{
    return length;
}

double Rectangle::getArea()const{
    return width*length;
}
int main() {
    Rectangle box;
    double rectWidth;
    double rectLength;
    
    cout<<"This program will calculate the area of a rectangle.\n";
    cout<<"What is the width of the rectangle ";
    cin>>rectWidth;
    cout<<"What is the length of the rectangle ";
    cin>>rectLength;
    
    box.setWidth(rectWidth);
    box.setLength(rectLength);
    
    cout<<"Here is the rectangle's data: \n";
    cout<<"Width: "<<box.getWidth()<<endl;
    cout<<"Length: "<<box.getLength()<<endl;
    cout<<"Area: "<<box.getArea()<<endl;
    
    
    
    
    
    
    return 0;
}
