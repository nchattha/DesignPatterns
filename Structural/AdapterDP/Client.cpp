//
// Created by Navdeep on 2020-07-18.
//

#include "./Adapter/Adapter.h"
#include <iostream>
using namespace std;

int main()
{
    IAdapter  *adapObj = new Adapter();
    Employee emp{123,3000, "NAV"};
    adapObj->setData(emp);
    cout<<adapObj->getDataStr()<<endl;


    return EXIT_SUCCESS;
}