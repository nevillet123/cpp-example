#include "Example.hpp"

Example::Example(std::string iSetting): _setting(iSetting)
{}

bool Example::isTrue(){
    if (_setting == "true") {
     return true;
    }
    return false;
}