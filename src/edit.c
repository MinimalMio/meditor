/*
  MEditor Project
  @file: edit.c
*/

#include "edit.h"
#include <ncurses.h>

void init_ncurses() {
  initscr();
  raw();                                      // Disable line buffering
  noecho();                                   // Don't echo input characters
  keypad(stdscr, TRUE);                       // Enable function keys
  getmaxyx(stdscr, screen_rows, screen_cols); // Get screen size
}

void init_editor() {
  // Create the command window for editor,
  // as normally, it will displayed at the bottom of the screen,
  // and only use 1 row.
  WINDOW *command_win = newwin(1, screen_cols, screen_rows - 1, 0);
  // Create the status bar for editor.
  // as normally, it will displayed at the bottom of the screen,
  // and only use 1 row, and it will be above the command window's row.
  WINDOW *status_bar = newwin(1, screen_cols, screen_rows - 2, 0);

  wprintw(status_bar, "MEditor - Status Bar");
}