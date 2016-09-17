#pragma once
#include "State.h"
#include "../levels/Level.h"
class GameState : public State {
public:
    GameState(irr::IrrlichtDevice* dev);
    virtual ~GameState();
    virtual void update(float dt);
    void init();
private:
  Level* level1;
};