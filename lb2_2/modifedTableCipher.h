#pragma once
#include <string>
using namespace std;
class TableCipher
{
public:
    TableCipher(const int &skey);
    string encrypt(const string &open_text);
    string decrypt(const string &cipher_text);
    TableCipher()=delete;
    bool isRussianChar(wchar_t c);
private:
    int key;
};