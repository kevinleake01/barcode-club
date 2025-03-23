/*
####################################
#
# --- BATCH-EXEC-GS1-0004.C ---
#
# This is a batch-exec file to convert GS1 data from a file
# into DataMatrix Barcodes using Zint. The files are indexed from
# dm_0001.txt to dm_0100.txt.
#
# For more info about GS1 encoded data, go to:
#
#   https://zint.org.uk/manual/chapter/6/6
#   https://www.gs1.org/standards/barcodes/2d
#
#
# Please edit the line of text to suit your needs. You may have to
# delete the "--gs1" for the GS1 Digital Link, as they are treated
# as website addresses by Zint.
#
# The DataMatrix Barcodes will be saved with a whitespace border as PNG files.
#
# To run the program:
#
# gcc batch-exec-gs1-0004.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0001.png -i dm_0001.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0002.png -i dm_0002.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0003.png -i dm_0003.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0004.png -i dm_0004.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0005.png -i dm_0005.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0006.png -i dm_0006.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0007.png -i dm_0007.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0008.png -i dm_0008.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0009.png -i dm_0009.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0010.png -i dm_0010.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0011.png -i dm_0011.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0012.png -i dm_0012.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0013.png -i dm_0013.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0014.png -i dm_0014.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0015.png -i dm_0015.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0016.png -i dm_0016.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0017.png -i dm_0017.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0018.png -i dm_0018.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0019.png -i dm_0019.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0020.png -i dm_0020.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0021.png -i dm_0021.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0022.png -i dm_0022.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0023.png -i dm_0023.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0024.png -i dm_0024.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0025.png -i dm_0025.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0026.png -i dm_0026.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0027.png -i dm_0027.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0028.png -i dm_0028.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0029.png -i dm_0029.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0030.png -i dm_0030.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0031.png -i dm_0031.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0032.png -i dm_0032.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0033.png -i dm_0033.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0034.png -i dm_0034.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0035.png -i dm_0035.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0036.png -i dm_0036.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0037.png -i dm_0037.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0038.png -i dm_0038.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0039.png -i dm_0039.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0040.png -i dm_0040.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0041.png -i dm_0041.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0042.png -i dm_0042.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0043.png -i dm_0043.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0044.png -i dm_0044.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0045.png -i dm_0045.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0046.png -i dm_0046.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0047.png -i dm_0047.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0048.png -i dm_0048.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0049.png -i dm_0049.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0050.png -i dm_0050.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0051.png -i dm_0051.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0052.png -i dm_0052.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0053.png -i dm_0053.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0054.png -i dm_0054.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0055.png -i dm_0055.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0056.png -i dm_0056.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0057.png -i dm_0057.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0058.png -i dm_0058.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0059.png -i dm_0059.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0060.png -i dm_0060.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0061.png -i dm_0061.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0062.png -i dm_0062.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0063.png -i dm_0063.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0064.png -i dm_0064.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0065.png -i dm_0065.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0066.png -i dm_0066.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0067.png -i dm_0067.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0068.png -i dm_0068.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0069.png -i dm_0069.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0070.png -i dm_0070.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0071.png -i dm_0071.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0072.png -i dm_0072.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0073.png -i dm_0073.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0074.png -i dm_0074.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0075.png -i dm_0075.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0076.png -i dm_0076.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0077.png -i dm_0077.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0078.png -i dm_0078.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0079.png -i dm_0079.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0080.png -i dm_0080.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0081.png -i dm_0081.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0082.png -i dm_0082.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0083.png -i dm_0083.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0084.png -i dm_0084.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0085.png -i dm_0085.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0086.png -i dm_0086.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0087.png -i dm_0087.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0088.png -i dm_0088.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0089.png -i dm_0089.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0090.png -i dm_0090.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0091.png -i dm_0091.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0092.png -i dm_0092.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0093.png -i dm_0093.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0094.png -i dm_0094.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0095.png -i dm_0095.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0096.png -i dm_0096.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0097.png -i dm_0097.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0098.png -i dm_0098.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0099.png -i dm_0099.txt");
  system("zint -b 71 --gs1 --whitesp=5 --vwhitesp=5 --eci=0 -o dm_0100.png -i dm_0100.txt");
}

