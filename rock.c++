#include <iostream>
using namespace std;

int main() {
    char c1,c2;
    int n;
    cout<<"ENTER THE NUMBER OF ROUNDS YOU HAVE TO PLAY THE !!ROCK,PAPER AND SCISSOR!!GAME "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++) { 
        
    cout<<"Choose R,S,P by player1 and player2 separated by space "<<endl; 
    cin>>c1>>c2;
    if(c1=='r'&&c2=='s')
    cout<<"Player1 win the game!!"<<endl;
     else if(c1=='s'&&c2=='r')
     cout<<"Player2 win the game!!"<<endl;
          else if(c1=='s'&&c2=='p')
     cout<<"Player1 win the game!!"<<endl;
          else if(c1=='p'&&c2=='s')
     cout<<"player2 win the game!!"<<endl;
          else if(c1=='p'&&c2=='r')
     cout<<"player1 win the game!!"<<endl;
          else if(c1=='r'&&c2=='p')
     cout<<"player2 win the game!!"<<endl;
     else if(c1==c2)
     cout<<"DRAW"<<endl;
    }
cout<<"--------------------------------------------"<<endl;
           cout<<"GAME IS OVER!!"<<endl;

return 0;
}