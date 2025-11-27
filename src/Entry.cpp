#include "Entry.h"
#include <iostream>

Entry::Entry(const std::string_view content, const std::string_view title, const std::chrono::system_clock::time_point datetime_created)
    : _content(content)
    , _title(title)
    , _datetime_created(datetime_created)
    , _datetime_modified()
    , _modified(false)
{}

Entry::Entry(const std::string_view content, const std::chrono::system_clock::time_point datetime_created)
    : _content(content)
    , _datetime_created(datetime_created)
    , _datetime_modified()
    , _modified(false)
{}

Entry::Entry(const std::string_view content)
    : _content(content)
    , _datetime_created(std::chrono::system_clock::now())
    , _datetime_modified()
    , _modified(false)
{}

void Entry::test_Print() const {
    std::cout << _datetime_created << " -- *** " << _title << " ***" << std::endl;
    std::cout << _content << "\n\n";
}
