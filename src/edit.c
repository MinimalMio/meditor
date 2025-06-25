#include <ncurses.h>
#include "edit.h"

void init_ncurses() {
    initscr();
    cbreak();                            // Disable line buffering
    noecho();                            // Don't echo input characters
    keypad(stdscr, TRUE);                // Enable function keys
}