#pragma once
#include "Base.h"

class Fish : public base {
public:
	std::string food_type;

	Fish() = default;
	~Fish() = default;

	// Метод внесения данных
	void input() override;

	// Метод отображения данных
	void display() override;

	// Метод для загрузки данных в файл
	void load_in_file(std::ofstream &file) override;

	// Метод для загрузки данных из файла
	void load_from_file(std::ifstream &file) override;
};

