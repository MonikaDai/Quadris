#ifndef _LBLOCK_H_
#define _LBLOCK_H_

#include <iostream>
#include "block.h"
#include "board.h"

class LBlock: public Block{
    void updateBcells(Board *b);

 public:
  LBlock(Board *b, int selflevel, int x, int y);
  void tmpPos(Position &ref, std::vector<Position> &tmp);
  void clockwise(Board *b);
  void counterclockwise(Board *b);

};

#endif
