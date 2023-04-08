#pragma once

#include <string>
#include <map>

using namespace std;

void Insert(map<string, string>& phoneBook, string phone, string name) {
    phoneBook.insert(pair<string, string>(phone, name));
}

void UpdateName(map<string, string>& phoneBook, string phone, string name) {
    //TODO Добавить проверку на существование телефона (phone), перед обновлением имени
    // Если не существует - то просто игнорируем.
    phoneBook[phone] = name;
}

void UpdatePhone(map<string, string>& phoneBook, string phone, string name) {
    //TODO реализовать функцию
}

void Delete(map<string, string>& phoneBook, string phone) {
    phoneBook.erase(phone);
}

string FindByPhone(map<string, string>& phoneBook, string phone) {
    //TODO Продумать что возвращать в случае отсутствия номера в массиве
    return phoneBook[phone];
}

map<string, string> FindByName(map<string, string>& phoneBook, string name) {
    map<string, string> result;

    for (auto item : phoneBook) {
        if (item.second == name) {
            result.insert(item);
        }
    }

    return result;
}