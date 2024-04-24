#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//TERMINARRRRRRRRRRRRR


int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    long long total = 0;
    int flag = 1;
    for (int i = 1; i < n+1; i++){
        if (flag == 0){
            total += i;
            flag = 1;
        }else{
            total -= i;
            flag = 0;
        }
    }

    cout << total;
    return 0;
}
