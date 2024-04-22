#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string s, s2;
    cin >> s >> s2;
    
    string revez;
    for (int i = s.length()-1; i >= 0; i--){
        revez += s[i];
    }
    
    if (s2 == revez){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
