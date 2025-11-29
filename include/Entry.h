#ifndef ELYSIUM_NOTEBOOK_ENTRY_H
#define ELYSIUM_NOTEBOOK_ENTRY_H

#include <chrono>
#include <string>
#include <string_view>

using namespace std;

class Entry {
    string _content;
    string _title;
    chrono::system_clock::time_point _datetime_created;
    chrono::system_clock::time_point _datetime_modified;
    bool _is_modified;

    void markModified();

public:
    Entry();
    explicit Entry(string_view content);
    Entry(string_view content, string_view title);
    ~Entry() = default;

    void setContent(string_view new_content);
    void setTitle(string_view new_title);
    [[nodiscard]] string_view getContent() const;
    [[nodiscard]] string_view getTitle() const;
    [[nodiscard]] chrono::system_clock::time_point getDtCreated() const;
    [[nodiscard]] chrono::system_clock::time_point getDtModified() const;

    void test_Print() const;
};

#endif //ELYSIUM_NOTEBOOK_ENTRY_H