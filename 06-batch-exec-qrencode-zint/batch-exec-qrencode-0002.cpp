/*
####################################
#
# --- BATCH-EXEC-QRENCODE-0002.C++ ---
#
# This is a batch-exec file to convert text from a file into QR Codes
# using Qrencode. Please edit the line of text to suit your needs.
# The QR Codes will be saved as PNG files.
#
# To run the program:
#
# gcc batch-exec-qrencode-0002.cpp; ./a.out
#
####################################
*/

#include <cstdlib>

int main(int argc, char *argv[])
{
  std::system("qrencode -8 -o qr_0001.png -r text.txt");
  std::system("qrencode -8 -o qr_0002.png -r text.txt");
  std::system("qrencode -8 -o qr_0003.png -r text.txt");
  std::system("qrencode -8 -o qr_0004.png -r text.txt");
  std::system("qrencode -8 -o qr_0005.png -r text.txt");
  std::system("qrencode -8 -o qr_0006.png -r text.txt");
  std::system("qrencode -8 -o qr_0007.png -r text.txt");
  std::system("qrencode -8 -o qr_0008.png -r text.txt");
  std::system("qrencode -8 -o qr_0009.png -r text.txt");
  std::system("qrencode -8 -o qr_0010.png -r text.txt");
}

