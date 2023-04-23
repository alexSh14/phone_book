#include "FileHelper.h"
#include "ConsoleHelper.h"
#include "PhoneBook.h"

using namespace std;

int main() {
    auto phoneBook = ImportFromFile("C:\Users\79619\Source\Repos\phone_book.git\export.psv");
    ShowAll(phoneBook);
    cout << " --- " << endl;

    Insert(phoneBook, "D", "DD");
    ShowAll(phoneBook);
    cout << " --- " << endl;

    UpdateName(phoneBook, "D", "CC");
    ShowAll(phoneBook);
    cout << " --- " << endl;

    UpdatePhone (phoneBook, "W", "CC");
    ShowAll(phoneBook);
    cout << " --- " << endl;

    Delete(phoneBook, "B");
    ShowAll(phoneBook);
    cout << " --- " << endl;

    auto name = FindByPhone(phoneBook, "D");
    cout << name << endl;
    cout << " --- " << endl;

    return 0;
}
