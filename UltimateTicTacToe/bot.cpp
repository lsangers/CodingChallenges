#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define outcome_t uint8_t

using namespace std;
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
    bool player_id = true;

    bool isWin()
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
    outcome_t calculateWinState()
    {
        bool win = isWin();
        bool r = win ^ 0b1;

        return (win * player_id + r * getAvailableMoves() + r * 2);
    }

    outcome_t move(uint16_t move)
    {
        player_id != player_id;
        player_state[player_id] &= move;

        return calculateWinState();
    }
};

class BigBoard
{
public:
    TinyBoard boards[9] = {};

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