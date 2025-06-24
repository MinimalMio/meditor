#include <stdio.h>
#include <ncurses.h>

int main() {
  initscr();
  printw("Hello, world!");
  refresh();
  getchar();
  endwin();
  return 0;
}
