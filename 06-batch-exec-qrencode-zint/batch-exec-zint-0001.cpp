/*
####################################
#
# --- BATCH-EXEC-ZINT-0001.C++ ---
#
# This is a batch-exec file to convert a line of text into QR Codes
# using Zint. Please edit the line of text to suit your needs.
# The QR Codes will be saved as PNG files.
#
# To run the program:
#
# gcc batch-exec-zint-0001.cpp; ./a.out
#
####################################
*/

#include <cstdlib>

int main(int argc, char *argv[])
{
  std::system("zint -b 58 --eci=26 -o qr_0001.png -d \"\"");
  std::system("zint -b 58 --eci=26 -o qr_0002.png -d \"\"");
  std::system("zint -b 58 --eci=26 -o qr_0003.png -d \"\"");
  std::system("zint -b 58 --eci=26 -o qr_0004.png -d \"\"");
  std::system("zint -b 58 --eci=26 -o qr_0005.png -d \"\"");
  std::system("zint -b 58 --eci=26 -o qr_0006.png -d \"\"");
  std::system("zint -b 58 --eci=26 -o qr_0007.png -d \"\"");
  std::system("zint -b 58 --eci=26 -o qr_0008.png -d \"\"");
  std::system("zint -b 58 --eci=26 -o qr_0009.png -d \"\"");
  std::system("zint -b 58 --eci=26 -o qr_0010.png -d \"\"");
}

