//
// Created by Navdeep on 2020-07-18.
//

#ifndef SIMPLE_EXAMPLE_ADAPTER_H
#define SIMPLE_EXAMPLE_ADAPTER_H

#include "../Adaptee/Adaptee.h"


struct IAdapter
{
    virtual void setData(const Employee &data) = 0;
    virtual std::string getDataStr()const = 0;
};

class Adapter: public IAdapter, public Adaptee{
public:
    Adapter() = default;
    void setData(const Employee &data) override;
    std::string getDataStr() const override;
};


#endif //SIMPLE_EXAMPLE_ADAPTER_H
