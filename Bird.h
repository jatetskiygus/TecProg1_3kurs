#pragma once
#include "Base.h"
class birds : public base {
public:
	std::string food_type;
	std::string habitat;

    bird() = default;
    ~bird() = default;

    void input() override;
    void display() override;
};

