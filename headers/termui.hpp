#ifndef TERMUI_HPP
#define TERMUI_HPP

#include <string>
#include <vector>

using namespace std;

struct _SIZE { int width, height; };
struct _POSITION { int x, y; };

/*
Window classes, it create main window and child window
Window Object must be have:
    - name
    - id(address)
    - size
    - begin
*/
class Window {
    public:

};
class Termui {
    public:
        static void init(void);
        static void quit(void);
};



#endif