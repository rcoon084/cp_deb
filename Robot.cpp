#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int in1, in2, fi1, fi2, count = 0;
    cin >> in1 >> in2 >> fi1 >> fi2;

    int d1, d2;
    while(d1 != 0 && d2 != 0){
        d1 = fi1 - in1;
        d2 = fi2 - in2;
        if (d1 > 0){
            in1++;
        }else if(d1 < 0){
            in1--;
        }

        if (d2 > 0){
            in2++;
        }else if (d2 < 0){
            in2--;
        }

        cout << "(" << in1 << " , " << in2 << ") (" << fi1 << " , " << fi2 << ")"  << d1 << " " << d2 << endl;
        count ++;
    }
    cout << count;
}