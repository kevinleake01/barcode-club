/*
####################################
#
# --- BATCH-EXEC-QRENCODE-0001.C++ ---
#
# This is a batch-exec file to convert a line of text into QR Codes
# using Qrencode. Please edit the line of text to suit your needs.
# The QR Codes will be saved as PNG files.
#
# To run the program:
#
# gcc batch-exec-qrencode-0001.cpp; ./a.out
#
####################################
*/

#include <cstdlib>

int main(int argc, char *argv[])
{
  std::system("qrencode -8 -o qr_0001.png \"\"");
  std::system("qrencode -8 -o qr_0002.png \"\"");
  std::system("qrencode -8 -o qr_0003.png \"\"");
  std::system("qrencode -8 -o qr_0004.png \"\"");
  std::system("qrencode -8 -o qr_0005.png \"\"");
  std::system("qrencode -8 -o qr_0006.png \"\"");
  std::system("qrencode -8 -o qr_0007.png \"\"");
  std::system("qrencode -8 -o qr_0008.png \"\"");
  std::system("qrencode -8 -o qr_0009.png \"\"");
  std::system("qrencode -8 -o qr_0010.png \"\"");
}

