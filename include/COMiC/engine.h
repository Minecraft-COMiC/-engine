#include <COMiC/os.h>
#include <COMiC/logger.h>

#ifndef COMiC_ENGINE_H
#define COMiC_ENGINE_H

typedef struct COMiC_Engine
{
    COMiC_OS *os;
    COMiC_Logger *logger;
} COMiC_Engine;

#endif /* COMiC_ENGINE_H */
