/*
  MEditor Project
  @file: edit.c
*/

#include "edit.h"
#include <ncurses.h>

void init_ncurses() {
  initscr();
  cbreak();             // Disable line buffering
  noecho();             // Don't echo input characters
  keypad(stdscr, TRUE); // Enable function keys
}