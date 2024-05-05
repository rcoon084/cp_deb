#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    int top = 0, bottom = 0, left = 0, right = 0;
    bool t = false, l = false;

    vector<vector<char>> impr;

    for (int i = 0; i < n; i++)
    {

        vector<char> line;
        for (int j = 0; j < m; j++)
        {

            char dot;
            cin >> dot;

            if (dot == '*')
            {
                if (top <= i && t == false)
                {
                    top = i;
                    t = true;
                }
                if (bottom <= i)
                {
                    bottom = i;
                }

                if (left <= j && l == false)
                {
                    left = j;
                    l = true;
                }
                if (l == true && left > j)
                {
                    left = j;
                }
                if (right <= j)
                {
                    right = j;
                }
            }

            line.push_back(dot);
        }
        impr.push_back(line);
    }

    for (int i = 0; i < impr.size(); i++)
    {
        if (i >= top && i <= bottom)
        {
            for (int j = 0; j < impr[i].size(); j++)
            {
                if (j >= left && j <= right)
                {
                    cout << impr[i][j];
                }
            }

            if (i != impr.size() - 1)
            {
                cout << endl;
            }
        }
    }
}

/*
6
6
......
.****.
.**...
.****.
.****.
......
*/