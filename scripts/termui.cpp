#include "../headers/termui.hpp"
#include <ncursesw/cursesw.h>
#include <bits/stdc++.h>

using namespace std;

void Termui::init(void) {
    ::setlocale(LC_ALL, "");
    ::initscr();
    ::noecho();
    ::cbreak();
    ::atexit(Termui::quit);
}

void Termui::quit(void) {
    ::echo();
    ::nocbreak();
    ::endwin();
}
