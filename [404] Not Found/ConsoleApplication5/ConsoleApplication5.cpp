#include <iostream>
#include <curses.h> // Replace <ncurses.h> with <curses.h>

int main() {
    // 1. Initialize ncurses
    initscr();               // Starts ncurses mode (allocates memory, sets up screen)

    // Optional: Enable colors (must be done after initscr)
    if (has_colors()) {
        start_color();
    }

    // Optional: Disable echoing of typed characters
    noecho();

    // 2. Clear the screen and position the cursor
    clear();

    // 3. Print the text on the screen
    // move(y, x) moves the cursor to the specified row and column
    int center_y, center_x;
    getmaxyx(stdscr, center_y, center_x); // Get screen size (stdscr is the default window)

    // Calculate position for text (rough center)
    center_y = center_y / 2;
    center_x = (center_x - 17) / 2; // Subtract the length of "Hello, TUI World!" (17 chars)

    move(center_y, center_x);
    printw("Hello, TUI World!"); // Print formatted string

    // 4. Refresh the screen to show changes
    refresh();

    // 5. Wait for user input (a keypress) before exiting
    mvprintw(center_y + 2, center_x - 5, "Press any key to exit...");
    refresh();
    getch();                 // Wait for a single character input

    // 6. Clean up
    endwin();                // End ncurses mode (restore terminal settings)

    return 0;
}