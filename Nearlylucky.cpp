#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    long long num;
    cin >> num;
    string len = to_string(num);
    int luck = 0;
    for (int i = 0; i < len.length() + 1; i++ ){
        if (num % 10 == 7 || num % 10 == 4){
            luck++;
        }
        num /= 10; 
    }

    if (luck == 7 || luck == 4){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
