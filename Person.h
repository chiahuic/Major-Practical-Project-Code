#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person{
private:
    string Name = "";
    int Id = 000;
    string Gender = "";
    int Age = 0;
public:
    // set the name
    void setName(string name){
        Name = name;
    }
    // get the name
    string getName(){
        return Name;
    }
    // set ID
    void setId(int id){
        Id = id;
    }
    // get ID
    int getId(){
        return Id;
    }
    // set Gender
    void setGender(string gender){
        Gender = gender;
    }
    // get gender
    string getGender(){
        return Gender;
    }
    // set age
    void setAge(int age){
        Age = age;
    }
    // get age
    int getAge(){
        return Age;
    }
};

#endif
