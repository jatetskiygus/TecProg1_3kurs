#include "Keeper.h"

keeper::keeper() {
	first = nullptr;
	last = nullptr;
}
keeper::~keeper() {

}

bool keeper::is_empty() {
	return first == nullptr;
}
// Добавление объекта в контейнер
void keeper::push_back(base* animal) {
	container* buffer = new container;
	buffer->animal = animal;
	buffer->next = nullptr;
	if (is_empty()) {
		first = last = buffer;
		return;
	}
	last->next = buffer;
	last = buffer;
}

// Удаление объекта из контейнера
void keeper::pop_back() {
	if (is_empty()) {
		std::cout << "Контейнер пуст";
		return;
	}
	if (first == last) {
		first->animal->display();
		first = last = nullptr;
	}
	last->animal->display();
	container* buffer = first;
	while (buffer->next != last) buffer = buffer->next;
	buffer->next = nullptr;
	last = buffer;
}

void saveToFile(const std::string& filename); // Сохранение данных в файл
void loadFromFile(const std::string& filename); // Загрузка данных из файла

void displayAllAnimals(); // Вывод всех объектов