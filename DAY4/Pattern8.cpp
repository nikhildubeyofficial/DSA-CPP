#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;
    while(row<=n){

        int value = 1;
        while(value<=row){
            cout << (row-value+1) << " ";
            value = value + 1;
        }
        cout << endl;
        row = row + 1;
    }
}