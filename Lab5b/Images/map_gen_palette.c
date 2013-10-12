/* GIMP RGB C-Source image dump (map_gen_palette.c) */

static const struct {
  guint  	 width;
  guint  	 height;
  guint  	 bytes_per_pixel; /* 3:RGB, 4:RGBA */ 
  guint8 	 pixel_data[32 * 32 * 3 + 1];
} gimp_image = {
  32, 32, 3,
  "\200\0\200\300\300\300\377\377\377\377\377\377\377\377\377\300\300\300\300"
  "\300\300\300\300\300\300\300\300\377\377\377\377\377\377\300\300\300\377"
  "\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\200\0\0\200\0\0\300\300\300\377\377\377\377\377\377\300\300\300"
  "\300\300\300\300\300\300\377\377\377\377\377\377\377\377\0\377\377\0\377"
  "\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377"
  "\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0"
  "\377\377\0\300\300\300\377\377\377\377\377\377\377\377\377\200\0\0\200\0"
  "\0\200\0\0\200\0\0\200\0\0\300\300\300\300\300\300\300\300\300\300\300\300"
  "\377\377\0\377\377\0\377\377\0\377\377\0\0\377\377\0\377\377\0\377\377\0"
  "\377\377\0\377\377\0\377\377\300\300\300\377\377\377\300\300\300\377\377"
  "\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\377"
  "\377\377\377\377\377\377\200\0\0\200\0\0\200\0\0\200\0\0\200\200\200\300"
  "\300\300\300\300\300\300\300\300\200\200\0\377\377\0\377\377\0\377\377\0"
  "\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0"
  "\377\377\377\377\377\377\377\377\300\300\300\200\200\200\200\200\0\377\377"
  "\0\377\377\0\377\377\0\377\377\0\300\300\300\377\377\377\377\377\377\200"
  "\200\200\200\0\0\200\0\0\200\0\0\300\300\300\300\300\300\300\300\300\200"
  "\200\200\200\0\0\200\0\0\200\0\0\200\0\0\0\200\200\0\377\377\0\377\377\0"
  "\377\377\0\377\377\0\377\377\0\377\377\0\377\377\377\377\377\200\200\200"
  "\0\0\0\0\0\0\0\0\0\200\200\0\377\377\0\377\377\0\377\377\0\0\0\0\300\300"
  "\300\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\300\300"
  "\300\300\300\300\300\300\300\200\0\0\200\0\0\200\0\0\200\0\0\200\0\0\200"
  "\0\0\0\377\377\0\377\377\377\377\377\377\377\377\0\377\377\0\377\377\0\377"
  "\377\200\200\200\0\0\200\0\200\200\0\0\377\200\200\200\200\200\200\377\377"
  "\0\377\377\0\200\200\0\0\0\0\0\0\0\300\300\300\377\377\377\377\377\377\377"
  "\377\377\377\377\377\300\300\300\300\300\300\300\300\300\200\0\0\200\0\0"
  "\200\0\0\200\0\0\200\0\0\200\0\0\0\377\377\377\0\0\300\300\300\377\377\377"
  "\0\377\377\0\377\377\0\377\377\200\200\200\0\0\377\0\0\377\0\0\377\0\0\377"
  "\0\0\377\200\200\200\200\200\200\0\0\0\0\0\0\0\0\0\200\200\200\377\377\377"
  "\377\377\377\300\300\300\300\300\300\300\300\300\300\300\300\200\200\200"
  "\200\0\0\200\0\0\200\0\0\200\0\0\200\0\0\200\200\200\0\377\377\377\0\0\377"
  "\0\0\300\300\300\0\377\377\0\200\200\0\0\377\0\0\377\0\0\377\0\0\377\0\0"
  "\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\0\0\0\0\0\0\0\200\200\200\377\377"
  "\377\377\377\377\200\0\0\300\300\300\300\300\300\300\300\300\200\0\0\200"
  "\0\0\200\0\0\200\0\0\200\200\200\200\200\200\0\377\377\200\200\200\377\0"
  "\0\200\0\200\200\200\200\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\200\200"
  "\200\200\200\0\0\200\0\0\0\200\0\0\377\0\0\200\0\0\0\0\0\0\0\0\0\300\300"
  "\300\377\377\377\377\377\377\200\200\200\300\300\300\300\300\300\300\300"
  "\300\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\200\200\200\200\200\200\0\0\377\0\0\377\0\0\377\0\0\377"
  "\0\0\377\0\0\377\200\200\200\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\300\300\300\377\377\377\377\377\377\300\300\300\300\300\300\300"
  "\300\300\377\377\377\300\300\300\200\200\200\200\200\200\200\200\200\200"
  "\200\200\300\300\300\200\200\200\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377"
  "\0\0\377\0\0\377\0\200\200\0\200\200\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\300\300\300\377\377\377\300\300\300\300\300\300\300\300"
  "\300\300\300\300\200\200\200\200\200\200\0\0\0\0\0\0\0\0\200\0\200\200\0"
  "\0\377\0\0\377\0\0\377\0\0\377\0\0\377\200\200\200\377\377\0\200\200\200"
  "\0\377\377\0\377\377\0\377\377\0\200\200\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\300\300\300\0\377\377\300\300\300\300\300\300\300\300\300"
  "\0\377\377\0\377\377\0\377\377\0\377\377\0\200\200\0\0\377\0\0\377\0\0\377"
  "\0\0\377\0\0\377\0\200\200\0\377\377\0\377\377\0\377\377\0\377\377\0\377"
  "\377\0\377\377\0\377\377\0\377\377\0\200\200\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\0\377"
  "\377\0\377\377\0\377\377\0\377\377\0\377\377\0\200\200\0\0\377\0\0\377\0"
  "\0\377\0\0\377\0\200\200\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377"
  "\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\200\200\0"
  "\200\200\0\0\0\200\200\200\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\0\377\377\0\377\377\0\377\377\0\200\200\0\0\377"
  "\0\0\377\0\0\377\0\0\377\0\377\377\0\200\200\0\200\200\0\200\200\0\377\377"
  "\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0"
  "\377\377\0\377\377\0\377\377\0\377\377\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\0\200\200\0"
  "\0\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\200\200\200\377\377\0\200"
  "\200\200\0\0\377\0\0\377\0\0\200\0\0\0\0\0\0\0\0\0\200\0\0\200\200\200\0"
  "\377\377\0\377\377\0\377\377\0\377\377\0\377\377\0\377\377\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\0\0"
  "\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\200\200\200\200\200\200\377"
  "\377\0\200\200\0\0\0\200\0\0\377\0\0\377\0\0\377\0\0\200\0\0\0\200\0\0\377"
  "\0\0\377\0\0\377\0\0\377\0\0\0\0\0\0\200\200\200\200\200\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\200"
  "\200\200\0\0\377\0\0\377\0\0\377\0\0\377\0\200\200\200\200\200\377\377\0"
  "\377\377\0\200\200\0\200\0\0\377\0\0\200\0\200\0\0\377\0\0\377\200\200\200"
  "\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\0\0\0\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\200\200\200\0\0\377\0\0\377\0\0\377\0\200\200\0\377\377\0\377\377\0"
  "\377\377\200\200\200\200\200\0\377\0\0\377\0\0\377\0\0\377\0\0\200\200\200"
  "\0\0\377\0\0\377\200\0\200\377\0\0\377\0\0\377\0\0\377\0\0\200\0\0\200\200"
  "\200\300\300\300\300\300\300\300\300\300\200\200\200\200\200\200\300\300"
  "\300\300\300\300\0\377\377\200\200\200\0\0\377\0\0\377\0\0\377\0\0\377\0"
  "\200\200\0\200\200\0\377\377\0\377\377\377\0\0\377\0\0\377\0\0\377\0\0\377"
  "\0\0\200\0\200\0\0\377\0\0\377\200\200\200\377\0\0\200\0\0\200\0\0\200\0"
  "\0\200\200\200\300\300\300\300\300\300\300\300\300\300\300\300\377\377\377"
  "\300\300\300\300\300\300\300\300\300\377\377\377\300\300\300\377\377\377"
  "\200\200\200\0\0\377\0\0\377\0\0\377\0\0\377\0\200\200\0\377\377\200\200"
  "\200\377\0\0\377\0\0\377\0\0\200\0\0\0\0\0\0\0\377\0\0\377\0\0\377\0\0\200"
  "\200\0\0\200\0\200\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\377\377\377\377\377\377\300\300\300\300\300\300\300\300\300\377\377"
  "\377\300\300\300\377\377\377\200\200\200\0\0\200\0\0\377\0\0\377\0\0\377"
  "\0\0\377\0\200\200\0\200\200\377\0\0\377\0\0\377\0\0\377\0\0\200\0\0\0\0"
  "\200\0\0\377\0\0\377\0\0\377\0\0\377\200\200\200\300\300\300\300\300\300"
  "\300\300\300\300\300\300\377\377\377\377\377\377\377\377\377\300\300\300"
  "\300\300\300\300\300\300\377\377\377\300\300\300\377\377\377\300\300\300"
  "\0\0\0\200\200\0\200\200\200\0\0\377\0\0\377\0\0\377\0\0\377\200\200\200"
  "\200\0\200\377\0\0\377\0\0\377\0\0\200\0\0\200\0\200\0\0\377\0\0\377\0\0"
  "\377\0\0\377\0\0\377\200\200\200\200\200\200\377\377\377\377\377\377\377"
  "\377\377\377\377\377\300\300\300\300\300\300\300\300\300\377\377\377\300"
  "\300\300\377\377\377\377\377\377\200\200\200\377\377\0\377\377\0\200\200"
  "\200\0\200\200\0\0\377\0\0\377\0\0\377\0\0\377\200\200\200\200\0\200\377"
  "\0\0\200\0\0\200\0\0\200\200\200\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377"
  "\200\200\200\377\0\0\377\0\0\377\0\0\377\0\0\300\300\300\300\300\300\300"
  "\300\300\377\377\377\300\300\300\377\377\377\377\377\377\300\300\300\377"
  "\377\0\377\377\0\377\377\0\0\0\0\0\200\200\0\0\377\0\0\377\0\0\377\0\0\377"
  "\0\0\377\200\200\200\200\0\0\200\200\200\300\300\300\300\300\300\300\300"
  "\300\200\200\200\0\0\377\0\0\377\0\0\377\377\0\0\377\0\0\377\0\0\377\0\0"
  "\300\300\300\300\300\300\300\300\300\377\0\0\300\300\300\377\377\377\377"
  "\377\377\377\377\377\377\377\0\377\377\0\377\377\0\0\0\0\0\0\0\0\200\200"
  "\0\200\200\0\200\200\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0"
  "\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\377\0\0\377\0\0\377\0\0\377"
  "\0\0\300\300\300\300\300\300\300\300\300\377\0\0\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\200\200\200"
  "\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377"
  "\0\0\377\377\377\0\377\377\0\377\377\0\377\377\0\300\300\300\300\300\300"
  "\300\300\300\377\377\0\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\200\200\200\0\0\377\0\0\377"
  "\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\0\0\377\200\200\200\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300\300\300\300\300\300\300\377\377\377"
  "\377\377\377\377\377\377\300\300\300\300\300\300\300\300\300\300\300\300"
  "\300\300\300\300\300\300\300\300\300",
};

