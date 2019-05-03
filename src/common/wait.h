/***********************************************************************************************************************************
Wait Handler
***********************************************************************************************************************************/
#ifndef COMMON_WAIT_H
#define COMMON_WAIT_H

/***********************************************************************************************************************************
Wait object
***********************************************************************************************************************************/
#define WAIT_TYPE                                                   Wait
#define WAIT_PREFIX                                                 wait

typedef struct Wait Wait;

#include "common/time.h"

/***********************************************************************************************************************************
Functions
***********************************************************************************************************************************/
Wait *waitNew(TimeMSec waitTime);
bool waitMore(Wait *this);
void waitFree(Wait *this);

/***********************************************************************************************************************************
Macros for function logging
***********************************************************************************************************************************/
#define FUNCTION_LOG_WAIT_TYPE                                                                                                     \
    Wait *
#define FUNCTION_LOG_WAIT_FORMAT(value, buffer, bufferSize)                                                                        \
    objToLog(value, "Wait", buffer, bufferSize)

#endif
