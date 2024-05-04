#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int rounds, mitska = 0, cris = 0;
    cin >> rounds;

    for (int i = 0; i < rounds; i++){
        int M, C;
        cin >> M >> C;

        if (M > C){
            mitska ++;
        }else if(C > M){
            cris ++;
        }
    }

    if (cris > mitska){
        cout << "Chris";
    }else if (mitska > cris){
        cout << "Mishka";
    }else{
        cout << "Friendship is magic!^^";
    }
    return 0;
}
