#ifndef HUMANB_H
#define HUMANB_H

#pragma once
#include "Weapon.h"

class HumanB
{
	private:
		str name;
		Weapon *weapon;
	public:
		/*---------------------------------------*
		 *----- constructors and destructors ----*
		 * --------------------------------------*/
		HumanB(str name);
		~HumanB();
		/*----------------------------------------
		 * --------------------------------------*/
		void set_weapon(Weapon &w);
		void attack();
};

#endif // !HUMANB_H
