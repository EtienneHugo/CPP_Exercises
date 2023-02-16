#pragma once

#include <string>

enum class SpellType
{
    Normal,
    Equip,
    Continuous,
    QuickPlay,
    Field,
};

std::string to_string(SpellType type)
{
    switch (type)
    {
    case SpellType::Normal:
        return "Normal";
    case SpellType::Equip:
        return "Equip";
    case SpellType::Continuous:
        return "Continuous";
    case SpellType::QuickPlay:
        return "QuickPlay";
    case SpellType::Field:
        return "Field";
    }
}

class Spell : public Card
{
}