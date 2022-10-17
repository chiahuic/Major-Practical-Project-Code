#ifndef SYSTEM1_H
#define SYSTEM1_H
#include <iostream>

using namespace std;

class System1{
public:
    void print(){
        //the user menu
        cout << "Welcome to the Management System" << endl;
        cout << "0.Exit the system" << endl;
        cout << "1.Add the student information" << endl;
        cout << "2.Delete all student information" << endl;
        cout << "3.Edit the students' mark'" << endl;
        cout << "4.Display the student information" << endl;
        cout << "5.Display the course information" << endl;
        cout << "6.Edit the course instructor information" << endl;
        cout << "Please enter the number 0 to 6 proceed  to the next step" << endl;
        cout <<"-------------------------------------------------------------"<< endl;
    }
};
#endif