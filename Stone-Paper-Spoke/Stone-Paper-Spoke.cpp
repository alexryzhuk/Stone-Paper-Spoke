// Stone-Paper-Spoke.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    string player;
    while (player != "Stop") {
        cout << "Hello " << endl;
        int k = rand() % 5;
        string compValue;
        if (k == 0) {
            compValue = "Камінь";
        }
        else if (k == 1) {
            compValue = "Ножиці";
        }
        else if  (k == 2) {
            compValue = "Папір";
        }
        else if (k == 3) {
            compValue = "Ящірка";
        }
        else if (k == 4) {
            compValue = "Спок";
        }
        getline(cin, player);
        if (player == compValue) {
            cout << "Нічия" << endl;
        }
        else if (player == "Камінь" && compValue == "Ножиці" || player == "Ножиці" && compValue == "Папір"  || player == "Папір" && compValue == "Камінь" || player == "Ящірка" && compValue == "Папір" || player == "Спок" && compValue == "Ножиці" ) {
            cout << "Перемога. Комп вибрав - " << compValue << endl;
        }
        else if (player == "Камінь" && compValue == "Ящірка" || player == "Ножиці" && compValue == "Ящірка" || player == "Папір" && compValue == "Спок" || player == "Ящірка" && compValue == "Спок" || player == "Спок" && compValue == "Камінь") {
            cout << "Перемога. Комп вибрав - " << compValue << endl;
        }
        else 
        {
            cout << "Поразка. Комп вибрав - " << compValue << endl;
        }
    }
}

