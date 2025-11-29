#include "Entry.h"
#include <iostream>

void Entry::markModified()
{
    if (!_is_modified)
    {
        _is_modified = true;
        _datetime_modified = chrono::system_clock::now();
    }
}

Entry::Entry()
    : Entry(string_view())
{}

Entry::Entry(const string_view content)
    : Entry(content, string_view())
{}

Entry::Entry(const string_view content, const string_view title)
    : _content(content)
      , _title(title)
      , _datetime_created(chrono::system_clock::now())
      , _is_modified(false)
{}

void Entry::setContent(const string_view new_content)
{
    if (new_content.empty() || new_content == _content)
        return;

    const string_view old = _content;
    _content = new_content;

    if (!(old.empty() && _content.empty()))
        markModified();
}

void Entry::setTitle(const string_view new_title)
{
    if (new_title.empty() || new_title == _title)
        return;

    const string_view old = _title;
    _title = new_title;

    if (!(old.empty() && _content.empty()))
        markModified();
}

string_view Entry::getContent() const
{
    return _content;
}

string_view Entry::getTitle() const
{
    return _title;
}

chrono::system_clock::time_point Entry::getDtCreated() const
{
    return _datetime_created;
}

chrono::system_clock::time_point Entry::getDtModified() const
{
    return _datetime_modified;
}

void Entry::test_Print() const {
    cout << _datetime_created << " -- *** " << _title << " ***" << endl;
    cout << _content << "\n\n";
}
