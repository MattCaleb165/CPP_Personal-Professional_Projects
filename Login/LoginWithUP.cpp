//Working on Developing a Library Management tool
//Caleb M

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

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
            cout << "Enter username and password.\nUsername: ";
            cin >> UsernameAttempt;
            
            

            if(checkFile(UsernameAttempt, "users.dat")) 
            {
                cout << "Password: ";
                cin >> PasswordAttempt;

                if (checkFile(PasswordAttempt, "pswds.dat"))
                {
                    cout << "Successfully authenticated. \n" << endl;
                }
                else
                {
                    system("CLS");
                    cout << "\n\nIncorrect Password. Try again.\n\n";
                    login();
                }               
            }
            else
            {
                system("CLS");
                cout << "\n\nIncorrect Username. Try again.\n\n";
                login();
            }
        }
    bool checkFile(string attempt, const char* p_FileName) 
    {
        string line;
        fstream file;

        long long encryptChar;

        file.open(p_FileName, ios::in);
        
        while(1)
        {
            file >> encryptChar;
            if (encryptChar == 0)
            {
                if(attempt == line)
                {
                    file.close();
                    return true;
                }
                else
                { 
                    line.erase(line.begin(), line.end());
                }
            }
            else
            {
                line += (char)decrypt(encryptChar);
            }

            if (file.peek() == EOF)
            {
                file.close();
                return false;
            }
        }
    }

    void SaveFile(string p_Line, const char* p_FileName) 
    {
        fstream file;
        file.open(p_FileName, ios::app);

        for (int i = 0; i < p_Line.length(); i++)
        {
            file << encrypt(p_Line[i]);
            file << "\n";
        }

        file << "0 \n";
        file.close();
    }

    long long encrypt(int p_Letter) 
    {
        return powf(p_Letter, 5) * 4 - 14;
    }

    int decrypt(long long p_Letter)
    {
        return powf((p_Letter + 14) / 4, 1/5.f);
    }

    private:
        string UsernameAttempt;
        string PasswordAttempt;
        bool AccessGranted; 
};

void main() 
{

    LoginManager app;
    app.SaveFile("guest", "users.dat");
    app.SaveFile("guest", "pswds.dat");
    app.login();

    cin.get();
}