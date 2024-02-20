#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N = 5;
struct Student
{
    int id;
    string name;
    string major;
};

void makeStudent(Student *student);
void printStudent(Student *head);

void makeStudent(Student *student)
{
    ifstream ifs;
    ifs.open("students.txt"); 
    if (!ifs) {
        cerr << "File error!\n";
        exit(0);
    }

    //-> is basically the this keyword in java
    for (int i = 0; i < N; i++) {
        ifs >> (student + i) -> id >> (student + i) -> name >> (student + i) -> major;
    }
}
void printStudent(Student *student)
{
    cout << endl;
    for (int i = 0; i < N; i++) {
        cout << (student + i) -> id << " " << (student + i) -> name <<  " " << (student + i) -> major << endl;
    }
}