#pragma once
#include "E_Armor_Types.h"
#include<ostream>
class C_Armor
{
public:
	C_Armor()
	{
		this->type = ARMOR_TYPE_HEAVY;
	}
	C_Armor(E_Armor_Types type)
	{
		this->type = type;
	}
	friend std::ostream& operator <<(std::ostream& out, const C_Armor& obj)
	{
		if (obj.type == ARMOR_TYPE_HEAVY)
		{
			out << "Type: heavy\n";
		}
		else
		{
			out << "Type: light\n";
		}
		return out;
	}
protected:
	E_Armor_Types type;
};