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

class Topic {
    std::list<Entry*> _entries;
    std::list<Topic*> _related_topics;
    std::string _title;
    std::string _description;
    std::chrono::system_clock::time_point _datetime;

public:
    Topic();
    Topic(std::string_view title, std::string_view description, std::chrono::system_clock::time_point datetime);
    ~Topic() = default;

    void addEntry(Entry* entry);
    void removeEntry(Entry* entry);
    void addTopic(Topic* topic);
    void removeTopic(Topic* topic);

    const std::string& getName() const
    {
        return _title;
    }

    void test_Print() const
    {
        std::cout << _title << " // " << _datetime << std::endl
        << _description << std::endl
        << "\tRelated Topics:" << std::endl;

        for (const auto& topic : _related_topics)
            std::cout << "\t- " << topic->getName() << std::endl;
        std::cout << std::endl;

        for (const auto& entry : _entries)
            entry->test_Print();
        std::cout << std::endl;
    }
};


#endif //ELYSIUM_NOTEBOOK_TOPIC_H