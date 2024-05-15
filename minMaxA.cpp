#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if (a >= b){
            cout << b << " " << a << endl;
        }else{
            cout << a << " " << b << endl;
        }
    }
}