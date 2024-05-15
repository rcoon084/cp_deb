#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string bin;
        cin >> bin;
        int flag01 = 0, flag1 = 0, flag0 = 0, count = 1;
        for (int j = 0; j < bin.length(); j++)
        {
            if (j == 0 && bin[j] == '1')
            {
                flag1 = 1;
            }
            else if (j == 0 && bin[j] == '0')
            {
                flag0 = 1;
            }
            if (bin[j + 1] != bin[j])
            {
                if (bin[j] == '0' && bin[j + 1] == '1' && flag01 == 0)
                {
                    flag01 = 1;
                    if (bin[j] != '0')
                    {
                        count++;
                    }
                }
                else
                {
                    if (bin[j + 1] == '0' && bin[j] == '1')
                    {
                        flag1 = 0;
                        flag0 = 1;
                        count++;
                    }
                    else if (bin[j + 1] == '1' && bin[j] == '0')
                    {
                        flag1 = 1;
                        flag0 = 0;
                        count++;
                    }
                    
                }
            }
        }
        cout << count << endl;
    }
}