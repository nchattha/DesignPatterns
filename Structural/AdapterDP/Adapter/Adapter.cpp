//
// Created by Navdeep on 2020-07-18.
//

#include "Adapter.h"
using  namespace std;

std::string Adapter::getDataStr() const {
Employee data = Adaptee::getEmpData();
return data.name+" : "+std::to_string(data.empId);
}

void Adapter::setData(const Employee &data) {
    Adaptee::setData(data);
}
