//Working on Developing a Library Management tool
//Caleb M

#include <iostream>
#include <fstream>
#include <sstream>
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
            
            
            int UsrID = checkFile(UsernameAttempt, "users.dat");

            if(UsrID != 0) 
            {
                cout << "Password: ";
                cin >> PasswordAttempt;

                int PwdID = checkFile(PasswordAttempt, "pswds.dat");
                if (UsrID == PwdID)
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
    void AddUser (const string username, const string password)
    {
        if (checkFile(username, "users.dat") != 0)
        {
            cout << "That username is taken." << endl;
            return;
        }

        int id = 1 + getLastID();
        SaveFile(username, "users.dat", id);
        SaveFile(password, "pswds.dat", id);
    }

    int getLastID()
    {
        fstream file;
        file.open("users.dat", ios::in);
        file.seekg(0, ios::end);

        cout << file.tellg() << std::endl;

        if (file.tellg() == -1)
            return 0;

        string s;

        for (int i = -1; s.find("#") == string::npos; i--) 
        {
            file.seekg(i, ios::end);
            file >> s;
        }

        file.close();
        s.erase(0, 4);

        int id;
        istringstream(s) >> id;

        return id;
    }
    
    int checkFile(string attempt, const char* p_FileName) 
    {
        string line;
        fstream file;

        string CurrentChar;
        long long encryptChar;

        file.open(p_FileName, ios::in);
        
        while(1)
        {
            file >> CurrentChar;
            if (CurrentChar.find("#ID") != string::npos)
            {
                if(attempt == line)
                {
                    file.close();
                    CurrentChar.erase(0, 4);
                    int id;
                    istringstream(CurrentChar) >> id;
                    return id;
                }
                else
                { 
                    line.erase(line.begin(), line.end());
                }
            }
            else
            {
                istringstream(CurrentChar) >> encryptChar;
                line += (char)decrypt(encryptChar);
                CurrentChar = "";
            }

            if (file.peek() == EOF)
            {
                file.close();
                return 0;
            }
        }
    }

    void SaveFile(string p_Line, const char* p_FileName, const int& id) 
    {
        fstream file;
        file.open(p_FileName, ios::app);
        file.seekg(0, ios::end);

        if (file.tellg() != 0)
        {
            file << "\n";
        }

        file.seekg(0, ios::beg);

        for (int i = 0; i < p_Line.length(); i++)
        {
            file << encrypt(p_Line[i]);
            file << "\n";
        }

        file << "#ID:" << id;
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
    app.login();
    cin.get();
}