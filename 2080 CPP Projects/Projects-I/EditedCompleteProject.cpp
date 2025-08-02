#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

struct SalaryRecord {
    int month;
    int year;
    float salary;

    void Display() const {
        cout << month << "/" << year << ": " << salary << endl;
    }
};

class Employee {
private:
    char name[30];
    int id;
    char phone[15];
    char email[50];
    char address[100];
    float salary;
    vector<SalaryRecord> salaryHistory;

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
        cout << "Enter Current Salary: ";
        cin >> salary;
        cin.ignore();
    }

    void DisplayData() const {
        cout << id << "\t" << name << "\t" << phone << "\t" << email << "\t" << address << "\t" << salary << endl;
    }

    int getId() const {
        return id;
    }

    void UpdateRecord() {
        cout << "Update Name: ";
        cin.getline(name, 30);
        cout << "Update Phone Number: ";
        cin.getline(phone, 15);
        cout << "Update Email: ";
        cin.getline(email, 50);
        cout << "Update Address: ";
        cin.getline(address, 100);
        cout << "Update Current Salary: ";
        cin >> salary;
        cin.ignore();
    }

    float getSalary() const {
        return salary;
    }

    void setSalary(float new_salary) {
        salary = new_salary;
    }

    void AddSalaryRecord(int month, int year, float salary) {
        SalaryRecord record = {month, year, salary};
        salaryHistory.push_back(record);
    }

    void DisplaySalaryHistory() const {
        cout << "Salary History for Employee ID: " << id << endl;
        if (salaryHistory.empty()) {
            cout << "No salary records available." << endl;
        } else {
            for (const auto& record : salaryHistory) {
                record.Display();
            }
        }
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
        cerr << "Error: Could not open file for reading." << endl;
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
    int search_id;
    bool found = false;
    Employee emp;
    ClearScreen();
    cout << "Enter Employee ID to Update: ";
    cin >> search_id;
    cin.ignore();
    fstream file("employee.dat", ios::binary | ios::in | ios::out);
    if (!file) {
        cerr << "Error: Could not open file for updating." << endl;
        return;
    }
    while (file.read((char *)&emp, sizeof(emp))) {
        if (emp.getId() == search_id) {
            found = true;
            cout << "Current Details:" << endl;
            emp.DisplayData();
            cout << "Enter New Details:" << endl;
            emp.UpdateRecord();
            file.seekp(-static_cast<int>(sizeof(emp)), ios::cur);
            file.write((char *)&emp, sizeof(emp));
            break;
        }
    }
    if (!found) {
        cout << "Record with ID " << search_id << " not found.\n";
    }
    file.close();
}

void DeleteRecord() {
    int delete_id;
    bool found = false;
    Employee emp;
    ClearScreen();
    cout << "Enter Employee ID to Delete: ";
    cin >> delete_id;
    cin.ignore();
    ifstream inFile("employee.dat", ios::binary);
    ofstream outFile("temp.dat", ios::binary);
    if (!inFile || !outFile) {
        cerr << "Error: Could not open file for deleting." << endl;
        return;
    }
    while (inFile.read((char *)&emp, sizeof(emp))) {
        if (emp.getId() == delete_id) {
            found = true;
            cout << "Deleting Record with ID " << delete_id << "...\n";
        } else {
            outFile.write((char *)&emp, sizeof(emp));
        }
    }
    inFile.close();
    outFile.close();
    remove("employee.dat");
    rename("temp.dat", "employee.dat");
    if (!found) {
        cout << "Record with ID " << delete_id << " not found.\n";
    }
}

void AddOvertimeSalary() {
    int search_id, extra_hours;
    bool found = false;
    const float overtime_rate = 500;
    Employee emp;

    ClearScreen();
    cout << "Enter Employee ID to Add Overtime Salary: ";
    cin >> search_id;
    cin.ignore();

    fstream file("employee.dat", ios::binary | ios::in | ios::out);
    if (!file) {
        cerr << "Error: Could not open file for updating salary." << endl;
        return;
    }

    while (file.read((char *)&emp, sizeof(emp))) {
        if (emp.getId() == search_id) {
            found = true;
            cout << "Enter Extra Hours Worked: ";
            cin >> extra_hours;
            cin.ignore();
            float additional_salary = extra_hours * overtime_rate;
            float new_salary = emp.getSalary() + additional_salary;
            emp.setSalary(new_salary);
            file.seekp(-static_cast<int>(sizeof(emp)), ios::cur);
            file.write((char *)&emp, sizeof(emp));
            cout << "Overtime salary added. New Salary: " << new_salary << endl;
            break;
        }
    }

    if (!found) {
        cout << "Record with ID " << search_id << " not found.\n";
    }

    file.close();
}

void AddMonthlySalary() {
    int search_id, month, year;
    float salary;
    bool found = false;
    Employee emp;

    ClearScreen();
    cout << "Enter Employee ID to Add Monthly Salary: ";
    cin >> search_id;
    cin.ignore();

    fstream file("employee.dat", ios::binary | ios::in | ios::out);
    if (!file) {
        cerr << "Error: Could not open file." << endl;
        return;
    }

    while (file.read((char *)&emp, sizeof(emp))) {
        if (emp.getId() == search_id) {
            found = true;

            cout << "Enter Month (1-12): ";
            cin >> month;
            cout << "Enter Year: ";
            cin >> year;
            cout << "Enter Salary for the Month: ";
            cin >> salary;
            cin.ignore();

            emp.AddSalaryRecord(month, year, salary);
            file.seekp(-static_cast<int>(sizeof(emp)), ios::cur);
            file.write((char *)&emp, sizeof(emp));
            cout << "Monthly salary added successfully.\n";
            break;
        }
    }

    if (!found) {
        cout << "Record with ID " << search_id << " not found.\n";
    }

    file.close();
}

void DisplaySalaryHistory() {
    int search_id;
    bool found = false;
    Employee emp;

    ClearScreen();
    cout << "Enter Employee ID to View Salary History: ";
    cin >> search_id;
    cin.ignore();

    ifstream file("employee.dat", ios::binary);
    if (!file) {
        cerr << "Error: Could not open file." << endl;
        return;
    }

    while (file.read((char *)&emp, sizeof(emp))) {
        if (emp.getId() == search_id) {
            found = true;
            emp.DisplaySalaryHistory();
            break;
        }
    }

    if (!found) {
        cout << "Record with ID " << search_id << " not found.\n";
    }

    file.close();
}

bool Login() {
    const string validUsername = "admin";
    const string validPassword = "1234";
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
        ClearScreen();
        cout << "\nMain Menu\n";
        cout << "1. Add New Record\n";
        cout << "2. Display Records\n";
        cout << "3. Update Record\n";
        cout << "4. Delete Record\n";
        cout << "5. Add Monthly Salary\n";
        cout << "6. Display Salary History\n";
        cout << "7. Exit\n";
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
                AddMonthlySalary();
                break;
            case 6:
                DisplaySalaryHistory();
                break;
            case 7:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);
}

int main() {
    while (!Login()) {}
    MainMenu();
    return 0;
}
