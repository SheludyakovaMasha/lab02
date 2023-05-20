#include <iostream>
#include <string>

int
main(int argc, char** argv)
{
  string name;                                      // Имя пользователя
  std::cin >> name;                                 // Введите имя пользователя
  std::cout << "Hello world from " << name << endl; // Вывод имени пользователя в консоль
}
