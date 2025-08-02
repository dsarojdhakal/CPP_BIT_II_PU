#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class student {
public:
    string name, address;
    int roll, marks;

    void add() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
        cout << "Enter address: ";
        cin >> address;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "Address: " << address << endl;
        cout << "-------------------------------" << endl;
    }
};

int main() {
    student st;
    int n;
    ofstream fout;
    ifstream fin;
    fstream f;

    cout << "Enter your choice";
    cout << "\n1. Add student\n 2. Display student\n 3. Update student";
    cin >> n;

    switch (n) {
    case 1:
        char ch;
        fout.open("demo1.dat", ios::binary | ios::app);
        cout << "Do you want to enter the data\npress y or no\n";
        cin >> ch;
        while (ch == 'y' || ch == 'Y') {
            st.add();
            fout.write((char*)&st, sizeof(st));
            cout << "Do you want to enter more data\npress y or no\n";
            cin >> ch;
        }
        fout.close();
        break;

    case 2:
        fin.open("demo1.dat", ios::binary | ios::in);
        if (!fin) {
            cout << "File not found";
        } else {
            while (fin.read((char*)&st, sizeof(st))) {
                st.display();
            }
            fin.close();
        }
        break;

    case 3:
        int r;
        cout << "Enter the roll number: ";
        cin >> r;
        cin.ignore();  

        f.open("demo1.dat", ios::binary | ios::in | ios::out);
        f.seekg(0);

        while (f.read((char*)&st, sizeof(st))) {
            if (r == st.roll) {
                st.display();
                cout << "\nEnter new values to update\n";
                st.add();
                f.seekp(-sizeof(st), ios::cur);
                f.write((char*)&st, sizeof(st));
                break;
            }
        }

        f.close();
        break;
    case 4:
    {
        int rollToDelete;
        cout << "Enter the roll number to delete: ";
        cin >> rollToDelete;
        f.open("demo1.dat", ios::binary | ios::in | ios::out);

        ofstream tempFile("temp.dat", ios::binary); // Temporary file to store records other than the one to be deleted

        while (f.read((char*)&st, sizeof(st))) {
            if (rollToDelete != st.roll) {
                tempFile.write((char*)&st, sizeof(st)); // Write records other than the one to be deleted to the temporary file
            }
        }

        f.close();
        tempFile.close();

        remove("demo1.dat"); // Remove the original file
        rename("temp.dat", "demo1.dat"); // Rename the temporary file to the original name
    }
    break;

    default:
        cout << "Invalid";
    }

    return 0;
}
