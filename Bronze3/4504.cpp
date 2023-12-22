#include <iostream>

using namespace std;

bool find_multiple(int def,int n){
    if(n%def==0)
        return true;
    return false;
}

int main(){
    int n,t;
    cin >> n;
    while(cin>>t){
        if(t==0) break;
        if(!find_multiple(n,t))
            cout << t << " is NOT a multiple of " << n << ".\n";
        else
            cout << t << " is a multiple of " << n << ".\n";
    }
}