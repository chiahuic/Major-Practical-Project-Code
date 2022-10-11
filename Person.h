#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person{
private:
    string Name;
    int Id;
    string Gender;
    int Age;
    string _faculty;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setId(int id){
        Id = id;
    }
    int getId(){
        return Id;
    }
    void setGender(string gender){
        Gender = gender;
    }
    string getGender(){
        return Gender;
    }
    void setAge(int age){
        Age = age;
    }
    int getAged(){
        return Age;
    }
};

#endif
