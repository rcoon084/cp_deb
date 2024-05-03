#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        string lower;
        for (int j = 0; j < s.length(); j++){
            lower += tolower(s[j]);
        }

        if (lower == "yes"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
