#include <iostream>
#include "Course.h"
#include "Administrator.h"
#include "Student.h"
#include "CourseInstructor.h"
#include "Person.h"
#include "System1.h"

using namespace std;


int main(){
    int count = 0;
    int loop = 1;
    Administrator c;
    System1 d;
    Course *a = new Course[10];
    Course *b = new Course[10];
    d.print();
    while( loop != 0){
        string num1;
        cin >> num1;
        if(num1 == "0"){
            cout << "Exit the system successfully" << endl;
            delete [] a;
            delete [] b;
            return 0;
        }else if(num1 == "1"){
            if(count < 11){
                string name, gender, faculty, course;
                int id, age;
                cout << "enter the name" << endl;
                cin >> name;
                a[count].setName(name);
                cout  << "enter id" << endl;
                cin >> id;
                a[count].setId(id);
                cout  << "enter gender" << endl;
                cin >> gender;
                a[count].setGender(gender);
                cout << "enter the age" << endl;
                cin >> age;
                a[count].setAge(age);
                cout << "enter the course" << endl;
                cin >> course;
                a[count].setCourse(course);
                cout << "Please enter the number 0 to 6 proceed  to the next step" << endl;
                count++;
            }
        }else if(num1 == "2"){
            a = b;
            cout << "All student information deleted successfully" << endl;
            count = 0;
            cout << "Please enter the number 0 to 6 proceed  to the next step" << endl;
        }else if(num1 == "3"){
            string studentName;
            cout << "enter the student's name" <<endl;
            cin >> studentName;
            int j = 100;
            for(int i = 0; i<10; i++){
                if(a[i].getName() == studentName){
                    j = i;
                }
            }
            if(j != 100){
                cout << "enter the student's mark" << endl;
                int mark;
                cin >> mark;
                a[j].setMark(mark);
                cout << "Please enter the number 0 to 6 proceed  to the next step" << endl;
            }else{
                cout << "this student does not exit" << endl;
                cout << "Please re-enter the number 0 to 6" << endl;    
            }
        }else if(num1 == "4" && a[0].getAge() == 0){
            cout << "No student information has been stored" << endl;
            cout << "Please enter the number 0 to 6 proceed  to the next step" << endl;
        }else if(num1 == "4" || a[0].getAge() != 0){
            for(int i = 0; i<count; i++){
                cout << "Name :" << a[i].getName() <<"  ID :"<< a[i].getId() <<endl;
                cout << "Age :" << a[i].getAge() << "   Gender :" << a[i].getGender() <<endl;
                cout << "Course :" << a[i].getCourse() << "  Mark :" <<a[i].getMark() <<endl;
                cout <<"-----------------------------------"<< endl;
            }
            cout << "Please enter the number 0 to 6 proceed  to the next step" << endl;
        }else if(num1 == "5"){
            cout << "Course instructors" << endl;
            cout << "OOP: " << a->getOOP_teacher() << endl;
            cout << "Marketing: " << a->getM_teacher()<< endl;
            cout <<"-----------------------------------"<< endl;
            cout << "Please enter the number 0 to 6 proceed  to the next step" << endl;
        }else if(num1 == "6"){
            string OOP;
            string Marketing;
            cout << "Enter the name of OOP teacher" << endl;
            cin >> OOP;
            c.setOOP_teacher(OOP);
            a->OOP_teacher = c.OOP_teacher;
            cout << "Enter the name of Marketing teacher" << endl;
            cin >> Marketing;
            c.setM_teacher(Marketing);
            a->M_teacher = c.M_teacher;
        }else{
            cout << "Invalid input" << endl;
            cout << "Please enter the number again" << endl;
        }
    }
    return 0;
}



