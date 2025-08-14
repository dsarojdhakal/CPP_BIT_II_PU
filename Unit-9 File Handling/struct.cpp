#include <iostream>
#include <fstream>

using namespace std;

struct Student {
    int rollNumber;
    string name;
    float marks;
};

int main() {
    Student students[] = {
        {1, "Alice", 85.5},
        {2, "Bob", 92.0},
        {3, "Charlie", 78.5}
    };

    ofstream outFile("students.dat");

    if (!outFile.is_open()) {
        cerr << "Error opening the file for writing." << endl;
        return 1;
    }

    outFile.write(reinterpret_cast<char*>(&students), sizeof(students));

    outFile.close();

    ifstream inFile("students.dat");

    if (!inFile.is_open()) {
        cerr << "Error opening the file for reading." << endl;
        return 1;
    }

    Student readStudents[3];
    inFile.read(reinterpret_cast<char*>(&readStudents), sizeof(readStudents));

    inFile.close();

    for (const auto& student : readStudents) {
        cout << "Roll Number: " << student.rollNumber << "\tName: " << student.name
                  << "\tMarks: " << student.marks << endl;
    }

    return 0;
}
