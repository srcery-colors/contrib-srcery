/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1c1b19", /* black   */
  [1] = "#ef2f27", /* red     */
  [2] = "#519f50", /* green   */
  [3] = "#fbb829", /* yellow  */
  [4] = "#2c78bf", /* blue    */
  [5] = "#e02c6d", /* magenta */
  [6] = "#0aaeb3", /* cyan    */
  [7] = "#d0bfa1", /* white   */

  /* 8 bright colors */
  [8]  = "#918175", /* black   */
  [9]  = "#f75341", /* red     */
  [10] = "#98bc37", /* green   */
  [11] = "#fed06e", /* yellow  */
  [12] = "#68a8e4", /* blue    */
  [13] = "#ff5c8f", /* magenta */
  [14] = "#53fde9", /* cyan    */
  [15] = "#fce8c3", /* white   */

  /* special colors */
  [256] = "#1c1b19", /* background */
  [257] = "#fce8c3", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
