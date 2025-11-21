#ifndef ELYSIUM_NOTEBOOK_ENTRY_H
#define ELYSIUM_NOTEBOOK_ENTRY_H

#include <string>
#include <string_view>
#include <ctime>

class Entry {
    std::string _body;
    std::string _name;
    std::time_t _datetime;

public:
    Entry();
    Entry(std::string_view body, std::string_view name, std::time_t datetime);
    ~Entry() = default;
};

#endif //ELYSIUM_NOTEBOOK_ENTRY_H