#include <iostream>
//Удалили using namespace std;
int main() {
    string name; //Переменная, используемая для хранения имени пользователя
    std::cout<<"Введите имя пользователя:";//Requesting keyboard input
    std::cin>>name;//Keyboard input
    std::cout << "Hello world from "<<name<<std::endl;//Вывод
    return 0;
}