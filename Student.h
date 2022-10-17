#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>

class Student : public Person{
protected:
    int Mark;
    string Course;
public:
    void setCourse(string course){
        // set the course OOP
        if(course == "OOP"){
            Course = course;
        // set the course Marketing
        }else if(course == "Marketing"){
            Course = course;
        // the invalid input
        }else{
            cout <<"This course does not exist, failed to select a course" << endl;
            Course = "unselected";
        }
    }
    virtual int get() = 0;
    // set the course
    string getCourse(){
        return Course;
    }
    // get the mark
    int getMark(){
        return Mark;
    }
};

#endif