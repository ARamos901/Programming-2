//
//  Ramos
// Class work 09/17 (Week 4)
//
//
// read data from a file
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
    ifstream inputFile;
    string name;
    
    inputFile.open("//path here");
    
    inputFile >> name;
    cout<< name<< endl;
    
    inputFile >> name;
    cout<< name<< endl;
    
    inputFile >> name;
    cout<< name<< endl;
    
    inputFile >> name;
    cout<< name<< endl;
    
    inputFile >> name;
    cout<< name<< endl;
    
    
    
    inputFile.close();
    
    
    
    
    return 0;
}
