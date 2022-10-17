#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "CourseInstructor.h"

class Administrator : public CourseInstructor{
public:
    // set the OOP teacher
    void setOOP_teacher(string teacherName){
        OOP_teacher = teacherName;
    }
    // set the Marketing teacher
    void setM_teacher(string teacherName){
        M_teacher = teacherName;
    }
    int get(){return 50;};
};
#endif