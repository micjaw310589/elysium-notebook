//
// Created by reddiusz on 11/27/25.
//

#ifndef ELYSIUM_NOTEBOOK_CATEGORY_H
#define ELYSIUM_NOTEBOOK_CATEGORY_H

#include <list>
#include <string>
#include <string_view>
#include "Topic.h"

class Category
{
    std::list<Topic*> _topics;
    std::string _title;
    std::chrono::system_clock::time_point _datetime;

public:
    Category();
    Category(std::string_view title, std::chrono::system_clock::time_point datetime);
    ~Category() = default;

    void addTopic(Topic* topic);
    void removeTopic(Topic* topic);
};


#endif //ELYSIUM_NOTEBOOK_CATEGORY_H