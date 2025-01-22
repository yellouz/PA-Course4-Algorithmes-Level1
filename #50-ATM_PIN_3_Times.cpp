#include<iostream>
using namespace std;

string getpassword()
{
    string Password;
    cout << "Please enter the password : " << endl;
    cin >> Password;
    
    return Password;
}


int main()
{
    int UserBalance = 7500;
    string UserPassword = "1234";

    string Password;

    for(int counter = 3; counter != 0; counter--)
    {
        Password = getpassword();

        if(Password == UserPassword)
        {
            cout << "Your Balance is : " << UserBalance << endl;
            break;
        }
        else
        {
            cout << "Wrong Password!" << endl;
            if (counter == 1) // if last chance is missed
            {
                cout << "Card is blocked! " << endl;
            }
        }
    }

    return 0;
}