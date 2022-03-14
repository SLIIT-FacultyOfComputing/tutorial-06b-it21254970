#include "Student.h"
#include <cstring>
#include <iostream>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stNo, char stName[]) {
  studentId = stNo;
  strcpy (name ,stName);
}

// Display StudentId and Name
void Student::display() {
  cout << "StudentId :" << studentId << endl;
  cout << "Student name :" << name << endl;
}
