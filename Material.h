#pragma once
#include "World.h";

struct material
{
	float quantity;
	void(*getQuan)(struct material*);
	
};

void getQuantity(struct material*);