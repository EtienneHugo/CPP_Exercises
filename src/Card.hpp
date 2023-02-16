#pragma once

#include <string>

enum class CardType
{
    Monster,
    Spell,
    Trap,
};

std::string to_string(const CardType ct)
{
    switch (ct)
    {
    case CardType::Monster:
        return "Monster";

    case CardType::Spell:
        return "Spell";

    case CardType::Trap:
        return "Trap";
    }
    return "";
}

class Card
{
public:
    explicit Card(std::string id, CardType type)
        : _id{id}, _type{type}
    {
    }

    std::string get_id() const
    {
        return _id;
    }

    CardType get_type() const
    {
        return _type;
    }

    std::string get_name() const
    {
        return _name;
    }

    std::string get_description() const
    {
        return _description;
    }

    void set_name(std::string name)
    {
        _name = name;
    }

    void set_description(std::string description)
    {
        _description = description;
    }

private:
    std::string _id;
    CardType _type;
    std::string _name = "";
    std::string _description = "";
};