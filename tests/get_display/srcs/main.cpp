#include "X11-wrapper.h"
#include <stdio.h>
#include <X11/Xlib.h>

int main() {
	Display* display = get_display();
	if (display == NULL) {
		fprintf(stderr, "Failed to open display\n");
		return 1;
	}
	printf("Display opened\n");
	XCloseDisplay(display);
	return 0;
}
