#include "FakeSetupManager.h"
#include "Interface.h"
#include "ConditionManager.h"

#include <cstddef>

FakeSetupManager::FakeSetupManager(Interface& m_interface):
    m_interface(m_interface)
    { }

bool FakeSetupManager::setHVPMT(std::size_t id) {
    return true;
}

bool FakeSetupManager::switchHVPMTON(std::size_t id) {
    return true;
}

bool FakeSetupManager::switchHVPMTOFF(std::size_t id) {
    return true;
}

std::vector< std::pair<double, double> > FakeSetupManager::getHVPMTValue() {
    std::vector< std::pair<double, double> > hv_values;
    for (std::size_t id = 0; id < m_interface.getConditions().getNHVPMT(); id++) {
        hv_values.push_back(std::make_pair(0., 0.));
    }
    return hv_values;
}

void FakeSetupManager::setTrigger(int channel, int frequency) {
    return;
}

bool FakeSetupManager::propagateDiscriSettings() {
    return true;
}
