#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
    int opp;
    int pla;

    std::cout << "Welcome to RPS game!\n";
do {
    std::cout << "Which action would you like to perform?\n";
    std::cout << "(1) ROCK\n(2) PAPER\n(3) SCISSORS\n(4) EXIT\n";

    std::cin >> pla;

    srand(time(NULL));
    opp = rand() % 3 + 1;

    if(opp == pla) {
        std::cout << "It's a draw!\n";
    }
    else if(opp == 1 && pla == 2) {
        std::cout << "Opponent chose rock and you won!\n";
    }
    else if(opp == 1 && pla == 3) {
        std::cout << "Opponent chose rock and you lost...\n";
    }
    else if(opp == 2 && pla == 1) {
        std::cout << "Opponent chose paper and you lost...\n";
    }
    else if(opp == 2 && pla == 3) {
        std::cout << "Opponent chose paper and you won!\n";
    }
    else if(opp == 3 && pla == 1) {
        std::cout << "Opponent chose scissors and you won!\n";
    }
    else if(opp == 3 && pla == 1) {
        std::cout << "Opponent chose scissors and you won!\n";
    }
    else if(opp == 3 && pla == 2) {
        std::cout << "Opponent chose scissors and you lost...\n";
    }
    else {
        std::cout << "Exiting from the game...";
    }
}
    while(pla < 4);

    if(pla > 4) {
        std::cout << "You tried wrong process number to use.";
    }

    return 0;
}