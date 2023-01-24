#pragma once

class Plush
{
public:
    Plush(){
        _cost = 10;
    }

    Plush(const int &init)
    {
        _cost = init;
    }

    int get_cost() const
    {
        return _cost;
    }

    void set_cost(int new_cost)
    {
        _cost = new_cost;
    }

private:
    int _cost;
};