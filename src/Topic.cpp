//
// Created by reddiusz on 11/26/25.
//

#include "Topic.h"

int Topic::_auto_title_no = 1;

Topic::Topic()
    : Topic("Topic")
{
    _title.append(to_string(_auto_title_no));
    _auto_title_no++;
}

Topic::Topic(const string_view title)
    : Topic(title, string_view())
{}

Topic::Topic(const string_view title, const string_view description)
    : _title(title)
    , _description(description)
    , _datetime_created(chrono::system_clock::now())
{}

void Topic::createEntry()
{
    _entries.push_back(new Entry());
}

void Topic::removeEntry(Entry* entry)
{
    auto it = std::find(_entries.begin(), _entries.end(), entry);
    if (it != _entries.end())
    {
        delete *it;
        _entries.erase(it);
    }
}

void Topic::addTopic(Topic* topic)
{
    _related_topics.push_back(topic);
}

void Topic::removeTopic(Topic* topic)
{
    _related_topics.remove(topic);
}
