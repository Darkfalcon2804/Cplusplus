#include<iostream>
using namespace std;
int currentPlayer;
char currentMarker;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int Winner(){
     //row
    for(int i=0;i<3;i++){    
        if(board[i][0]==board[i][1]==board[i][2])
        return currentPlayer;
    }
    //column
 for(int i=0;i<3;i++){    
        if(board[0][i]==board[1][i]==board[2][i])
        return currentPlayer;
    }
    //diagonal
    if(board[0][0]==board[1][1]&& board[1][1]==board[2][2]){
        return currentPlayer;
    }
    if(board[0][2]==board[1][1]&& board[1][1]==board[2][0]){
        return currentPlayer;
    }
    return 0;
}
bool placeMarker(int slot){
    int row=(slot-1)/3;
    int col=(slot-1)%3;
    if(board[row][col]!='X' && board[row][col]!='0'){
        board[row][col]=currentMarker;
        return true;
    
    }
    else return false;
}
void drawBoard(){
    cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n";
    cout<<"---|---|---\n";
    cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n";
     cout<<"---|---|---\n";
    cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
    // cout<<"---|---|---\n";
    
}
  void swapPlayerandmarker(){
   if(currentMarker=='X'){
    currentMarker='0';
   }
   else {
    currentMarker='X';
   }
   if(currentPlayer==1){
    currentPlayer=2;
   }
   else currentPlayer=1;
  }
void game(){
    char markerP1;
    cout<<"Player one choose your marker: X or 0: ";
    cin>>markerP1;
    currentPlayer=1;
    currentMarker=markerP1;
    drawBoard();
    int playerwon;
    for(int i=0;i<9;i++){
        cout<<"its player"<<currentPlayer<<" 's turn Enter your slot: ";
        int slot;
        cin>>slot;
        if(slot<1||slot>9){
            cout<<"It is not a valid slot , you may try again";
            i--;
            continue;
        }
      if(!placeMarker(slot)){
        cout<<"Slot occupied! try again \n";
        i--;
        continue;
      }
      drawBoard();
      playerwon=Winner();
    
    if(playerwon==1){
        cout<<"Player 1 wins"<<endl;
        break;
    }
    if(playerwon==2){
        cout<<"Player 2 wins"<<endl;
        break;
    }
    swapPlayerandmarker();
    if(playerwon==0){
        cout<<"Its a Tie";
    }
    }
}
int main(){
    game();
    return 0;
}