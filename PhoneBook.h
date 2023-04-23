#pragma once

#include <string>
#include <map>

using namespace std;

void Insert(map<string, string>& phoneBook, string phone, string name) {
    phoneBook.insert(pair<string, string>(phone, name));
}


void UpdateName(map<string, string>&phoneBook, string phone, string name) {
    // Проверка на существование телефона в телефонной книге
    if (phoneBook.count(phone) > 0) {
        // Если номер существует,то обновляем имя
        phoneBook[phone] = name;
    }
    // Если номер не существует,то игнорируем
}
void UpdatePhone(map<string, string>& phoneBook, string phone, string name) {
    // Существует ли это имя в телефонной книге?
    for (auto& entry : phoneBook) {
        if (entry.second == name) {
            // Если имя есть в книге,то обновите номер телефона
            phoneBook.erase(entry.first);
            phoneBook[phone] = name;
            break;
        }
    }
    //Если имя не существует, то игнорируем
}



void Delete(map<string, string>& phoneBook, string phone) {
    phoneBook.erase(phone);
}

string FindByPhone(map<string, string>& phoneBook, string phone) {
    //TODO Продумать что возвращать в случае отсутствия номера в массиве
    // Проверка на существование телефона в телефонной книге
    if (phoneBook.count(phone) < 0) {
        // Если номер не существует,то обновляем имя
        
    }
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