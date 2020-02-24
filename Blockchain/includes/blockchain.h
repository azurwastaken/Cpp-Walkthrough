#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <cstdint>
#include <vector>


#include "block.h"

using namespace std;

class Blockchain {
    public:
    Blockchain();

    void AddBlock(Block bNew);

    void DisplayChain();
    void DisplaySpecificNode(int i);

    bool CheckChainIntegrity();

    private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};

#endif