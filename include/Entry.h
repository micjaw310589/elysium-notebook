#ifndef ELYSIUM_NOTEBOOK_ENTRY_H
#define ELYSIUM_NOTEBOOK_ENTRY_H

#include <chrono>
#include <string>
#include <string_view>

class Entry {
    std::string _content;
    std::string _title;
    std::chrono::system_clock::time_point _datetime_created;
    std::chrono::system_clock::time_point _datetime_modified;
    bool _modified;

public:
    Entry(std::string_view content, std::string_view title, std::chrono::system_clock::time_point datetime_created);
    Entry(std::string_view content, std::chrono::system_clock::time_point datetime_created);
    Entry(std::string_view content);
    ~Entry() = default;

    void test_Print() const;
};

#endif //ELYSIUM_NOTEBOOK_ENTRY_H