//Working on Developing a Library Management tool

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class LoginManager
{
    public:
        LoginManager()
        {
            AccessGranted = 0;
        }
        void login() 
        {
        string Username = "nothing";
        string Password = "nothing";

            cout << "Enter username and password.\nUsername: ";
            cin >> UsernameAttempt;
            Username = getFile("users.dat");

            if(UsernameAttempt == Username) 
            {
                while (PasswordAttempt != Password) 
                {
                cout << "Password: ";
                cin >> PasswordAttempt;

                Password = getFile("pswds.dat");

                    if (PasswordAttempt == Password)
                    {
                        cout << "Successfully authenticated.";
                        cin.get();
                        break;
                    }
                    else
                    {
                        system("CLS");
                        cout << "\n\nIncorrect Password. Try again.\n\n";
                        login();
                    }
                }                
            }
            else
            {
                system("CLS");
                cout << "\n\nIncorrect Username. Try again.\n\n";
                login();
            }
        }
    string getFile(const char* p_FileName) 
    {
        string line;
        fstream file;

        file.open(p_FileName, ios::in);
        if (file.is_open())
        {
            getline(file, line);
        }
        
        file.close();

        return line;
    }

    int encrypt(int p_Letter) 
    {
        return p_Letter + 3;
    }

    int decrypt(int p_Letter)
    {
        return p_Letter -3;
    }

    private:
        string UsernameAttempt;
        string PasswordAttempt;
        bool AccessGranted; 
};

void main() 
{

    LoginManager loginManagerObj;
    loginManagerObj.login();

}