#ifndef COURSE_H
#define COURSE_H
#include"CourseInstructor.h"

class Course : public CourseInstructor{
private:
    int ObjectOrientedProgramming;
    int Marketing;
public:
    // get the name of OOP teacher
    string getOOP_teacher(){
        return OOP_teacher;
    }
    // get the name of Marketing teacher
    string getM_teacher(){
        return M_teacher;
    }
    int get(){return Mark;};
};
#endif