#include <stdio.h>
#include <windows.h>
#include <conio.h>

typedef struct {
    int right, left, bottom, top;
} Console;


/** SCREEN AND ERASING */
void clearBeforeCursor() { printf("\x1b[1J"); }; // cursor will not move
void clearAfterCursor() { printf("\x1b[0J"); }; // cursor will not move
void clearScreen() { printf("\x1b[2J"); } // clearBeforeCursor() + clearAfterCursor()

void clearBeforeCursorOfLine() { printf("\x1b[1K"); }; // cursor will not move
void clearAfterCursorOfLine() { printf("\x1b[0K"); }; // cursow will not move
void clearCursorLine() { printf("\x1b[2K"); } // clearBeforeCursorOfLine() + clearAferCursorOfLine()

/** CURSOR MOVEMENT */
void goUpBy(int n) { printf("\x1b[%dA", n); } // cursor will move
void goDownBy(int n) { printf("\x1b[%dB", n); } // cursor will move
void goRightBy(int n) { printf("\x1b[%dC", n); }// cursor will move
void goLeftBy(int n) { printf("\x1b[%dD", n); }// cursor will move
void goHome() { printf("\x1b[H"); } // cursor will move
void goToAt(int col, int row) { 
    printf("\x1b[%d;%dH", row, col); 
    // OR
    // printf("\x1b[%d;%df", x, y); 
}
/** TEXT ATTRIBUTES (SGR Parameters) */
void startBold() { printf("\x1b[1m"); }
void startDimOrFaint() { printf("\x1b[2m"); }
void startItalic() { printf("\x1b[3m"); }
void startUnderline() { printf("\x1b[4m"); }
void startBlink() { printf("\x1b[5m"); } // not working
void startReverseOrInverse() { printf("\x1b[7m"); } // Background White
void startHidden() { printf("\x1b[8m"); }
void startStrikethrough() { printf("\x1b[9m"); }
void stopTextAttr() { printf("\x1b[0m"); }

/** SAVE RESTORE IS NOT WORKING */
void saveCursorPosition() { printf("\x1b[s"); }
void restoreSavedPosition() { printf("\x1b[u"); }

/** HYBRID */
void clearScreenAndGoHome() { clearScreen(); goHome(); }

// get active console information
void GetConsoleInfo(Console *console) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    BOOL ok = GetConsoleScreenBufferInfo(
        GetStdHandle(STD_OUTPUT_HANDLE), &csbi
    );
    if (!ok) {
        fprintf(stderr, "Error getting console info\n");
        return;
    }
    console->right = csbi.srWindow.Right;
    console->left = csbi.srWindow.Left;
    console->bottom = csbi.srWindow.Bottom;
    console->top = csbi.srWindow.Top;
}

void drawRowNo(int row, Console *console) {
    goHome();
    if(row != 0) goDownBy(row);
    startUnderline();
    for(int i=console->left; i<=console->right; i+=2) {
        printf("q");
    }
    stopTextAttr();
}

void drawColumnNo(int col, Console *console) {
    goHome();
    if(col != 0) goRightBy(col);
    printf("\x1b(0"); // switch to graphic
    for(int i=console->top; i<=console->bottom; i+=2) {
        printf("x");
        goLeftBy(1);
        goDownBy(1);
    }
    printf("\x1b(B");  // back to normal
}

void drawGrid(Console *console) {
    printf("\x1b(0"); // switch to graphic
    for(int col=console->left; col<=10*2; col++) {
        for(int row=console->top; row<=10*2; ) {
            goToAt(col, row);
            if(col%2 == 0) {
                printf("q");
                row+=2;
            } else {
                printf("x");
                row++;
            }
        }
    }
    printf("\x1b(B");  // back to normal
}

void main() {
    system("cls");
    Console console;
    GetConsoleInfo(&console);
    // for(int i=0; i<10; i++)
    //     drawRowNo(i, &console); // first row
    // for(int i=0; i<10; i++)
    //     drawColumnNo(i, &console); // first column
    drawGrid(&console);
    getch();
}