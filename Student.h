#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>

class Student : public Person{
protected:
    int Mark;
    string Course;
    int OOP_number = 0;
    int M_number = 0;
public:
    void setCourse(string course){
        if(Course == "Object Oriented Programming"){
            OOP_number++;
            Course = course;
        }else if(Course == "Marketing"){
            M_number++;
            Course = course;
        }else{
            cout <<"This course does not exist" << endl;
        }
    }
    string getCourse(){
        return Course;
    }
    int getMark(){
        return Mark;
    }
};

#endif