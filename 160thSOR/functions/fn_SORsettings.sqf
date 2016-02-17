// TFR mod configuration

tf_give_personal_radio_to_regular_soldier = false;							// all players radios assigned by loadout script
tf_no_auto_long_range_radio = true;											// all players radios assigned by loadout script
tf_give_microdagr_to_soldier = false;										// do not give micro dagr players
tf_same_sw_frequencies_for_side = true;										// same SW freqs for each side
tf_same_lr_frequencies_for_side = true;										// same LR freqs for each side
_settingsSwWest = false call TFAR_fnc_generateSwSettings;						// pre define the SW freqs
_settingsSwWest set [2, ["311","312","313","314","315","316","317","318"]];
tf_freq_west = _settingsSwWest;
_settingsLRWest = false call TFAR_fnc_generateLRSettings;						 // pre define the LR freqs
_settingsLRWest set [2, ["50","51","52","53","54","55","56","57","58"]]; 
tf_freq_west_lr = _settingsLRWest; 
tf_freq_east_lr = _settingsLRWest;

// Headless client intialisation
[true,5,false,false,15,1,true,["mission"]] spawn SOR_fnc_headless;