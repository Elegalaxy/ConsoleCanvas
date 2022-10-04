#include "Classroom.h"
#include <memory>
using namespace std;

vector<Student*> Classroom::get_student(){
    return students;
}

vector<Teacher*> Classroom::get_teacher(){
    return teachers;
}
