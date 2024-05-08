#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string password;
    cin >> password;
    bool num = false, may = false, min = false, car = false;

    if (password.length() >= 5){
        car = true;
    }

    for (int i = 0; i < password.length(); i++){
        if (isupper(password[i])){
            may = true;
        }else if (islower(password[i])){
            min = true;
        }else if (isdigit(password[i])){
            num = true;
        }
    }

    if(num == true && may == true && min == true && car == true){
        cout << "Correct";
    }else{
        cout << "Too weak";
    }
}