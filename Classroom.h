#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "Student.h"
#include "Teacher.h"
#include <string>
#include <vector>

class Classroom{
    private:
        std::string name, info, pid;
        int teacher_num, student_num, student_max;

        std::vector<Student*> students;
        std::vector<Teacher*> teachers;

    public:
        static int id;
        Classroom(std::string n, std::string inf, int t_num, int s_max);

        std::string getter_str(std::string type);
        int getter_int(std::string type);
        std::vector<Student*> get_student();
        std::vector<Teacher*> get_teacher();
};

#endif