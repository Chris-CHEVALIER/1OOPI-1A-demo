#include "User.hpp"

User::User(string newFirstName, string newLastName, string newEmail, int newAge, string newPassword)
{
    // cout << "Le contructeur de la classe User vient d'être appelé !" << endl;
    firstName = newFirstName;
    lastName = newLastName;
    email = newEmail;
    age = newAge;
    password = newPassword;
    isConnected = false;
}

void User::login(string newEmail, string newPassword)
{
    if (newEmail == email && newPassword == password)
    {
        isConnected = true;
    }
    else
    {
        isConnected = false;
    }
}

void User::isLoggedIn() const
{
    if (isConnected)
    {
        cout << "L'utilisateur est connecté !" << endl;
    }
    else
    {
        cout << "L'utilisateur n'est pas connecté !" << endl;
    }
}

void User::display() const
{
    cout << firstName << " " << lastName << " a " << age << " ans et utilise cette adresse e-mail : " << email << endl;
}

User::~User()
{
    cout << "L'utilisateur " << firstName << " " << lastName << " vient d'être supprimé !" << endl;
}