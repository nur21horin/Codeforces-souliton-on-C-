#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin >>n>>m;

    vector<pair<int,int>>stars; 

    for (int i=1;i<= n;++i) {
        string row;
        cin >> row;
        for (int j=1; j<= m;++j) {
            if (row[j-1] == '*') {
                stars.push_back({i, j});
            }
        }
    }

    
    int x1=stars[0].first, y1=stars[0].second;
    int x2=stars[1].first, y2=stars[1].second;
    int x3=stars[2].first, y3=stars[2].second;

    int x4, y4;

    
    if (x1==x2) x4=x3;
    else if (x1==x3) x4=x2;
    else x4=x1;

    
    if (y1==y2) y4=y3;
    else if (y1==y3) y4=y2;
    else y4=y1;

    cout <<x4<< " " <<y4<<endl;
    return 0;
}