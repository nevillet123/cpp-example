#pragma once
#include <string>

class Example {
    public:
      Example(std::string iSetting);
      bool isTrue();

    private:
      std::string _setting;
};