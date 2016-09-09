#pragma once

#include <vector>
#include "time.h"

/**
 * \brief
 *  This header defines the 'event' structure, necessary to handle some commands of the TDC class.
 */
struct hit
{
    unsigned int channel;
    unsigned int time;
};

class event {
    public:
    
        event(): eventNumber(0), time(0), errorCode(-1) {}
        unsigned int eventNumber;
        time_t time;
        std::vector<hit> hits;
        int errorCode;// -1 = not initialised
};

