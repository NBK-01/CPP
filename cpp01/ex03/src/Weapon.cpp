
#include "../headers/Weapon.h"

Weapon::Weapon(str type) : type(type) {}

Weapon::~Weapon()
{
}

const str &Weapon::get_type()
{
	return (this->type);
}

void Weapon::set_type(const str &type)
{
	this->type = type;
}
