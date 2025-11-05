#include <iostream>
using namespace std;

const int siz = 4;
double DiaSum(double array[][siz]) {
    double sum = 0;
    for (int i = 0; i < siz; i++) {
        sum+=array[i][i];
    }
    return sum;
}

int main() {
    double array[siz][siz];
    for (int i = 0; i < siz; i++) {
        for (int j = 0; j < siz; j++) {
            cin>>array[i][j];
        }
    }
    cout<<DiaSum(array)<<endl;
    return 0;
}