#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "CourseInstructor.h"

class Administrator : public CourseInstructor{
public:
    void setOOP_teacher(string teacherName){
        OOP_teacher = teacherName;
    }
    void setM_teacher(string teacherName){
        M_teacher = teacherName;
    }

};
#endif