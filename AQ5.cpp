#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Enter number of rows:";
    cin >> m;
    cout << "Enter number of columns:";
    cin >> n;

    int arr[50][50];
    cout << "Enter elements of the matrix: \n";
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    cout << "\n Sum of each row: \n";
    for (int i=0;i<m;i++){
        int rowSum=0;
        for (int j=0;j<n;j++){
            rowSum += arr[i][j];
        }
        cout << "Row "<< i+1 <<" Sum= "<< rowSum << endl;
    }

    cout << "\n Sum of each column: \n";
    for (int j=0; j<n; j++){
        int colSum=0;
        for (int i=0; i<m; i++){
            colSum += arr[i][j];
        }
        cout << "Column "<< j+1 <<" sum ="<< colSum << endl;
    }
    return 0;
}