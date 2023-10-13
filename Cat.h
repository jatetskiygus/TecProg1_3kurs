#pragma once
#pragma once
#include "Base.h"
class Cat : public Base {
public:
	struct owner {
		std::string FirstName;
		std::string LastName;
	};
	std::string NickName;

	Cat() = default;
	~Cat() = default;

	void input() override;
	void display() override;
};
