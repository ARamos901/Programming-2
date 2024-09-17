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
    
    inputFile.open("/Users/aidenramos/Desktop/Junior/Programming 2/Class Work/CW-09_17/names.txt");
    
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
