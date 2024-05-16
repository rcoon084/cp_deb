#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int in1, in2, fi1, fi2, count = 0;
    cin >> in1 >> in2 >> fi1 >> fi2;

    int d1 = fi1 - in1, d2 = fi2 - in2;
    if (abs(d1) >= abs(d2)){
        count = abs(d1);
    }else{
        count = abs(d2);
    }
    cout << count;
}