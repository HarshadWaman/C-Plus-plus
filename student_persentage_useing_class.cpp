//

#include <iostream>
#include <string>

using namespace std;


class Student {
private:
    string id;
    string name;
    string branch;
    double sub1_marks, sub2_marks, sub3_marks, sub4_marks, sub5_marks;

public:
    
    Student(string id, string name, string branch, double sub1_marks, double sub2_marks,
            double sub3_marks, double sub4_marks, double sub5_marks) {
        this->id = id;
        this->name = name;
        this->branch = branch;
        this->sub1_marks = sub1_marks;
        this->sub2_marks = sub2_marks;
        this->sub3_marks = sub3_marks;
        this->sub4_marks = sub4_marks;
        this->sub5_marks = sub5_marks;
    }

    
    string getId() { return id; }
    string getName() { return name; }
    string getBranch() { return branch; }
    double getSub1Marks() { return sub1_marks; }
    double getSub2Marks() { return sub2_marks; }
    double getSub3Marks() { return sub3_marks; }
    double getSub4Marks() { return sub4_marks; }
    double getSub5Marks() { return sub5_marks; }

    
    void setId(string id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setBranch(string branch) { this->branch = branch; }
    void setSub1Marks(double marks) { this->sub1_marks = marks; }
    void setSub2Marks(double marks) { this->sub2_marks = marks; }
    void setSub3Marks(double marks) { this->sub3_marks = marks; }
    void setSub4Marks(double marks) { this->sub4_marks = marks; }
    void setSub5Marks(double marks) { this->sub5_marks = marks; }

    
    double calculatePercentage() {
        if (this->sub1_marks == 0 && this->sub2_marks == 0 && this->sub3_marks == 0 &&
            this->sub4_marks == 0 && this->sub5_marks == 0) {
            return 100;
        } else if (this->sub1_marks + this->sub2_marks + this->sub3_marks +
                   this->sub4_marks + this->sub5_marks == 0) {
            return 0;
        } else {
            double totalMarks = this->sub1_marks + this->sub2_marks + this->sub3_marks +
                                this->sub4_marks + this->sub5_marks;
            return (totalMarks / 500) * 100;
        }
    }

    
    string determineClass(double percentage) {
        if (percentage >= 90 && percentage <= 100) {
            return "Distinction";
        } else if (percentage >= 80 && percentage < 90) {
            return "First Class";
        } else if (percentage >= 70 && percentage < 80) {
            return "Second Class";
        } else if (percentage >= 60 && percentage < 70) {
            return "Pass";
        }
        return "Fail";
    }

    
    friend ostream& operator<<(ostream& os, const Student& student) {
        os << "Student ID: " << student.id << endl;
        os << "Name: " << student.name << endl;
        os << "Branch: " << student.branch << endl;
        os << "Sub1 Marks: " << student.sub1_marks << endl;
        os << "Sub2 Marks: " << student.sub2_marks << endl;
        os << "Sub3 Marks: " << student.sub3_marks << endl;
        os << "Sub4 Marks: " << student.sub4_marks << endl;
        os << "Sub5 Marks: " << student.sub5_marks << endl;
        return os;
    }
};

int main() {
    
    Student s("101", "Harshad", "UG", 99, 98, 80, 70, 75);

    
    cout << s;

    
    double percentage = s.calculatePercentage();
    cout << "Student Percentage: " << percentage << endl;
    string className = s.determineClass(percentage);
    cout << "Student Class: " << className << endl;

    return 0;
}