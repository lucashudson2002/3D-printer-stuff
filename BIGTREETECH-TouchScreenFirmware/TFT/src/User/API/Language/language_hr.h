#ifndef _LANGUAGE_HR_H_
#define _LANGUAGE_HR_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_LANGUAGE               "Hrvatski"
    #define STRING_EMULATED_M600          "Emuliraj M600"
    #define STRING_EMULATED_M109_M190     "Emuliraj M109 / M190"
    #define STRING_EVENT_LED              "LED event"
    #define STRING_FILE_COMMENT_PARSING   "File comment parsing"
    #define STRING_ROTATED_UI             "OkreniTFT"
    #define STRING_ACK_NOTIFICATION       "ACK stil obavjesti"
    #define STRING_FILES_SORT_BY          "Razvrstaj datoteke po"
    #define STRING_FILES_LIST_MODE        "Način popisa datoteka"
    #define STRING_FILENAME_EXTENSION     "Prikaži nastavak naziva"
    #define STRING_FAN_SPEED_PERCENTAGE   "Brzina ventilatora u %"
    #define STRING_PERSISTENT_INFO        "Stalno prikazuj status"
    #define STRING_TERMINAL_ACK           "Prikaži ACK u terminalu"
    #define STRING_SERIAL_ALWAYS_ON       "Serijski uvijek UKLJUČEN"
    #define STRING_MARLIN_FULLSCREEN      "Preko cijelog zaslona"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin prikaži naslov"
    #define STRING_MARLIN_TYPE            "Marlin verzija"
    #define STRING_MOVE_SPEED             "Brzina pomaka (X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto učitaj izravnanje"
    #define STRING_PROBING_Z_OFFSET       "Mjerenje Z odmaka"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z steperi auto poravnanje"
    #define STRING_PS_AUTO_SHUTDOWN       "Auto isključivanje"
    #define STRING_FIL_RUNOUT             "Senzor filamenta"
    #define STRING_PL_RECOVERY            "Oporavak od gubitka struje"
    #define STRING_PL_RECOVERY_HOME       "Home nakon gubitka stuje"
    #define STRING_BTT_MINI_UPS           "BTT UPS podrška"
    #define STRING_TOUCH_SOUND            "Zvuk dodira"
    #define STRING_TOAST_SOUND            "Zvuk obavijesti"
    #define STRING_ALERT_SOUND            "Zvuk upozorenja"
    #define STRING_HEATER_SOUND           "Zvuk obavijesti grijača"
    #define STRING_LCD_BRIGHTNESS         "Svjetlina"
    #define STRING_LCD_IDLE_BRIGHTNESS    "LCD mirujuća svjetlina"
    #define STRING_LCD_IDLE_TIME          "Vrijeme do zatamnjena"
    #define STRING_LCD_LOCK_ON_IDLE       "Zaključavanje u mirovanju"
    #define STRING_LED_ALWAYS_ON          "LED uvijek UKLJUČEN"
    #define STRING_KNOB_LED_COLOR         "LED boja gumba"
    #define STRING_KNOB_LED_IDLE          "LED gumba u mirovanju"
    #define STRING_START_GCODE_ENABLED    "Pokreni Gcode prije ispisa"
    #define STRING_END_GCODE_ENABLED      "Završi Gcode nakon ispisa"
    #define STRING_CANCEL_GCODE_ENABLED   "Otkaži Gcode"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "Koraci po mm"
    #define STRING_FILAMENT_SETTING       "Promjer filamenta"
    #define STRING_MAXACCELERATION        "Maksimalno ubrzanje"
    #define STRING_MAXFEEDRATE            "Max brzina snabdijevanja"
    #define STRING_ACCELERATION           "Ubrzanje"
    #define STRING_JERK                   "Trzaj"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_HOME_OFFSET            "Home odstupanje"
    #define STRING_FWRETRACT              "FW uvlačenje"
    #define STRING_FWRECOVER              "FW oporavak uvlačenja"
    #define STRING_RETRACT_AUTO           "Auto Firmware uvlačenje"
    #define STRING_HOTEND_OFFSET          "odstupanje 2. mlaznice"
    #define STRING_HOTEND_PID             "Hotend PID"
    #define STRING_BED_PID                "Hotbed PID"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_INPUT_SHAPING          "Input Shaping"
    #define STRING_DELTA_CONFIGURATION    "Delta konfiguracija"
    #define STRING_DELTA_TOWER_ANGLE      "Delta kut tornja"
    #define STRING_DELTA_DIAGONAL_ROD     "Dijagonalni trim šipke"
    #define STRING_DELTA_ENDSTOP          "Podešavanje graničnika"
    #define STRING_PROBE_OFFSET           "Odmak Ticala"
    #define STRING_LIN_ADVANCE            "Linearno napredovanje"
    #define STRING_CURRENT_SETTING        "Struja drajvera (mA)"
    #define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
    #define STRING_BUMP_SENSITIVITY       "TMC osjetljivost na graničnik"
    #define STRING_MBL_OFFSET             "MBL odmak"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Ubrzanje istiskivanja"
    #define STRING_RETRACT_ACCELERATION   "Ubrzanje uvlačenja"
    #define STRING_TRAVEL_ACCELERATION    "Ubrzanje pomicanja"
    #define STRING_RETRACT_LENGTH         "Dužina uvlačenja"
    #define STRING_RETRACT_SWAP_LENGTH    "Dužina swap uvlačenja"
    #define STRING_RETRACT_FEEDRATE       "Uvlačenje snabdjevanja"
    #define STRING_RETRACT_Z_LIFT         "Z podizanje pri uvlačenju"
    #define STRING_RECOVER_LENGTH         "Dodatna dužina oporavka"
    #define STRING_SWAP_RECOVER_LENGTH    "Dodatna dužina swap oporavka"
    #define STRING_RECOVER_FEEDRATE       "Vrati snabdjevanje"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Vrati swap snabdjevanje"

    // Save / Load
    #define STRING_SAVE                   "Spremi"
    #define STRING_RESTORE                "Vrati"
    #define STRING_RESET                  "Resetiraj"
    #define STRING_EEPROM_SAVE_INFO       "Spremiti postavke printera u EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "Učitaj postavke iz EEPROM-a?"
    #define STRING_EEPROM_RESET_INFO      "Resetiraj EEPROM na zadane postavke?"
    #define STRING_SETTINGS_SAVE          "Spremi postavke"
    #define STRING_SETTINGS_RESTORE       "Vrati postavke"
    #define STRING_SETTINGS_RESET         "Reset na zadane postavke"
    #define STRING_SETTINGS_RESET_INFO    "Resetiraj sve postavke na zadano?"
    #define STRING_SETTINGS_RESET_DONE    "Resetiranje svih postavki uspješno.\nMolimo restartajte printer."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Str.gore"
    #define STRING_PAGE_DOWN              "Str.dolje"
    #define STRING_UP                     "Gore"
    #define STRING_DOWN                   "Dolje"
    #define STRING_NEXT                   "Sljedeće"
    #define STRING_BACK                   "Nazad"

    // Value Buttons
    #define STRING_INC                    "Povećaj"
    #define STRING_DEC                    "Smanji"
    #define STRING_LOAD                   "Napuni"
    #define STRING_UNLOAD                 "Isprazni"
    #define STRING_ON                     "UKLJUČI"
    #define STRING_OFF                    "ISKLJUČI"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "SMART"
    #define STRING_SLOW                   "Sporo"
    #define STRING_NORMAL                 "Normalno"
    #define STRING_FAST                   "Brzo"
    #define STRING_ZERO                   "Nula"
    #define STRING_HALF                   "50%"
    #define STRING_FULL                   "100%"
    #define STRING_CUSTOM                 "Prilagodi"
    #define STRING_CLEAR                  "Očisti"
    #define STRING_DEFAULT                "Zadano"

    // Action Buttons
    #define STRING_START                  "Pokreni"
    #define STRING_STOP                   "Zaustavi"
    #define STRING_PAUSE                  "Pauziraj"
    #define STRING_RESUME                 "Nastavi"
    #define STRING_INIT                   "Početni"
    #define STRING_DISCONNECT             "Odspoji"
    #define STRING_SHUT_DOWN              "Ugasi"
    #define STRING_FORCE_SHUT_DOWN        "Prisilno ugasi"
    #define STRING_EMERGENCYSTOP          "PREKIDAJ"
    #define STRING_PREHEAT                "Predgrij"
    #define STRING_PREHEAT_BOTH           "Predgrijavanje obadva"
    #define STRING_COOLDOWN               "Rashladi"

    // Dialog Buttons
    #define STRING_CONFIRM                "Potvrdi"
    #define STRING_CANCEL                 "Odustani"
    #define STRING_WARNING                "Upozorenje"
    #define STRING_CONTINUE               "Nastavi"
    #define STRING_CONFIRMATION           "Jeste li sigurni?"

    // Process Status
    #define STRING_STATUS                 "Status"
    #define STRING_READY                  "Spreman"
    #define STRING_BUSY                   "Zauzet procesiranjem, pričekajte..."
    #define STRING_LOADING                "Učitavanje..."
    #define STRING_UNCONNECTED            "Nije priključen pisač!"
    #define STRING_LISTENING              "TFT u Slušajućem Modu!"

    // Process Info
    #define STRING_INFO                   "Info"
    #define STRING_INVALID_VALUE          "Nevažeća vrijednost(s)"
    #define STRING_TIMEOUT_REACHED        "Isteklo vrijeme čekanja"
    #define STRING_DISCONNECT_INFO        "Sada možete kontrolirati pisač putem svog računala!"
    #define STRING_SHUTTING_DOWN          "Isključivanje..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Pričekajte da temperatura hotenda bude niža od %d℃"
    #define STRING_POWER_FAILED           "Nastaviti s ispisom?"
    #define STRING_PROCESS_COMPLETED      "Proces završen!"
    #define STRING_PROCESS_ABORTED        "Proces prekinut!"

    // TFT Media, Onboard Media, Filament Runout Process Commands / Status / Info
    #define STRING_TFT_SD                 "TFT SD"
    #define STRING_TFT_SD_INSERTED        "Kartica je umetnuta"
    #define STRING_TFT_SD_REMOVED         "Kartica uklonjena"
    #define STRING_TFT_SD_NOT_DETECTED    "SD kartica nije otkrivena!"
    #define STRING_TFT_SD_READ_ERROR      "Pogreška čitanja TFT SD kartice!"
    #define STRING_TFT_USB                "TFT USB"
    #define STRING_TFT_USB_INSERTED       "USB umetnut"
    #define STRING_TFT_USB_REMOVED        "USB uklonjen"
    #define STRING_TFT_USB_NOT_DETECTED   "USB nije otkriven!"
    #define STRING_TFT_USB_READ_ERROR     "Pogreška čitanja USB-a!"
    #define STRING_ONBOARD_SD             "Matična SD"
    #define STRING_ONBOARD_USB            "Matična USB"
    #define STRING_ONBOARD_SD_READ_ERROR  "Pogreška čitanja SD na matičnoj!"
    #define STRING_FILAMENT_RUNOUT        "Nedostatak filamenta!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "OtpustiSve"
    #define STRING_XY_UNLOCK              "OtpustiXY"

    #define STRING_START_PRINT            "Započni printanje:\n%s?"
    #define STRING_STOP_PRINT             "Zaustavi printanje?"
    #define STRING_IS_PAUSE               "Radnja nije dopuštena tijekom printanja.\n\nPauzirati print?"
    #define STRING_M0_PAUSE               "Pauzirano naredbom M0"

    #define STRING_TEST                   "Test"
    #define STRING_DEPLOY                 "Postavi"
    #define STRING_STOW                   "Sakrij"
    #define STRING_REPEAT                 "Ponovi"
    #define STRING_HS_ON                  "HS:UKLJUČENO"
    #define STRING_HS_OFF                 "HS:ISKLJUČENO"

    // Printer Tools
    #define STRING_NOZZLE                 "Mlaznica"
    #define STRING_BED                    "Hotbed"
    #define STRING_CHAMBER                "Komora"
    #define STRING_FAN                    "Ventilator"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1℃"
    #define STRING_5_DEGREE               "5℃"
    #define STRING_10_DEGREE              "10℃"

    #define STRING_001_MM                 "0.01mm"
    #define STRING_01_MM                  "0.1mm"
    #define STRING_1_MM                   "1mm"
    #define STRING_5_MM                   "5mm"
    #define STRING_10_MM                  "10mm"
    #define STRING_100_MM                 "100mm"
    #define STRING_200_MM                 "200mm"

    #define STRING_1_PERCENT              "1%"
    #define STRING_5_PERCENT              "5%"
    #define STRING_10_PERCENT             "10%"
    #define STRING_PERCENT_VALUE          "%d%%"

    #define STRING_5_SECONDS              "5 sek."
    #define STRING_10_SECONDS             "10 sek."
    #define STRING_30_SECONDS             "30 sek."
    #define STRING_60_SECONDS             "1 min."
    #define STRING_120_SECONDS            "2 min."
    #define STRING_300_SECONDS            "5 min."

    // Colors
    #define STRING_WHITE                  "Bijelo"
    #define STRING_BLACK                  "Crno"
    #define STRING_BLUE                   "Plavo"
    #define STRING_RED                    "Crveno"
    #define STRING_GREEN                  "Zeleno"
    #define STRING_CYAN                   "Modrozeleno"
    #define STRING_YELLOW                 "Žuto"
    #define STRING_BROWN                  "Smeđe"
    #define STRING_GRAY                   "Sivo"
    #define STRING_ORANGE                 "Narančasto"
    #define STRING_INDIGO                 "Indigo"
    #define STRING_VIOLET                 "Violetno"
    #define STRING_MAGENTA                "Magenta"
    #define STRING_PURPLE                 "Ljubičasto"
    #define STRING_LIME                   "Limeta"
    #define STRING_DARKBLUE               "Tamnoplava"
    #define STRING_DARKGREEN              "Tamnozeleno"
    #define STRING_DARKGRAY               "Tamnosiva"

    // Menus
    #define STRING_HEAT                   "Toplina"
    #define STRING_MOVE                   "Pomicanje"
    #define STRING_HOME                   "Home"
    #define STRING_PRINT                  "Printaj"
    #define STRING_EXTRUDE                "Ekstrudaj"
    #define STRING_SETTINGS               "Postavke"
    #define STRING_SCREEN_SETTINGS        "Zaslon"
    #define STRING_UI_SETTINGS            "UI"
    #define STRING_SOUND                  "Zvuk"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinSet"
    #define STRING_MACHINE_SETTINGS       "Printer"
    #define STRING_PARAMETER_SETTINGS     "Parametri"
    #define STRING_FEATURE_SETTINGS       "Funkcije"
    #define STRING_CONNECTION_SETTINGS    "Veza"
    #define STRING_SERIAL_PORTS           "Priključci"
    #define STRING_BAUDRATE               "BaudRate"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_RGB_SETTINGS           "LED Boja "
    #define STRING_RGB_OFF                "LED Isk."
    #define STRING_TERMINAL               "Terminal"
    #define STRING_LEVELING               "Izravnaj"
    #define STRING_POINT_1                "D-L"
    #define STRING_POINT_2                "D-D"
    #define STRING_POINT_3                "G-D"
    #define STRING_POINT_4                "G-L"
    #define STRING_POINT_5                "Centar"
    #define STRING_BED_LEVELING           "Hotbed izravnaj"
    #define STRING_BL_COMPLETE            "Hotbed izravnanje završeno"
    #define STRING_BL_SMART_FILL          "Nedostajuće točke ticala su pametno nadpunjene.\n\nNapomena: ne zaboravite spremiti!"
    #define STRING_BL_ENABLE              "BL: UKLJUČI"
    #define STRING_BL_DISABLE             "BL: ISKLJUČI"
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Izravnavanje mreže hotbeda"
    #define STRING_ABL_SETTINGS           "Auto izravnanje hotbeda"
    #define STRING_ABL_SETTINGS_BBL       "Bilinearno izravnanje hotbeda"
    #define STRING_ABL_SETTINGS_UBL       "Jedinstveno izravnanje hotbeda"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Spremi u memoriju"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Učitaj sa memoriju"
    #define STRING_ABL_SLOT0              "Save 0"
    #define STRING_ABL_SLOT1              "Save 1"
    #define STRING_ABL_SLOT2              "Save 2"
    #define STRING_ABL_SLOT3              "Save 3"
    #define STRING_ABL_SLOT_EEPROM        "Spremi mrežu u EEPROM za učitavanje nakon ponovnog pokretanja?"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_LEVEL_CORNER           "L kuta"
    #define STRING_LEVEL_CORNER_INFO      "Rubna udaljenost je ispod odmaka ticala X/Y i neke ciljane točke možda neće biti dostupne.\nŽelite li koristiti sigurnu rubnu udaljenost?"
    #define STRING_P_OFFSET               "T odmak"
    #define STRING_H_OFFSET               "H odmak"
    #define STRING_DISTANCE               "Udalji"
    #define STRING_SHIM                   "Shim"
    #define STRING_LOAD_UNLOAD            "Učitaj/Isprazni"
    #define STRING_LOAD_UNLOAD_SHORT      "Ekstrudaj"
    #define STRING_TOUCHSCREEN_ADJUST     "Kalibriraj"
    #define STRING_MORE                   "Više"
    #define STRING_SCREEN_INFO            "Info"
    #define STRING_BG_COLOR               "Boja pozadine"
    #define STRING_FONT_COLOR             "Boja fonta"
    #define STRING_PERCENTAGE             "Postotak"
    #define STRING_PERCENTAGE_SPEED       "Brzina"
    #define STRING_PERCENTAGE_FLOW        "Protok"
    #define STRING_BABYSTEP               "MaliKorak"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X os"
    #define STRING_Y                      "Y os"
    #define STRING_Z                      "Z os"
    #define STRING_ADJUST_TITLE           "Kalibracia zaslona"
    #define STRING_ADJUST_INFO            "Molimo kliknite na crvenu točku"
    #define STRING_ADJUST_OK              "Kalibracija je uspjela"
    #define STRING_ADJUST_FAILED          "Nije uspjelo, pokušajte ponovno"
    #define STRING_UNIFIEDMOVE            "Pomicanje"
    #define STRING_UNIFIEDHEAT            "Grijanje"
    #define STRING_TOUCH_TO_EXIT          "Dodirnite bilo gdje za izlaz"
    #define STRING_MAINMENU               "Izbornik"
    #define STRING_TUNING                 "Podesi"
    #define STRING_MPC                    "MPC"
    #define STRING_MPC_TITLE              "MPC auto"
    #define STRING_MPC_METHOD             "Metoda:"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID auto"
    #define STRING_TUNE_START_INFO        "Automatsko podešavanje može potrajati neko vrijeme.\nNastaviti?"
    #define STRING_TUNE_EXTRUDER          "Podesi Ext"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Ekst.100 mm"
    #define STRING_TUNE_EXT_TEMP          "Ekstruder podešavanje | Toplina"
    #define STRING_TUNE_EXT_MARK120MM     "Označite 120 mm na filamentu.\nPritisnite '%s' kada budete spremni.\nIzmjerite preostalu duljinu nakon ekstruzije."
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Podesite E-korake"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "Primijenjeni novi E-koraci.\nNe zaboravite ih spremiti u EEPROM.\nNova vrijednost: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Preostala duljina:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Stari E-koraci: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "Novi E-koraci: %0.2f"
    #define STRING_NOTIFICATIONS          "Obavijesti"
    #define STRING_MESH_EDITOR            "Uređivanje mreže"
    #define STRING_MESH_TUNER             "Uglađivanje mreže"
    #define STRING_CASE_LIGHT             "Svjetlo kućišta"
    #define STRING_LOAD_STARTED           "Učitavanje filamenta.\nMolimo pričekajte da se proces završi."
    #define STRING_UNLOAD_STARTED         "Pražnjenje filamenta.\nMolimo pričekajte da se proces završi."
    #define STRING_HEATERS_ON             "Neki grijači su još uvijek UKLJUČENI.\nŽelite li ih zaustaviti?"
    #define STRING_PRINT_FINISHED         "   Print\n   završen"
    #define STRING_MAIN_SCREEN            "Početni zaslon"
    #define STRING_PREVIOUS_PRINT_DATA    "Info"
    #define STRING_PRINT_TIME             "Vrijeme printanja: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nDuljina filamenta: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nTežina filamenta: %1.2fg"
    #define STRING_FILAMENT_COST          "\nCijena filamenta: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nPodaci o filamentu nisu dostupni"
    #define STRING_CLICK_FOR_MORE         "Kliknite za više"
    #define STRING_EXT_TEMPLOW            "Temperatura hotenda je ispod minimalne temperature (%d℃)."
    #define STRING_HEAT_HOTEND            "Zagrijati hotend na %d℃?"
    #define STRING_DESIRED_TEMPLOW        "Temperatura hotenda je ispod postavljene temperature (%d℃)."
    #define STRING_WAIT_HEAT_UP           "Pričekajte da se zagrije"
    #define STRING_Z_ALIGN                "Z poravnanje"
    #define STRING_MACROS                 "Makronaredbe"
    #define STRING_MESH_VALID             "Provjera mreže"
    #define STRING_CONNECT_PROBE          "Povežite ticalo prije pokretanja procesa. Obavezno ga odspojite nakon toga."
    #define STRING_DISCONNECT_PROBE       "Provjerite jeste li odspojili ticalo prije korištenja ove funkcije."
    #define STRING_CALIBRATION            "Kalibriraj"

#endif