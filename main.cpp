#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

map<string, string> ImportFromFile(string path);
void ExportToFile(map<string, string> phoneBook);

void ShowAll(map<string, string> phoneBook);

void Insert(map<string, string>& phoneBook, string phone, string name);
void UpdateName(map<string, string>& phoneBook, string phone, string name);
void UpdatePhone(map<string, string>& phoneBook, string phone, string name);
void Delete(map<string, string>& phoneBook, string phone, string name);
string FindByPhone(map<string, string> phoneBook, string phone);
map<string, string> FindByName(map<string, string> phoneBook, string name);

int main() {


    return 0;
}
