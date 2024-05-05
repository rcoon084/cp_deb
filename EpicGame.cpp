#include <bits/stdc++.h>

using namespace std;

int gcd(int A, int B)
{

    if (A == 0)
    {
        return B;
    }
    else if (B == 0)
    {
        return A;
    }
    else
    {
        int R = A % B;

        return gcd(B, R);
    }
}

int main(int argc, char const *argv[])
{
    int a, b, n;
    cin >> a >> b >> n;
    int flag = 0;

    while (n > 0){
        int gA = gcd(a, n), gB = gcd(b, n), piedrita = 0;

        if (flag == 0){
            piedrita = gA;
            n -= piedrita;
            flag = 1;
        }else {
            piedrita = gB;
            n -= piedrita;
            flag = 0;
        }
    }
    if (flag == 1){
        flag = 0;
    }else{
        flag = 1;
    }

    cout << flag;
}