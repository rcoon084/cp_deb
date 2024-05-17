#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;

        nums.push_back(l);
        sum += l;
    }

    sum /= (n / 2);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n ; j++){
            if (nums[i] + nums[j] == sum && i != j){
                cout << i + 1 << " " << j + 1 << endl;
                nums[i] = nums[j] = 0;
            }
        }
    }
}