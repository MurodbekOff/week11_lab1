#include <iostream>
using namespace std;


const int siz =4;
double sumColumn (double m[][siz], int rowSize, int columnIndex) {
    double sum = 0;
    for (int i = 0; i < 4; i++) {
        sum+=m[columnIndex][i];
    }
    return sum;
}

int main() {
    int rows;
    cout<<"rows: ";
    cin>>rows;
    double array[rows][siz];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < siz; j++) {
            cin>>array[i][j];
        }
    }
    for (int i = 0; i<rows; i++) {
        cout<<"sum of column "<<i<<" = "  << sumColumn(array, rows, i)<<endl;
    }
    return 0;
}