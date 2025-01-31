//maze path
#include<iostream>
using namespace std;
int maze(int sr , int sc,int er, int ec ){ // sc->starting column , sr-> satarting row , er-> ending row, ec-> ending column
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays =rightWays + downWays;
    return totalWays;


}
int maze2(int row ,int col){
    if(row<1 || col<1) return 0;
    if(row ==1 && col==1) return 1;
    int rightWays = maze2(row,col-1);
    int downWays = maze2(row-1,col);
    int totalWays =rightWays + downWays;
    return totalWays;

}
void printPath(int sr , int sc,int er, int ec,string s)
{
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec) {
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R');//right
    printPath(sr+1,sc,er,ec,s+'D');//down
    
    

}
int main()
{
    //cout<<maze(0,0,2,2);
    //printPath(1,1,3,3,"");
    cout<<maze2(3,4);



    return 0;
}