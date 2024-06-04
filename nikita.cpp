#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int casos;
    cin >> casos;

    for (int c = 0; c < casos; c++)
    {
        int mov, meta, count = 0;
        cin >> mov >> meta;

        for (int i = 0; i < mov; i++)
        {
            if (count < meta)
            {
                count++;
            }
            else if (count > meta)
            {
                count--;
            }
            else
            {
                count++;
            }
        }

        if (count == meta){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
}