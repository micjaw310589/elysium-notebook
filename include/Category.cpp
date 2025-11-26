//
// Created by reddiusz on 11/27/25.
//

#include "Category.h"

Category::Category()
    : _datetime(std::chrono::system_clock::now())
{}

Category::Category(const std::string_view title, const std::chrono::system_clock::time_point datetime)
    : _title(title)
    , _datetime(datetime)
{}

void Category::addTopic(Topic* topic)
{
    _topics.push_back(topic);
}

void Category::removeTopic(Topic* topic)
{
    _topics.remove(topic);
}

