#include <iostream>
using namespace std;

int finmax(int arr[][100], int n, int m) {
    int max = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main() {
    int array[100][100];
    int n, m;
    cout<<"number of columns: ";
    cin>>n;
    cout<<"number of rows: ";
    cin>>m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>array[i][j];
            if ((i*j+j)>n) break;
        }
    }
    cout<<finmax(array, n, m);
    return 0;
}