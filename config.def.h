/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 300;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"SF Mono:size=11:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
// Manjaro i3:
	/* [SchemeNorm] = { "#F9FAF9", "#222D31" }, */
	/* [SchemeSel] = { "#F9FAF9", "#16A085" }, */
// Solarized light:
    /* [SchemeNorm] = { "#657b83", "#fdf6e3" }, */
    /* [SchemeSel] = { "#657b83", "#eee8d5"}, */
// Solarized dark:
    [SchemeNorm] = { "#839496", "#002b36" },
    [SchemeSel] = { "#839496", "#073642"},
    [SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;
