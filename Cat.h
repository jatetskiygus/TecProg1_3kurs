#pragma once
#pragma once
#include "Base.h"
class cat : public base {
public:
	struct owner {
		std::string FirstName;
		std::string LastName;
	};
	std::string NickName;

	cat() = default;
	~cat() = default;

	void input() override;
	void display() override;
};
