#include <common_utility.h>
#include <matrix.h>
#include <main.h>

ExDemoFuncPtr matrixModuleMapper(int selection);

void matrixModule() {
    processMenu(MATRIX_MENU_PATH, matrixModuleMapper);
}

ExDemoFuncPtr matrixModuleMapper(const int selection) {
    switch (selection) {
        case 1:
            return checkBoardCellColorDemo;
        case 2:
            return bishopAndPawnDemo;
        case 3:
            return chessKnightDemo;
        case 4:
            return bishopDiagonalDemo;
        case 5:
            return spiralNumbersDemo;
        case 6:
            return sudokuCheckingDemo;
        case 7:
            return findPathDemo;
        default:
            return NULL;
    }
}

