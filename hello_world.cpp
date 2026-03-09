#include <iostream>
#include <string>

// Main function
int
main()
{
  std::string name; // Создана строковая переменная
  std::cout << "Введите свое имя: "; // Вывод запроса
  std::cin >> name;                  // Ввод имени
  std::cout << "Hello world from " << name
            << std::endl; // Вывод конечного результата
  return 0;
}
