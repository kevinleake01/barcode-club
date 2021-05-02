/*
####################################
#
# --- BATCH-EXEC-ZINT.C ---
#
# This is a batch-exec file to convert a line of text, or text from a file into QR Codes
# using Zint. Please edit the line of text to suit your needs. The QR Codes will be
# saved as PNG files.
#
# To run the program:
#
# gcc batch-exec-zint.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("zint -b 58 --eci=26 -o qr_0001.png -d \"https://facebook.com/\"");
  system("zint -b 58 --eci=26 -o qr_0002.png -d \"https://twitter.com/\"");
  system("zint -b 58 --eci=26 -o qr_0003.png -d \"https://google.com/\"");
  system("zint -b 58 --eci=26 -o qr_0004.png -d \"--- A line of text ---\"");
  system("zint -b 58 --eci=26 -o qr_0005.png -i text.txt");
}

