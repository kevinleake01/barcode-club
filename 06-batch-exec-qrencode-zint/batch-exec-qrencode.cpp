/*
####################################
#
# --- BATCH-EXEC-QRENCODE.C++ ---
#
# This is a batch-exec file to convert a line of text, or text from a file into QR Codes
# using Qrencode. Please edit the line of text to suit your needs. The QR Codes will be
# saved as PNG files.
#
# To run the program:
#
# gcc batch-exec-qrencode.cpp; ./a.out
#
####################################
*/

#include <cstdlib>

int main(int argc, char *argv[])
{
  std::system("qrencode -8 -o qr_0001.png \"https://facebook.com/\"");
  std::system("qrencode -8 -o qr_0002.png \"https://google.com/\"");
  std::system("qrencode -8 -o qr_0003.png \"A line of text\"");
  std::system("qrencode -8 -o qr_0004.png -r text.txt");
}

