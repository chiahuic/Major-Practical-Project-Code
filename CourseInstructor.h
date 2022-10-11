#ifndef COURSEINSTRUCTOR_H
#define COURSEINSTRUCTOR_H
#include"Student.h"

class CourseInstructor : public Student{
protected:
    string OOP_teacher = "A";
    string M_teacher = "B";
public:
    void setMark(int mark){
        Mark = mark;
    }
};

#endif