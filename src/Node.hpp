#pragma once

#include "InstanceCounter.hpp"

#include <string>

class Node : public InstanceCounter
{
private:
public:
    // virtual int abstract() = 0;
    virtual std::string print() const = 0;
};