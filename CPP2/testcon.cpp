#include <iostream>
using namespace std;

// Forward declaration of class UniversityMarks
class UniversityMarks;

class InternalMarks {
private:
    int marks[5]; // Internal marks for 5 subjects

public:
    void inputInternalMarks() {
        cout << "Enter internal marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    // Declaring friend function
    friend void prepareMarkList(InternalMarks, UniversityMarks);
};

class UniversityMarks {
private:
    int marks[5]; // University marks for 5 subjects

public:
    void inputUniversityMarks() {
        cout << "Enter university marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    // Declaring friend function
    friend void prepareMarkList(InternalMarks, UniversityMarks);
};

// Friend function to calculate and display total marks
void prepareMarkList(InternalMarks internal, UniversityMarks university) {
    int totalMarks[5];
    cout << "\nMark List:" << endl;
    cout << "Subject\tInternal\tUniversity\tTotal" << endl;
    for (int i = 0; i < 5; i++) {
        totalMarks[i] = internal.marks[i] + university.marks[i];
        cout << (i + 1) << "\t" << internal.marks[i] << "\t\t" << university.marks[i] << "\t\t" << totalMarks[i] << endl;
    }
}

int main() {
    InternalMarks internal;
    UniversityMarks university;

    // Input marks for internal and university
    internal.inputInternalMarks();
    university.inputUniversityMarks();

    // Prepare and display the mark list using the friend function
    prepareMarkList(internal, university);

    return 0;
}
