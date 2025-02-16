#include <iostream>
#include <string>
using namespace std;
int main() {
string str = "welcome";

// Concatenation
string greeting = str + ", Friend!";
cout << "Concatenation: " << greeting << endl;

// Substring
string part = greeting.substr(7, 5); // Extracts "World"
cout << "Substring: " << part << endl;

// Find
size_t pos = greeting.find("Friend");
cout << "Find: 'Friend' found at position " << pos << endl;

// Replace
string replaced = greeting;
replaced.replace(pos, 5, "C++");
cout << "Replace: " << replaced << endl;

// Insert
string inserted = greeting;
inserted.insert(5, " beautiful");
cout << "Insert: " << inserted << endl;

// Erase
string erased = greeting;
erased.erase(5, 7); // Removes " beautiful"
cout << "Erase: " << erased << endl;

// To uppercase
string uppercase = greeting;
for (char &c : uppercase) c = toupper(c);
cout << "To Uppercase: " << uppercase << endl;

// To lowercase
string lowercase = greeting;
for (char &c : lowercase) c = tolower(c);
cout << "To Lowercase: " << lowercase << endl;

return 0;
}