#ifndef STATES_H_
#define STATES_H_

#define STATES_DEFINED

typedef enum
{
  INITIALIZING = 1,
  CONNECTING_TO_HOST,
  CONFIGURING,
  READY,
  ACTIVE,
  IDLE,
  SYS_ERROR,
  NUM_SYSTEM_STATES
} system_state_enum;

static const char * system_state_enum_strings[] =
{
  "Initalizing",
  "Connecting to host",
  "Configuring",
  "Ready",
  "Active",
  "Idle",
  "System Error",
};

#endif STATES_H_
