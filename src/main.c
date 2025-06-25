/*
  MEditor Project
  @file: main.c
*/

#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

#include "edit.h"

int main() {
  init_ncurses();

  int screen_rows, screen_cols;
  getmaxyx(stdscr, screen_rows, screen_cols);

  init_editor(screen_rows, screen_cols);

  refresh();
  getchar();
  endwin();
  return 0;
}