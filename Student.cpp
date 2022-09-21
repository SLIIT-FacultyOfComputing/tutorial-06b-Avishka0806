#include "Student.h"
#include <iostream>
#include "string.h"
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id,char sName[]) 
{
  studentId = id;
  strcpy (name,sName); //arryas
}

// Display StudentId and Name
void Student::display() 
{
  cout<<"Name        :"<<name<<endl;
  cout<<"Student Id  :"<<studentId<<endl;
}
