#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Calender.h"
#include <string>

class Account{
    protected:
        std::string name, address, password, email, pid, type;
        int age;
        Calender calender;

    public:
        static int id;

        Account(std::string type, std::string n, std::string ad, std::string pas, std::string em, int age);

        //getter
        int get_age();
        std::string getter(std::string type);
        Calender get_cal();

        //setter
        void set_age(int v);
        void setter(std::string type, std::string v);
        void set_cal(Calender val);
};

#endif