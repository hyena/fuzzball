/*
 * Copyright (c) 1991-2000 by Fuzzball Software
 * under the GNU Public License
 *
 * Some parts of this code Copyright (c) 1990 Chelsea Dyerman
 * University of California, Berkeley (XCF)
 */

#include "fb.h"
#include "config.h"
#include "patchlevel.h"
#include "params.h"
#include "externs.h"

#define generation "1"
#define creation "Mon Apr 14 2008 at 12:01:17 EDT"
const char *version = PATCHLEVEL;
#ifdef DEBUG
#define debug "Debug Version, assertions enabled"
#else
#define debug ""
#endif


const char *infotext[] =
{
    VERSION,
    debug,
    generation,
    creation,
    " ",
    "Based on the original code written by these programmers:",
    "  David Applegate    James Aspnes    Timothy Freeman    Bennet Yee",
    " ",
    "Others who have done major coding work along the way:",
    "  Lachesis, ChupChups, FireFoot, Russ 'Random' Smith, and Dr. Cat",
    " ",
    "This is a user-extendible, user-programmable multi-user adventure game.",
    "TinyMUCK was derived from TinyMUD v1.5.2, with extensive modifications.",
    "Because of all the modifications, this program is not in any way, shape,",
    "or form being supported by any of the original authors.  Any bugs, ideas,",
    "suggestions,  etc, should be directed to the persons listed below.",
    "Do not send diff files, send us mail about the bug and describe as best",
    "as you can, where you were at when the bug occured, and what you think",
    "caused the bug to be produced, so we can try to reproduce it and track",
    "it down.",
    " ",
    "The following programmers currently maintain the code:",
    "  Foxen/Revar:   revar@belfry.com    Project Lead, Developer",
    "  Points:                            Bug Finder/Lead/Developer",
    " ",
    "  Our Sourceforge developers (http://sourceforge.net/projects/fbmuck/):",
    "  Akari, Alynna, Arcticwolf (Schneelocke), Cerilus, Fentonator,",
    "  Ferretbun, Foxbird, Jenora, McClure, Naiya, Natasha O'Brien, Sombre,",
    "  Tiger (Fre'ta), Winged, Wog, and WolfWings.",
    " ",
    "The following people helped out a lot along the way:",
    "  Caspian, Kim \"Bookwyrm\" Liu, Chris, Jenora, Lynx, WhiteFire,",
    "  Kimi, Cynbe, Myk, Taldin, Howard, darkfox, Moonchilde, Felorin, Xixia,",
    "  Doran, Riss, King_Claudius, and Henri@Voregotten Realm.",
    " ",
    "Alpha and beta test sites, who put up with this nonsense:",
    " FB 5-",
    "  HighSeasMUCK, TygryssMUCK, FurryMUCK, CyberFurry, PendorMUCK, Kalasia,",
    "  AnimeMUCK, Realms, FurryII, Tapestries, Unbridled Desires, TruffleMUCK",
    "  and Brazillian Dreams.",
    " FB 6-",
    "  HereLieMonsters, FurrySpaceMUCK, Sol ]|[, and Voregotten Realm.",
    " ",
    "Places silly enough to give Foxen a wizbit at some time or another:",
    "  ChupMuck, HighSeas, TygMUCK, TygMUCK II, Furry, Pendor, Realms,",
    "  Kalasia, Anime, CrossRoadsMUCK, TestMage, MeadowFaire, TruffleMUCK,",
    "  Tapestries, Brazillian Dreams, SocioPolitical Ramifications and more.",
    " ",
    "Thanks also goes to those persons not mentioned here who have added",
    "their advice, opinions, and code to TinyMUCK FB.",
    0,
};


void
do_credits(dbref player)
{
    int i;

    for (i = 0; infotext[i]; i++) {
        notify(player, infotext[i]);
    }
}

void
do_version(dbref player)
{
	char s[BUFFER_LEN];

	snprintf(s,BUFFER_LEN,"Version: %s Compiled on: %s %s",VERSION,creation,debug);
	notify(player, s);
	return;
}

