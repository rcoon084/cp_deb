#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string s;
    cin >> n >> s;
    int numsD = 0;
    for (int i  = 0; i < s.length() ; i++){
        if (s[i] == 'D'){
            numsD++;
        }
    }
    if (s.length() % 2 == 0 && numsD == s.length()/2){
        cout << "Friendship";
    }else if (numsD > ((s.length()%2) + (s.length()/2))-1){
        cout << "Danik";
    }else{
        cout << "Anton";
    }
    return 0;
}
