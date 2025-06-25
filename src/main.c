#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#include "edit.h"

int main() {
  init_ncurses();
  printw("Hello, world!");
  refresh();
  getchar();
  endwin();
  return 0;
}
