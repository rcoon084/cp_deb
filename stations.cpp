#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int num, s1, s2;
    cin >> num;

    vector<int> stations;

    for (int i = 0; i < num; i++)
    {
        int dis;
        cin >> dis;

        stations.push_back(dis);
    }

    cin >> s1 >> s2;


    int count = 0, distanceD = 0, flag = 0;
    // derecha
    if (s1 > s2)
    {
        for (int i = s1 - 1; i <= stations.size(); i++)
        {
            if (i == stations.size())
            {
                i = 0;
                flag = 1;
            }
            if (i >= s1 - 1 && i <= stations.size())
            {
                count++;
                distanceD += stations[i];
            }
            else if (i >= 0 && i < s2 - 1 && flag == 1)
            {
                count++;

                distanceD += stations[i];
            }

            if (count == (stations.size() - (s1 - s2)))
            {
                break;
            }
        }
    }
    else if (s2 > s1)
    {
        for (int i = 0; i <= stations.size(); i++)
        {
            if (i == stations.size())
            {
                i = 0;
            }
            if (i >= s1 - 1 && i < s2)
            {
                count++;
                distanceD += stations[i];
            }

            if (count == (s2 - s1))
            {
                break;
            }
        }
    }


    // izquierda
    count = 0;
    int distanceI = 0;

    int n = s1;
    s1 = s2;
    s2 = n;

    if (s1 > s2)
    {
        for (int i = s1 - 1; i <= stations.size(); i++)
        {
            if (i == stations.size())
            {
                i = 0;
                flag = 1;
            }
            if (i >= s1 - 1 && i <= stations.size())
            {
                count++;
                distanceI += stations[i];
            }
            else if (i >= 0 && i < s2 - 1 && flag == 1)
            {
                count++;
                distanceI += stations[i];
            }

            if (count == (stations.size() - (s1 - s2)))
            {
                break;
            }
        }
    }
    else if (s2 > s1)
    {
        for (int i = 0; i <= stations.size(); i++)
        {
            if (i == stations.size())
            {
                i = 0;
            }
            if (i >= s1 - 1 && i < s2)
            {
                count++;
                distanceI += stations[i];
            }

            if (count == (s2 - s1))
            {
                break;
            }
        }
    }

    if (s1 == s2)
    {
        cout << 0;
    }
    else if (distanceI < distanceD)
    {
        cout << distanceI;
    }
    else
    {
        cout << distanceD;
    }
}