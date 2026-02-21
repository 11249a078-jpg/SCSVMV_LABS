#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    int empId;
    char name[50];
    double salary;
    static int employeeCount;  

public:

    Employee(int id, const char* empName, double sal) {
        empId = id;
        strcpy(name, empName);
        salary = sal;
        employeeCount++;
    }


    ~Employee() {
        cout << "Destructor called for Employee ID: " << empId << endl;
        employeeCount--;
    }


    void display() const {
        cout << "ID: " << empId << ", Name: " << name << ", Salary: $" << salary << endl;
    }


    static int getEmployeeCount() {
        return employeeCount;
    }
};


int Employee::employeeCount = 0;


void printSalary(const Employee& emp) {
    cout << "Salary info: ";
    emp.display();
}

int main() {
  
    Employee emp1(101, "John Doe", 55000);
    Employee emp2(102, "Jane Smith", 62000);

    cout << "Employee Details:" << endl;
    emp1.display();
    emp2.display();

    cout << "\nTotal Employees: " << Employee::getEmployeeCount() << endl;

  
    printSalary(emp1);
    printSalary(emp2);

  

    return 0;
}
