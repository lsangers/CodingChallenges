#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "bot.h"

using namespace std;
using namespace UTTT;

static const uint16_t masks[8] = {
    0b000'000'111,
    0b000'111'000,
    0b111'000'000,

    0b001'001'001,
    0b010'010'010,
    0b100'100'100,

    0b100'010'001,
    0b001'010'100,
};

class TinyBoard
{
public:
    uint16_t player_state[2] = {0b000'000'000, 0b000'000'000};

    bool isWin(player_id_t player_id)
    {
        for (int i = 0; i < 8; i++)
        {
            return (player_state[player_id] & masks[i]) == masks[i];
        }
    }

    uint16_t getAvailableMoves()
    {
        return 0b111'111'111 ^ (player_state[0] | player_state[1]);
    }

    /*
     *   Returns the following:
     *   Undecided = 2
     *   Draw = 3
     *   Win = player_id
     */
    winstate_t calculateWinState(player_id_t player_id)
    {
        bool win = isWin(player_id);
        bool r = win ^ 0b1;

        return (win * player_id + r * getAvailableMoves() + r * 2);
    }

    winstate_t move(player_id_t player_id, uint16_t move)
    {
        player_id != player_id;
        player_state[player_id] &= move;

        return calculateWinState(player_id);
    }
};

class BigBoard
{
public:
    UTTT::TinyBoard boards[9] = {};

} board;

class Node
{

} node;

int main()
{
    // game loop
    while (1)
    {
        int opponent_row;
        int opponent_col;
        cin >> opponent_row >> opponent_col;
        cin.ignore();
        int valid_action_count;
        cin >> valid_action_count;
        cin.ignore();
        for (int i = 0; i < valid_action_count; i++)
        {
            int row;
            int col;
            cin >> row >> col;
            cin.ignore();
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << "0 0" << endl;
    }
}