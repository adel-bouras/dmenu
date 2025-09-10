/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:size=15 , Noto Sans Arabic:size=16"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#e53212" },
	[SchemeSel] = { "#ffffff", "#f67434" },
	[SchemeOut] = { "#000000", "#2d3d5d" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 7;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
