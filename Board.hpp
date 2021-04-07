#pragma once
#include "Direction.hpp"
#include <string>
#include <map>
#include <utility>

namespace ariel{
    class Board{
      unsigned int ROW;
      unsigned int CAL;
      private:
            unsigned int min_row ,min_col ;
            unsigned int max_row ,max_col;
        std::map<unsigned int ,std::map<unsigned int, char>> board ;
     // std::map<std::pair<unsigned int, unsigned int>,char>board;
      public:
      Board(){
             min_row = min_col = UINT16_MAX;
             max_row = max_col = 0;}
      ~Board(){
      }
       void post(unsigned int  row, unsigned int column, Direction direction, std::string message);
        std::string read(unsigned int row, unsigned int column, Direction direction,  unsigned int length);
        void show();
    };    
}