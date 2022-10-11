#ifndef COURSE_H
#define COURSE_H
#include"CourseInstructor.h"

class Course : public CourseInstructor{
private:
    int ObjectOrientedProgramming = OOP_number;
    int Marketing = M_number;
public:
    string getOOP_teacher(){
        return OOP_teacher;
    }
    string getM_teacher(){
        return M_teacher;
    }
    int getM_Number(){
        return ObjectOrientedProgramming;
    }
    int getE_Number(){
        return Marketing;
    }
};
#endif