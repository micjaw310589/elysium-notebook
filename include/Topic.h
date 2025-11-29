//
// Created by reddiusz on 11/26/25.
//

#ifndef ELYSIUM_NOTEBOOK_TOPIC_H
#define ELYSIUM_NOTEBOOK_TOPIC_H

#include <iostream>
#include <list>
#include <string>
#include <string_view>
#include "Entry.h"

using namespace std;

class Topic {
    list<Entry*> _entries;
    list<Topic*> _related_topics;
    string _title;
    string _description;
    chrono::system_clock::time_point _datetime_created;
    static int _auto_title_no;

public:
    Topic();
    explicit Topic(string_view title);
    Topic(string_view title, string_view description);
    ~Topic() = default;

    void createEntry();
    void removeEntry(Entry* entry);
    void addTopic(Topic* topic);
    void removeTopic(Topic* topic);

    string_view getTitle() const
    {
        return _title;
    }

    void test_Print() const
    {
        cout << _title << " // " << _datetime_created << endl
        << _description << endl
        << "\tRelated Topics:" << endl;

        for (const auto& topic : _related_topics)
            cout << "\t- " << topic->getTitle() << endl;
        cout << endl;

        for (const auto& entry : _entries)
            entry->test_Print();
        cout << endl;
    }
};

#endif //ELYSIUM_NOTEBOOK_TOPIC_H