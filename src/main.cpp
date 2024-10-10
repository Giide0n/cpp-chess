#include <iostream>

std::string board[64] = {"♖", "♘", "♗", "♔", "♕", "♗", "♘", "♖", "♙", "♙", "♙",
                         "♙", "♙", "♙", "♙", "♙", "·", "·", "·", "·", "·", "·",
                         "·", "·", "·", "·", "·", "·", "·", "·", "·", "·", "·",
                         "·", "·", "·", "·", "·", "·", "·", "·", "·", "·", "·",
                         "·", "·", "·", "·", "♟", "♟", "♟", "♟", "♟", "♟", "♟",
                         "♟", "♜", "♞", "♝", "♚", "♛", "♝", "♞", "♜"};

void drawBoard() {
  for (size_t i = 0; i < std::size(board); i++) {
    if (i % 8 == 0) {
      std::cout << std::endl << 8 - (i / 8) << ' ';
    }
    std::cout << ' ' << board[63 - i] << ' ';
  }
  std::cout << std::endl << "  ";
  for (size_t i = 0; i < 8; i++) {
    std::cout << ' ' << static_cast<char>('a' + i) << ' ';
  }
  std::cout << std::endl;
}

int main() {
  std::string input;
  while (std::cin >> input && input != "/") {
    std::cout << "You Typed: " << input;
    drawBoard();
  }
}
