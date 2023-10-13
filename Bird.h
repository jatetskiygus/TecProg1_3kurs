#pragma once
#include "Base.h"
class Bird : public Base {
public:
	std::string food_type;
	std::string habitat;

    Bird() = default;
    ~Bird() = default;

    void input() override;
    void display() override;
};

