#include "Array.cpp"
int main() {
    
    Array arr1(10);
    arr1.addElement(0);
    arr1.addElement(5);
    arr1.addElement(15);
    arr1.addElement(15);
    Array arr2(10);
    arr2.addElement(30);
    arr2.addElement(25);
    arr2.addElement(40);
    arr2.addElement(35);
    
    cout << "Array elements: ";
    arr1.traverseArray();

  
    cout << "Element at index 2: " << arr1.getElement(2) << endl;

    
    arr1.deleteElement(6);
    cout << "Array after deleting element at index 6: ";
    arr1.traverseArray();

    
    int index = arr1.searchElement(15);
    if (index != -1) {
        cout << "Element 15 found at index: " << index << endl;
    } else {
        cout << "Element 15 not found" << endl;
    }

    
    bool found = arr1.searchKey(25);
    cout << "Element 25 exists: " << (found ? "Yes" : "No") << endl;

    
    arr1.reverse();
    cout << "Array after reversal: ";
    arr1.traverseArray();
    arr1.sortArray();
    cout << "Array after sorting: ";
    arr1.traverseArray();
    
    
    Array arr3 = ArrayMerge::merge(arr1,arr2);
    cout << "Merged Array :  ";
    arr3.traverseArray();
    

    return 0;
}

