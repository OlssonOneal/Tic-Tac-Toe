#include "AI_MOVE_GAME.h"

void TestALL(){
    
    int N = 4;
    int win_l = 3;

    DynamicArray<char> map(N * N);


    {
        for (int i = 0; i < map.GetSize(); ++i) {
            map[i] = empty_cell;
        }
        map[5] = user_symbol;
        map[10] = user_symbol;
        map[15] = user_symbol;
        if(!is_over(map,user_symbol,N,win_l)){
            std::cerr << "Incorrect work !(CASE 1)";
            std::exit(0);
        }
    }

    {
        for (int i = 0; i < map.GetSize(); ++i) {
            map[i] = empty_cell;
        }
        map[6] = user_symbol;
        map[9] = user_symbol;
        map[12] = user_symbol;
        if(!is_over(map,user_symbol,N,win_l)){
            std::cerr << "Incorrect work !(CASE 2)";
            std::exit(0);
        }
    }

    {
        for (int i = 0; i < map.GetSize(); ++i) {
            map[i] = empty_cell;
        }
        map[9] = user_symbol;
        map[10] = user_symbol;
        map[11] = user_symbol;
        if(!is_over(map,user_symbol,N,win_l)){
            std::cerr << "Incorrect work !(CASE 3)";
            std::exit(0);
        }
    }

    {
        for (int i = 0; i < map.GetSize(); ++i) {
            map[i] = empty_cell;
        }
        map[6] = user_symbol;
        map[10] = user_symbol;
        map[14] = user_symbol;
        if(!is_over(map,user_symbol,N,win_l)){
            std::cerr << "Incorrect work !(CASE 3)";
            std::exit(0);
        }
    }
    

    std::cerr << "ALL TESTS OK !\n";
}