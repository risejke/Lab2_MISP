#include "modifedTableCipher.h"
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
try{
    int a;
    int b = 0;
    string s;
    cout << "Введите ключ: ";
    cin >> a;
    cout << endl;
    TableCipher c{a};
    cout << "1) Зашифровать сообщение" << endl;
    cout << "2) Дешифровать сообщение" << endl;
    cin >> b;
    if (b == 1) {
        cout << "Введите сообщение: " << endl;
        cin >> s;
        string s1 = c.encrypt(s);
        cout << "Зашифрованное сообщение: " << s1 << endl;
    }
    else if (b == 2) {
        cout << "Введите сообщение: " << endl;
        cin >> s;
        string s2 = c.decrypt(s);
        cout << "Дешифрованное сообщение: " << s2 << endl;
    }
    else{
        throw "Неверно введенное значение, введите 1 или 2";
        return 1;
    }

}
catch(const char* error_message){
    std::cout << "Найдена ошибка: "<<error_message << std::endl;
}
    return 0;
}