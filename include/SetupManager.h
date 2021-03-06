#pragma once

#include <cstddef>
#include <vector>

class SetupManager {
    public:
        virtual ~SetupManager() {};

        virtual bool setHVPMT(std::size_t id) = 0;
        virtual bool switchHVPMTON(std::size_t id) = 0;
        virtual bool switchHVPMTOFF(std::size_t id) = 0;
        virtual std::vector< std::pair<double, double> > getHVPMTValue() = 0;

        virtual void setTrigger(int channel, int randomFrequency) = 0;

        virtual bool propagateDiscriSettings() = 0;
};
