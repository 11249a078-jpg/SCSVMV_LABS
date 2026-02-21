#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    int id;
    char name[50];
    int age;
    static int studentCount; 

public:
    
    inline Student() {
        id = 0;
        strcpy(name, "NoName");
        age = 0;
        studentCount++;
    }

    
    inline Student(int sid, const char* sname, int sage) {
        id = sid;
        strcpy(name, sname);
        age = sage;
        studentCount++;
    }

    
    ~Student() {
        
        cout << "Destructor called for Student ID: " << id << endl;
        studentCount--;
    }

    
    inline void setData(int sid, const char* sname, int sage) {
        id = sid;
        strcpy(name, sname);
        age = sage;
    }

    inline void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Age: " << age << endl;
    }

    inline int getId() const {
        return id;
    }

    
    static int getStudentCount() {
        return studentCount;
    }
};


int Student::studentCount = 0;


void printStudent(Student s) {
    cout << "Student Info (from function): ";
    s.display();
}


Student createStudent(int id, const char* name, int age) {
    Student temp(id, name, age);
    return temp;
}

int main() {
    const int MAX_STUDENTS = 3;

    
    Student students[MAX_STUDENTS]; 

    
    students[0].setData(101, "Alice", 20);
    students[1].setData(102, "Bob", 21);
    students[2] = createStudent(103, "Charlie", 22); 

    cout << "\nAll Students:" << endl;
    for (int i = 0; i < MAX_STUDENTS; i++) {
        students[i].display();
    }

    cout << "\nTotal number of students: " << Student::getStudentCount() << endl;

    
    printStudent(students[1]);

    

    return 0;
}
