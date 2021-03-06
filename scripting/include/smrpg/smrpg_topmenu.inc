#if defined _smrpg_topmenu_included
  #endinput
#endif
#define _smrpg_topmenu_included

#include <smrpg>

/** Category names of default topmenu categories */
#define RPGMENU_UPGRADES "RPGUpgradesMenu"
#define RPGMENU_SELL "RPGSellMenu"
#define RPGMENU_UPGRADESETTINGS "RPGUpgradeSettingsMenu"
#define RPGMENU_STATS "RPGStatsMenu"
#define RPGMENU_SETTINGS "RPGSettingsMenu"
#define RPGMENU_HELP "RPGHelpMenu"

/**
 * Get the handle to the rpgmenu top menu.
 *
 * @return Handle to the rpgmenu top menu or INVALID_HANDLE if not created yet.
 */
native Handle:SMRPG_GetTopMenu();

/**
 * Called when the rpgmenu is created and 3rd party plugins can grab the Handle or add categories.
 *
 * @param topmenu Handle to the rpgmenu TopMenu.
 * @noreturn
 */
forward SMRPG_OnRPGMenuCreated(Handle:topmenu);

/**
 * Called when the rpgmenu is ready to have items added. 
 *
 * @param topmenu Handle to the rpgmenu TopMenu.
 * @noreturn
 */
forward SMRPG_OnRPGMenuReady(Handle:topmenu);