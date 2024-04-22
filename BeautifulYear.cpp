#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//TERMINAR EJERCICIO

int main(int argc, char const *argv[])
{
    int year;
    cin >> year;
    int total = year;
    vector <int> nums;
    for (int i = 0; i < 4; i++){
        nums.push_back(year % 10);
        year /= 10;
    }
    
    if (nums[0] == nums[1] || nums[1] == nums[2]|| nums[2] == nums[3]|| nums[3] == nums[0]){
        total ++;

    }

    return 0;
}
