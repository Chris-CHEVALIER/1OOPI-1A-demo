#include <iostream>
#include <string>

using namespace std;

class User
{
    // Attributs
private:
    string firstName;
    string lastName;
    string email;
    int age;
    string password;
    bool isConnected;

    // Méthodes
public:
    User(string newFirstName, string newLastName, string newEmail, int newAge, string newPassword);
    void login(string newEmail, string newPassword);
    void isLoggedIn() const;
    void display() const;
    ~User();
};