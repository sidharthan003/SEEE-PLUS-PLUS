#include "ArrayMerge.cpp"
    
Array::Array(int cap) {
    size = 0;
    capacity = cap;
    arr = new int[capacity];
}

Array::Array() {
    size = 0;
    capacity = 10;
    arr = new int[capacity];
}


int  Array::getElement(int index)  {
    if (index >= 0 && index < size) {
        return arr[index];
    } else {
        cout << "Index out of bounds" << endl;
        return -1; 
    }
}


void  Array::traverseArray()  {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


bool  Array::addElement(int element) {
    if (size < capacity) {
        arr[size++] = element;
        return true;
    } else {
        cout << "Array is full" << endl;
        return false;
    }
}


int  Array::deleteElement(int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        
    } else {
        cout << "Not Available!" << endl;
      
    }
    return 0;
}


int  Array::searchElement(int element)  {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1; 
}


bool  Array::searchKey(int key)  {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}


void  Array::reverse() {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
    
void  Array::sortArray() { 
	int i,j;
	for(i=0;i<size;i++){
		
		for(j=0;j<size-i-1;j++){
			
			if(arr[j]>arr[j+1]){
				
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	
}   

