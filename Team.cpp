#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a, b, c;
  int ans = 0;
  int line = 0;
  vector<int> abc;
  for(int i=0;i<n;i++){
    cin >> a >> b >> c;
    
 if(a+b==2 || a+c==2|| b+c==2){
    line++;
   }
  
  }

  cout << line << endl;
}




