//
// Created by Navdeep on 2020-07-18.
//

#ifndef SIMPLE_EXAMPLE_ADAPTEE_H
#define SIMPLE_EXAMPLE_ADAPTEE_H
#include <string>

struct Employee{
    int empId;
    int salary;
    std::string name;
};
class Adaptee {
    Employee data;
public:
    Adaptee()= default;
    void setData(const Employee &data);
    std::string getDataStr() const;
    Employee getEmpData() const;
};


#endif //SIMPLE_EXAMPLE_ADAPTEE_H
