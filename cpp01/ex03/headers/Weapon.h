#ifndef WEAPON_H
#define WEAPON_H

#pragma once
#include "main.h"

/*
 * you might notice people usually prefix private variables with an underscore.*/
/* it's common practice to just avoid conflicting var names 
 * and to tell the diff between private and public vars*/
/* i am not doing so here just because these projects are small and i am the only one working on them
 *
 * I would recommend using underscores if you want to get used 
 * to applying widely used c++ or OOP standards
 * although it's not a MUST*/
class Weapon
{
	private:
		str	type;
	public:
		/*---------------------------------------*
		 *----- constructors and destructors ----*
		 * --------------------------------------*/
		Weapon(std::string type);
		~Weapon();
		/*----------------------------------------
		 * --------------------------------------*/
		const str	&get_type();
		void		set_type(const str &type);
};

#endif // !WEAPON_H
