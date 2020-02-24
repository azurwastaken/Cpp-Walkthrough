#include "blockchain.h"

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
    _vChain.at(i).DisplayBlockData();
}

bool Blockchain::CheckChainIntegrity()
{
    unsigned long chainSize = _vChain.size();

    for (unsigned long i = 1; i < chainSize ; i++)
    {
        if (_vChain.at(i - 1).GetHash() != _vChain.at(i).sPrevHash){
            cout << "Chain is corrupted" << endl;
            return false;
        }
    }
    cout << "Chain is Valid" << endl;
    return true;
}