#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, max = 0, min = 0, count = 0;
    cin >> n;

    for (long long  i = 0; i < n; i++){
        long long  contest;
        cin >> contest;

        if (i == 0){
            max = min = contest;
        }

        if(contest > max || contest < min){
            count ++;
        }

        if (max < contest){
            max = contest;
        }else if(min > contest){
            min = contest;
        }

    }

    cout << count;
}




