/*
####################################
#
# --- BATCH-EXEC-ZINT-0005.C ---
#
# This is a batch-exec file to convert a line of text into AZTEC Barcodes
# using Zint. Please edit the line of text to suit your needs. The AZTEC
# Barcodes will be saved as PNG files.
#
# To run the program:
#
# gcc batch-exec-zint-0005.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("zint -b 92 --eci=0 -o az_0001.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0002.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0003.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0004.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0005.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0006.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0007.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0008.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0009.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0010.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0011.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0012.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0013.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0014.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0015.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0016.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0017.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0018.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0019.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0020.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0021.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0022.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0023.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0024.png -d \"\"");
  system("zint -b 92 --eci=0 -o az_0025.png -d \"\"");
}

