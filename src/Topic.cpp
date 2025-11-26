//
// Created by reddiusz on 11/26/25.
//

#include "../include/Topic.h"

Topic::Topic()
    : _datetime(std::chrono::system_clock::now())
{}

Topic::Topic(const std::string_view title, const std::string_view description, const std::chrono::system_clock::time_point datetime)
    : _title(title)
    , _description(description)
    , _datetime(datetime)
{}

void Topic::addEntry(Entry* entry)
{
    _entries.push_back(entry);
}

void Topic::removeEntry(Entry* entry)
{
    _entries.remove(entry);
}

void Topic::addTopic(Topic* topic)
{
    _related_topics.push_back(topic);
}

void Topic::removeTopic(Topic* topic)
{
    _related_topics.remove(topic);
}
