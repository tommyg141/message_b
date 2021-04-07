#include <iostream>
#include "Board.hpp"
#include <utility>
using namespace std;
namespace ariel {
    void Board::post (unsigned int row, unsigned int column, Direction direction, string message){
      if(max_col<column+message.length()-1){
          max_col= column+message.length();
      }
      if(max_row<row+message.length()-1){
          max_row= row+message.length();
      }
      if(min_col>column){
          min_col = column;
      }
      if(min_row>row){
          min_row = row;
      }
    if(Direction::Horizontal==direction){
  
             for(uint i =0 ;i<message.length();i++){
            
             board[row][column+i]=message.at(i);
                }
            }
    else{
         for(uint i =0 ;i<message.length();i++){
             board[row+i][column]=message.at(i);
            }
        }
    }
    string Board::read(unsigned int row, unsigned int column, Direction direction, uint length){
       std::string ans;
    if(Direction::Horizontal==direction){
            for(uint i =column ;i<column+length;i++){
            string temp = "_";
            if(board.find(row)==board.end()||board[row].find(i)==board[row].end()){
               ans.append(temp);
             }

            else{
            ans += board[row][i];
                 }
              }
            }
    else{
            for(uint i =row ;i<row+length;i++){
                  string temp = "_";
            if(board.find(i) == board.end() || board[i].find(column)== board[i].end()){
               ans.append(temp);
               
            }
            else{
            ans += board[i][column];
            }
             }
        }
        
        
        return ans;
    }
    void Board::show (){
       for(unsigned int i=min_row;i<max_row;i++){
           cout<<to_string(i)+":\t";
            cout<<Board::read(i,min_col,Direction::Horizontal,max_col-min_col);
       cout<<endl;
       }
       cout<<endl;
    }
}