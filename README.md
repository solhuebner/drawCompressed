# drawCompressed
In this demo we use a new function drawCompressed. All images have been compressed by the compression tool on command line (compiled version should work on OSX and linux).

Compress ratio really depends on how much big white or black junks are in the image.

if you want to compress images you'll have to use the compression tool:

https://github.com/TEAMarg/Cabi

in your sketch use drawCompressed:

```C++
drawCompressed(int16_t sx, int16_t sy, const uint8_t *bitmap, uint8_t color);
```
put in your compressed data that will look like this:

```C++
const uint8_t PROGMEM myimagetitle_compressed[] = {
  0x7f,0x3f,0xa0,0xc1,0x74,0x76,0xbb,0x54,0x52,0x39,0xe7,0x9c,0x92,0x4a,0x2e,0x95,
  0x5c,0xa6,0xb3,0x95,0xcc,0xa6,0xb3,0xe9,0x6c,0x3a,0x9b,0xce,0x12,0xf9,0x74,0x3e,
  0x9d,0x4f,0xe7,0xd3,0xf9,0x74,0x27,0x95,0xac,0xa5,0x92, ...
};
```

No heights or widths need to be givin, because those are part of the compressed data.

#Please note !
- height of your image always needs to be a multiple of 8 (due to the fact that half bytes don't work)
- look at the compress ratio, before using the compressed data, it might be worse in some cases
