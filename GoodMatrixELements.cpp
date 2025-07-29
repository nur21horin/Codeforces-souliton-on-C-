#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    int sum=0;
    for (int i=0; i <n; ++i)
        for (int j=0; j<n; ++j)
            cin>>matrix[i][j];
    int mid =n/2;
    for (int i=0;i<n;++i) {
        sum +=matrix[i][i];         
        sum+=matrix[i][n - 1 - i]; 
        sum+=matrix[mid][i];      
        sum+=matrix[i][mid];       
    }
    sum-=3*matrix[mid][mid];
    cout<<sum<<endl;
    return 0;
}