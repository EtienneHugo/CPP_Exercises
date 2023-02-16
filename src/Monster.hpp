#pragma once

#include <Card.hpp>

enum class Attribute
{
    Dark,
    Divine,
    Earth,
    Fire,
    Light,
    Water,
    Wind,
};

std::string to_symbol(Attribute a)
{
    switch (a)
    {
    case Attribute::Dark:
        return u8"闇";
    case Attribute::Divine:
        return u8"神";
    case Attribute::Earth:
        return u8"地";
    case Attribute::Fire:
        return u8"炎";
    case Attribute::Light:
        return u8"光";
    case Attribute::Water:
        return u8"水";
    case Attribute::Wind:
        return u8"風";
    }
    return "";
}

class Monster : public Card
{
public:
    Monster(std::string id, std::string name, Attribute a, std::string monster_type, int atk, int def)
        : Card{id, CardType::Monster}, _attribute{a}, _monster_type{monster_type}, _atk{atk}, _def{def}
    {
        set_name(name);
    }

    Attribute get_attribute() const
    {
        return _attribute;
    }

    int get_atk() const
    {
        return _atk;
    }

    int get_def() const
    {
        return _def;
    }

    void set_description(std::string description)
    {
        Card::set_description(description);
    }

    std::string get_description() const
    {
        return "[" + _monster_type + "]\n" + Card::get_description() + "\n" + "ATK/" + std::to_string(_atk) + " DEF/" + std::to_string(_def);
    }

    private:
    Attribute _attribute;
    std::string _monster_type;
    int _atk;
    int _def;
};
