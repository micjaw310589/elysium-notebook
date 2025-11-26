#ifndef ELYSIUM_NOTEBOOK_ENTRY_H
#define ELYSIUM_NOTEBOOK_ENTRY_H

#include <chrono>
#include <string>
#include <string_view>

class Entry {
    std::string _content;
    std::string _title;
    std::chrono::system_clock::time_point _datetime;

public:
    Entry();
    Entry(std::string_view content, std::string_view title, std::chrono::system_clock::time_point datetime);
    ~Entry() = default;

    void test_Print() const;
};

#endif //ELYSIUM_NOTEBOOK_ENTRY_H