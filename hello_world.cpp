#include <iostream>
//Удалили using namespace std;
int main() {
    string name; //Переменная для хранения имени пользователя
    std::cout<<"Введите имя пользователя:";//Просьба ввода с клавиатуры
    std::cin>>name;//Принятие ввода
    std::cout << "Hello world from "<<name<<std::endl;//Вывод
    return 0;
}
