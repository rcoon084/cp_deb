#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int flag = 2;
        string s;
        cin >> s;
        char uno = s[0];

        for (int j = 0; j < s.length(); j++){
            if (s[j] != uno){
                flag = 1;
                break;
            }
        }

        if (flag == 1){
            cout << "YES" << "\n";
            string m = "";
            for (int j = s.length() - 1; j >= 0; j--){
                m += s[j];
            }
            if (m == s){
                sort(m.begin(),m.end());
            }

            cout << m << "\n";
        }else if (flag != 1){
            cout << "NO" << "\n";
        }
        
    }
    return 0;

}