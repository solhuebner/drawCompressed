# drawCompressed
In this demo we use a new function drawCompressed. All images have been compressed by the compression tool on command line (compiled version should work on MAC os and linux).

Compress ratio really depends on how much big white or black junks are in the image.

use the compression tool::

./compress imagetitle.png myimagetitle

in your sketch use as drawCompressed as:
drawCompressed(int16_t sx, int16_t sy, const uint8_t *bitmap, uint8_t color);

No heights or widths need to be givin ,, because those are part of the compressed data.

#Please note !
- height of your image always needs to be a multiple of 8 (due to the fact that half bytes don't work)
- look at the compress ratio, before using the compressed data, Iit might be worse in some cases
