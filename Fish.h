#pragma once
#include "Base.h"
class Fish : public Base {
public:
	std::string food_type;

	Fish() = default;
	~Fish() = default;

	void input() override;
	void display() override;

};

