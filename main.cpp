#include "User.cpp"

int main()
{
    /* string firstName = "Chris :)";
    cout << "Bienvenue " << firstName << "!" << endl;
    cout << firstName.size() << endl; */

    User noe("Noé", "BROSSARD", "noe.brossard@ecole-hexagone.com", 18, "123456");
    User appoline("Appoline", "VAUTRIN", "appoline.vautrin@ecole-hexagone.com", 18, "azerty");

    appoline.display();
    noe.display();

    return 0;
}