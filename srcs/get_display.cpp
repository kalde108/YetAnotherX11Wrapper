#include <X11/Xlib.h>

Display* get_display(void) {
	return XOpenDisplay(NULL);
}
