#include <cmath>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 != 0){
            cout << "I hate ";
        } else if ((i + 1) % 2 == 0)
        {
            cout << "I love ";
        }

        if (i == n - 1){
            cout << "it";
        }else{
            cout << "that ";
        }
        
    }
    return 0;
}
