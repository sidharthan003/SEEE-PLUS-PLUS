#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    
    ofstream f("abc.txt", ios::out);
    if (f.is_open()) {
        
        f << "The name is Bean!" << endl;
        f.close();
        cout << "Data written!!" << endl;
    }

    
    ifstream fin("abc.txt", ios::in);
    if (fin.is_open()) {
        string content;
        cout << "Content of the file:" << endl;
        while (getline(fin, content)) {
            cout << content << endl; 
        }
        
        fin.close();
    } 

    return 0;
}

