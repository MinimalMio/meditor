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

  refresh();
  getchar();
  endwin();
  return 0;
}