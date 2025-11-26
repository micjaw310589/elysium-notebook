#include "Entry.h"
#include <iostream>

Entry::Entry()
    : _datetime(std::chrono::system_clock::now())
{}

Entry::Entry(const std::string_view content, const std::string_view title, const std::chrono::system_clock::time_point datetime)
    : _content(content)
    , _title(title)
    , _datetime(datetime)
{}

void Entry::test_Print() const {
    std::cout << _datetime << " -- *** " << _title << " ***" << std::endl;
    std::cout << _content << "\n\n";
}
