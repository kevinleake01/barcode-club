/*
####################################
#
# --- BATCH-EXEC-ZINT-0020.C ---
#
# This is a batch-exec file to convert text from a file into QR Codes
# using Zint. The files are indexed from qr_0001.txt to qr_0100.txt.
# Please edit the line of text to suit your needs. The QR Codes will
# be saved as PNG files.
#
# To run the program:
#
# gcc batch-exec-zint-0020.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0001.png -i qr_0001.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0002.png -i qr_0002.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0003.png -i qr_0003.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0004.png -i qr_0004.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0005.png -i qr_0005.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0006.png -i qr_0006.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0007.png -i qr_0007.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0008.png -i qr_0008.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0009.png -i qr_0009.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0010.png -i qr_0010.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0011.png -i qr_0011.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0012.png -i qr_0012.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0013.png -i qr_0013.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0014.png -i qr_0014.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0015.png -i qr_0015.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0016.png -i qr_0016.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0017.png -i qr_0017.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0018.png -i qr_0018.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0019.png -i qr_0019.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0020.png -i qr_0020.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0021.png -i qr_0021.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0022.png -i qr_0022.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0023.png -i qr_0023.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0024.png -i qr_0024.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0025.png -i qr_0025.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0026.png -i qr_0026.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0027.png -i qr_0027.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0028.png -i qr_0028.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0029.png -i qr_0029.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0030.png -i qr_0030.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0031.png -i qr_0031.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0032.png -i qr_0032.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0033.png -i qr_0033.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0034.png -i qr_0034.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0035.png -i qr_0035.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0036.png -i qr_0036.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0037.png -i qr_0037.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0038.png -i qr_0038.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0039.png -i qr_0039.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0040.png -i qr_0040.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0041.png -i qr_0041.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0042.png -i qr_0042.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0043.png -i qr_0043.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0044.png -i qr_0044.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0045.png -i qr_0045.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0046.png -i qr_0046.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0047.png -i qr_0047.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0048.png -i qr_0048.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0049.png -i qr_0049.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0050.png -i qr_0050.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0051.png -i qr_0051.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0052.png -i qr_0052.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0053.png -i qr_0053.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0054.png -i qr_0054.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0055.png -i qr_0055.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0056.png -i qr_0056.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0057.png -i qr_0057.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0058.png -i qr_0058.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0059.png -i qr_0059.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0060.png -i qr_0060.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0061.png -i qr_0061.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0062.png -i qr_0062.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0063.png -i qr_0063.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0064.png -i qr_0064.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0065.png -i qr_0065.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0066.png -i qr_0066.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0067.png -i qr_0067.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0068.png -i qr_0068.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0069.png -i qr_0069.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0070.png -i qr_0070.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0071.png -i qr_0071.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0072.png -i qr_0072.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0073.png -i qr_0073.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0074.png -i qr_0074.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0075.png -i qr_0075.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0076.png -i qr_0076.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0077.png -i qr_0077.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0078.png -i qr_0078.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0079.png -i qr_0079.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0080.png -i qr_0080.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0081.png -i qr_0081.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0082.png -i qr_0082.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0083.png -i qr_0083.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0084.png -i qr_0084.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0085.png -i qr_0085.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0086.png -i qr_0086.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0087.png -i qr_0087.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0088.png -i qr_0088.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0089.png -i qr_0089.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0090.png -i qr_0090.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0091.png -i qr_0091.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0092.png -i qr_0092.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0093.png -i qr_0093.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0094.png -i qr_0094.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0095.png -i qr_0095.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0096.png -i qr_0096.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0097.png -i qr_0097.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0098.png -i qr_0098.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0099.png -i qr_0099.txt");
  system("zint -b 58 --whitesp=50 --vwhitesp=50 --eci=26 -o qr_0100.png -i qr_0100.txt");
}

