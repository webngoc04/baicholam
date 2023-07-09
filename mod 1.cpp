#include <iostream>
using namespace std;

int main() {
  long long a, b, c;
  cin >> a >> b;
  cin >> c;
  long long ans = (a % c + b % c) % c;
  cout << ans << endl;
  return 0;
}
