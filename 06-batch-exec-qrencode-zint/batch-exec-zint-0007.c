/*
####################################
#
# --- BATCH-EXEC-ZINT-0007.C ---
#
# This is a batch-exec file to convert a line of text into DataMatrix
# using Zint. Please edit the line of text to suit your needs. The DataMatrix
# Barcodes will be saved as PNG files.
#
# To run the program:
#
# gcc batch-exec-zint-0007.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("zint -b 71 --eci=26 -o dm_0001.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0002.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0003.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0004.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0005.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0006.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0007.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0008.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0009.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0010.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0011.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0012.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0013.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0014.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0015.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0016.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0017.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0018.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0019.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0020.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0021.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0022.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0023.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0024.png -d \"\"");
  system("zint -b 71 --eci=26 -o dm_0025.png -d \"\"");
}

