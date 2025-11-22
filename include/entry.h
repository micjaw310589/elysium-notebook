#ifndef ELYSIUM_NOTEBOOK_ENTRY_H
#define ELYSIUM_NOTEBOOK_ENTRY_H

#include <chrono>
#include <string>
#include <string_view>
using namespace std;

class Entry {
    string _content;
    string _title;
    chrono::system_clock::time_point _datetime{};

public:
    Entry();
    Entry(string_view content, string_view title, chrono::system_clock::time_point datetime);
    ~Entry() = default;

    void test_Print() const;
};

#endif //ELYSIUM_NOTEBOOK_ENTRY_H