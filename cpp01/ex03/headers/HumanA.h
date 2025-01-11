#ifndef HUMANA_H
#define HUMANA_H

#pragma once
#include "Weapon.h"

class HumanA
{
	private:
		str name;
		Weapon &weapon;
	public:
		/*---------------------------------------*
		 *----- constructors and destructors ----*
		 * --------------------------------------*/
		HumanA(str name, Weapon &weapon);
		~HumanA();
		/*---------------------------------------*
		 * --------------------------------------*/
		void attack();
};

#endif
