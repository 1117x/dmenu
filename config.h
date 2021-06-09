/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Mononoki Nerd Font:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char norm_fg[] = "#d8dee9";
static const char norm_bg[] = "#2E3440";

static const char norm_border[] = "#4C566A";
static const char bar_border[] = "#4C566A";

static const char sel_fg[] = "#eceff4";
static const char sel_bg[] = "#4C566A";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { norm_fg, norm_bg },
	[SchemeSel] = { sel_fg, sel_bg },
	[SchemeOut] = { norm_border, bar_border },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
