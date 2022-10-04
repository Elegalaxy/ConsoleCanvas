#ifndef TASK_H
#define TASK_H

#include <ctime>
#include <string>

class Task{
    private:
        std::string title, content, pid;
        time_t create_date, finish_date;
    
    public:
        static int id;

        Task(std::string t, std::string c, time_t f_d);

        //setter
        void setter(std::string type, std::string val);
        void set_finish(time_t val);

        //getter
        std::string getter(std::string type);
        time_t get_time(std::string type);
};

#endif