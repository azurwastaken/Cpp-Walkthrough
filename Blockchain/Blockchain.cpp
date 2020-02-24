#include "Blockchain.h"

Blockchain::Blockchain() {
    _vChain.emplace_back(Block(0, "First Block"));
    _nDifficulty = 4;
}

void Blockchain::AddBlock(Block bNew) {
    bNew.sPrevHash = _GetLastBlock().GetHash();
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

Block Blockchain::_GetLastBlock() const {
    return _vChain.back();
}

void Blockchain::DisplayChain() {
    for (Block &element : _vChain)
    {
        element.DisplayBlockData();
    }
}

void Blockchain::DisplaySpecificNode(int i)
{
    cout << _vChain[i].DisplayBlockData << endl;
}