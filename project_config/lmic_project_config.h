// project-specific definitions
#define CFG_eu868 1

#define CFG_sx1276_radio 1

#define DISABLE_PING
#define DISABLE_BEACONS
#define DISABLE_JOIN

#define LMIC_ENABLE_arbitrary_clock_error 1

// #define LMIC_USE_INTERRUPTS

#define LMIC_MAX_FRAME_LENGTH 64

/* Debug */
#define LMIC_DEBUG_LEVEL 1
#define LMIC_PRINTF_TO Serial

#define CLASS_C