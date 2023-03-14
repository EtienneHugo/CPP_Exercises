#pragma once

#include "Leaf.hpp"
#include "Node.hpp"

class IntLeaf : public Leaf
{
private:
    int _data;

public:

    IntLeaf(int data)
        : _data { data }
    {}
};