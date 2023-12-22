#include <iostream>

using namespace std;

int RSP_GAME(int time){
    int player1=0,player2=0;
    while(time--){
        char p1,p2;
        cin >> p1 >> p2;
        switch (p1)
        {
        case 'R':
            if(p2=='P')
                player2++;
            else if(p2=='S')
                player1++;
            break;
        case 'S':
            if(p2=='R')
                player2++;
            else if(p2=='P')
                player1++;
            break;
        case 'P':
            if(p2=='S')
                player2++;
            else if(p2=='R')
                player1++;
        break;
        default:
            break;
        }
    }
    return (player1>player2)? 1:(player1==player2)? 0:2;
}

int main(){
    int n,t;
    cin >> n;
    while(n--){
        cin >> t;
        int result =RSP_GAME(t); 
        if(result==1){
            cout << "Player 1\n";
        }else if(result==2){
            cout <<"Player 2\n";
        }else{
            cout << "TIE\n";
        }
    }
}