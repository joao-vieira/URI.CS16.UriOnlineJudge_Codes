#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    char o;
    double M[12][12], soma=0, cont=0;

    cin >> o;

    for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++) {
            cin >> M[i][j];
        }
    }

    for(int i=1; i<=11; i++) {
        for(int j=0; j<=i-1; j++) {
            soma += M[i][j];
            cont++;
        }
    }

    cout << fixed << setprecision(1);

    if(o == 'S') {
        cout << soma << endl;
    } else {
        cout << soma / cont << endl;
    }

    return 0;
}
