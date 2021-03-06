#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool PrevPermutation(string &str) {
  int n = str.size();
  int i = n - 1;

  while(i && str[i - 1] <= str[i])
    i--;
  if (!i) return false;

  int j = i + 1;
  while(j < n && str[i - 1] >= str[j])
    j++;

  swap(str[i - 1], str[j-1]);
  reverse(str.begin() + i, str.end());
  return true;
}

int main() {
  string str;
  cout << "Enter string : ";
  cin >> str;
  PrevPermutation(str);
  cout << "Prev Permutation : " << str << "\n";
}
