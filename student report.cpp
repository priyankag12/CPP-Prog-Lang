#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    string subjects[5];
    float marks[5];
    float totalMarks;
    float percentage;

public:
    void inputStudentInfo() {
        cout << "Enter student name: ";
        cin>>name;
        cin.ignore(); 
        //getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore();
    }

    void inputMarksAndSubjects() {
        cout << "Enter names of 5 subjects:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin>>subjects[i];
            cin.ignore();
            //getline(cin, subjects[i]);

            cout << "Marks for " << subjects[i] << ": ";
            cin >> marks[i];
        }
    }

    void calculatePercentage() {
        totalMarks = 0.0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
        percentage = (totalMarks / 5.0);
    }

    void displayMarkSheet() {
        cout << "------------Mark Sheet------------ : " << endl;
        cout << "------------------------------------" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subject\t\tMarks" << endl;
        cout << "------------------------------------" << endl;
        for (int i = 0; i < 5; i++) {
            cout << subjects[i] << "\t\t" << marks[i] << endl;
        }
        cout << "\n" << endl;
        cout << "Total Marks: " << totalMarks << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "\n" << endl;
    }
};

int main() {
    Student student;
    student.inputStudentInfo();
    student.inputMarksAndSubjects();
    student.calculatePercentage();
    student.displayMarkSheet();

    return 0;
}