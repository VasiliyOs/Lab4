#include <iostream>
//Удалили using namespace std;r
int main() {
<<<<<<< HEAD
    string name; //Переменная, используемая для хранения имени пользователя
    std::cout<<"Введите имя пользователя:";//Requesting keyboard input
    std::cin>>name;//Keyboard input
=======
    string name; //Переменная для хранения имени пользователя
    std::cout<<"Введите имя пользователя:";//Просьба ввода с клавиатуры
    std::cin>>name;//Принятие ввода
>>>>>>> 8b61e21557304c91bd23ff80a0ee76d21d4ab410
    std::cout << "Hello world from "<<name<<std::endl;//Вывод
    return 0;
}