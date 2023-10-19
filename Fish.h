#pragma once
#include "Base.h"
class fish : public base {
public:
	std::string food_type;

	fish() = default;
	~fish() = default;

	void input() override;
	void display() override;

};

