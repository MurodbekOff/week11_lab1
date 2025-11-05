#include <iostream>
#include <vector>
using namespace std;

void Transpose(vector<vector<int>>& arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main() {
    int n;
    cout<<"n: ";
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    cout<<"Enter "<<n*n<<" elements: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }

    Transpose(arr, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}