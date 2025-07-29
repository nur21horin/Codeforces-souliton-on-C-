#include <iostream>
#include <set>
using namespace std;
int main() {
  set<char> userName;
  string name;
  cin >> name;
  for(char nam:name){
  userName.insert(nam);
  }
  int t = userName.size();
  if (t % 2 == 0)
    cout <<"CHAT WITH HER!" << endl;
  else
    cout <<  "IGNORE HIM!" << endl;
  return 0;
}