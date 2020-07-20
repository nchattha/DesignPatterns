
#include "Adaptee.h"

void Adaptee::setData(const Employee &data) {
    this->data = data;
}

std::string Adaptee::getDataStr() const {
    return data.name+" : "+std::to_string(data.empId)+" : "+std::to_string(data.salary);
}

Employee Adaptee::getEmpData() const {
    return data;
}
