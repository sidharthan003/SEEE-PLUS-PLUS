#include <iostream>
using namespace std;

class Array {
private:
    int* arr;
    int size;
    int capacity;

    
    

public:

    Array();
    Array(int cap);
    int getElement(int index);
    void traverseArray();
    bool addElement(int element);
    int deleteElement(int index);
    int searchElement(int element);    
    bool searchKey(int key);
    void reverse();
    void sortArray();
    void mergeArray();
	int getSize()
	{
		return size;
	}	    
};

