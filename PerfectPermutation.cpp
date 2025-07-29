#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n%2==1) {
        cout <<-1<<endl;
    } else {
        vector<int> ans;
        for (int i=2; i<=n; i+=2) {
            ans.push_back(i);
            ans.push_back(i-1);
        }

        for (int num:ans) {
            cout <<num<< " ";
        }
        cout<<endl;
    }
    return 0;
}