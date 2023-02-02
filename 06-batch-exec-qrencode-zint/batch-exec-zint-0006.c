/*
####################################
#
# --- BATCH-EXEC-ZINT-0006.C ---
#
# This is a batch-exec file to convert a line of text into PDF417 Codes
# using Zint. Please edit the line of text to suit your needs. The PDF417
# Barcodes will be saved as PNG files.
#
# To run the program:
#
# gcc batch-exec-zint-0006.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("zint -b 55 --eci=26 -o pdf417_0001.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0002.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0003.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0004.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0005.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0006.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0007.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0008.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0009.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0010.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0011.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0012.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0013.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0014.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0015.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0016.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0017.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0018.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0019.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0020.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0021.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0022.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0023.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0024.png -d \"\"");
  system("zint -b 55 --eci=26 -o pdf417_0025.png -d \"\"");
}

