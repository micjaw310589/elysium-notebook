#include "entry.h"

Entry::Entry()
    : _datetime(time(nullptr))
{}

Entry::Entry(const std::string_view body, const std::string_view name, const std::time_t datetime)
    : _body(body)
    , _name(name)
    , _datetime(datetime)
{}
