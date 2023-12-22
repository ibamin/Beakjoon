#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n,m;
    while(1){
        int i=1;
        int mi=INT_MAX;
        cin >> n >> m;
        if(n==0 && m==0)
            break;
        int t=abs(n-pow(i,m));
        while((t=abs(n-pow(i,m)))<mi){
            mi =abs(n-pow(i,m));
            i++;
        }
        cout << i-1 << endl;
    }
}