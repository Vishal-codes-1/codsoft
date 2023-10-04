#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<string> names;
    vector<double> grades;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        double grade;

        cout << "Enter the name of student " << i + 1 << ": ";
        cin.ignore(); 
        getline(cin, name);

        cout << "Enter the grade of student " << i + 1 << ": ";
        cin >> grade;

        names.push_back(name);
        grades.push_back(grade);
    }

    double sum = 0;
    double highestGrade = grades[0];
    double lowestGrade = grades[0];

    for (double grade : grades) {
        sum += grade;
        highestGrade = max(highestGrade, grade);
        lowestGrade = min(lowestGrade, grade);
    }

    double average = sum / numStudents;

    cout << "\nStudent Grades Summary:" <<endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Name: " << names[i] << "\tGrade: " << grades[i] <<endl;
    }

    cout << "\nAverage Grade: " << average <<endl;
    cout << "Highest Grade: " << highestGrade <<endl;
    cout << "Lowest Grade: " << lowestGrade <<endl;

    return 0;
}
