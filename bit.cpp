#include <iostream>
using namespace std;

int main() {
  int lineas;
  int x = 0;
  cin >> lineas;
  for (int i = 0;  i < lineas; i++){
    string s;
    cin >> s;
    if (s[1] == '+'){
      x++;
    }else{
      x--;
    }
  }
  cout << x;
  return 0;
}