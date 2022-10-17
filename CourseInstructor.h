#ifndef COURSEINSTRUCTOR_H
#define COURSEINSTRUCTOR_H
#include"Student.h"

class CourseInstructor : public Student{
public:
    // the name of the instructor
    string OOP_teacher = "Andrew";
    string M_teacher = "Alan";
public:
    // set the mark
    void setMark(int mark){
        Mark = mark;
    }
};

#endif