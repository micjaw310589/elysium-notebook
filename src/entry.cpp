#include "entry.h"
#include <iostream>

Entry::Entry()
    : _datetime(chrono::system_clock::now())
{}

Entry::Entry(const string_view content, const string_view title, chrono::system_clock::time_point datetime)
    : _content(content)
    , _title(title)
    , _datetime(datetime)
{}

void Entry::test_Print() const {
    cout << _datetime << " -- *** " << _title << " ***" << endl;
    cout << _content << endl;
}
