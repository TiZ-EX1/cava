void cleanup_graphical_sdl(void);
int init_window_sdl(int *col, int *bgcol, char *color, char *bcolor);
void apply_window_settings_sdl(int bgcol);
int get_window_input_sdl(int *bs, int *bw, double *sens, int *mode, int modes, int *col, int *bgcol, int *w, int *h);
void draw_graphical_sdl(int bars, int rest, int bw, int bs, int *f, int *flastd, int col, int bgcol);