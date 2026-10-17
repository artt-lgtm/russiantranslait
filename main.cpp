#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;
        if (auto title = this->getChildByID("main-title"_spr)) {
            if (auto label = typeinfo_cast<CCLabelBMFont*>(title)) {
                label->setString("Геометрия Даш");
            }
        }
        return true;
    }
};