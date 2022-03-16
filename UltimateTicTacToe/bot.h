#include <stdint.h>

#define winstate_t uint8_t
#define player_id_t bool

namespace UTTT
{

    class TinyBoard
    {
    public:
        bool isWin();
        uint16_t getAvailableMoves();
        winstate_t calculateWinState(player_id_t player_id);
        winstate_t move(player_id_t player_id, uint16_t move);
    };

}