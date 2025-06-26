cmake_minimum_required(VERSION 3.24)
project(
  me
  LANGUAGES C
  VERSION 0.1.0
  DESCRIPTION "My Minimal Editor."
)

find_package(Curses REQUIRED)

add_executable(${PROJECT_NAME}
  src/main.c
  src/edit.c
)

target_link_libraries(${PROJECT_NAME}
  ncurses
)
