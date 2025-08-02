#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

class Employee {
private:
    char name[30];
    int id;
    char phone[15];
    char email[50];
    char address[100];
    float salary;

public:
    void InputData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Name: ";
        cin.getline(name, 30);
        cout << "Enter Phone Number: ";
        cin.getline(phone, 15);
        cout << "Enter Email: ";
        cin.getline(email, 50);
        cout << "Enter Address: ";
        cin.getline(address, 100);
        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore();
    }

    void DisplayData() const {
        cout << id << "\t" << name << "\t" << phone << "\t" << email << "\t" << address << "\t" << salary << endl;
    }

    int getId() const {
        return id;
    }

};

void ClearScreen() {
    system("clear");
}

void AddNewRecord() {
    int check_id;
    bool duplicate = false;
    Employee emp;
    ClearScreen();
    emp.InputData();
    check_id = emp.getId();
    ifstream inFile("employee.dat", ios::binary);
    if (!inFile) {
        cerr << "Error: Could not open file for reading. Assuming no existing records.\n";
    } else {
        Employee temp;
        while (inFile.read((char *)&temp, sizeof(temp))) {
            if (temp.getId() == check_id) {
                duplicate = true;
                break;
            }
        }
        inFile.close();
    }
    if (!duplicate) {
        ofstream outFile("employee.dat", ios::binary | ios::app);
        if (!outFile) {
            cerr << "Error: Could not open file for writing." << endl;
            return;
        }
        outFile.write((char *)&emp, sizeof(emp));
        outFile.close();
    } else {
        cout << "Duplicate ID found. Record not added.\n";
    }
}

void DisplayFileRecords() {
    ClearScreen();
    ifstream inFile("employee.dat", ios::binary);
    if (!inFile) {
        cerr << "Could not open file for reading." << endl;
        return;
    }
    Employee emp;
    cout << "\n\nID\tName\tPhone\tEmail\tAddress\tSalary\n";
    while (inFile.read((char *)&emp, sizeof(emp))) {
        emp.DisplayData();
    }
    inFile.close();
}

void UpdateRecord() {
//write your code here.
}

void DeleteRecord() {
   //write your code here.
}

bool Login() {
    const string validUsername = "aaaa";
    const string validPassword = "1111";
    string username, password;
    cout << "Login Page\n";
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    if (username == validUsername && password == validPassword) {
        cout << "Login Successful!\n";
        return true;
    } else {
        cout << "Invalid Username or Password. Please try again.\n";
        return false;
    }
}

void MainMenu() {
    int choice;
    do {
        cout << "\nMain Menu\n";
        cout << "1. Add New Record\n";
        cout << "2. Display Records\n";
        cout << "3. Update Record\n";
        cout << "4. Delete Record\n";
        cout << "5. Add Overtime Salary\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                AddNewRecord();
                break;
            case 2:
                DisplayFileRecords();
                break;
            case 3:
                UpdateRecord();
                break;
            case 4:
                DeleteRecord();
                break;
            case 5:
               //call requird  function.
                break;
            case 6:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);
}

int main() {
    while (!Login()) {}
    MainMenu();
    return 0;
}
