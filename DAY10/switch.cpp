#include<iostream>
using namespace std;

int main(){

    int num = 2;

    cout << endl;
    switch(num){

        case 1: cout << "First" << endl;
            break;
        
        case '1': cout << "Character One" << endl;
            break;
        
        default : cout << "It is default case" << endl;
    }

    cout << endl;

    return 0;
}