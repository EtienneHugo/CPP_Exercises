#pragma once
#include <string>

class PlushStore
{
public:
    PlushStore(const std::string &init){
        _name = init;
        _wealth = 0;
        _stock = 0;
    }

    std::string get_name() const{
        return _name;
    }

    int get_wealth_amount() const{
        return _wealth;
    }

    int get_stock_size() const{
        return _stock;
    }

    void loan(int amount){
        _wealth += amount;
    }

    int get_debt_amount() const{
        return _wealth + _wealth/10;
    }

    void make_plush(int cost){
        if(_wealth != 0){
            _wealth -= cost;
            if(_wealth < 0){
                _wealth = 0;
            }
            _stock += 1;
        }
    }

private:
    std::string _name;
    int _wealth;
    int _stock;
};