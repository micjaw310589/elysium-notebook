// #include <iostream>

#include <iostream>

#include "Category.h"
#include "Entry.h"
#include "Topic.h"
using namespace std;


int main() {
    string entry_name = "Lorem Ipsum";
    string entry_body = "Lorem ipsum dolor sit amet consectetur adipiscing elit."
                  "Quisque faucibus ex sapien vitae pellentesque sem placerat."
                  "In id cursus mi pretium tellus duis convallis."
                  "Tempus leo eu aenean sed diam urna tempor."
                  "Pulvinar vivamus fringilla lacus nec metus bibendum egestas."
                  "Iaculis massa nisl malesuada lacinia integer nunc posuere."
                  "Ut hendrerit semper vel class aptent taciti sociosqu."
                  "Ad litora torquent per conubia nostra inceptos himenaeos.";

    auto* test_entry1 = new Entry(entry_body, entry_name, chrono::system_clock::now());
    auto* test_entry2 = new Entry(entry_body, entry_name, chrono::system_clock::now());
    auto* test_entry3 = new Entry(entry_body, entry_name, chrono::system_clock::now());

    auto* test_topic = new Topic("Test topic", "This topic was made to test things", chrono::system_clock::now());
    auto* related_topic1 = new Topic("Related 1", "This is somehow related", chrono::system_clock::now());
    auto* related_topic2 = new Topic("Related 2", "Not so sure about that one", chrono::system_clock::now());

    test_topic->addTopic(related_topic1);
    test_topic->addTopic(related_topic2);
    test_topic->addEntry(test_entry1);
    test_topic->addEntry(test_entry2);
    test_topic->addEntry(test_entry3);

    // const auto* test_category = new Category("IMPORTANT", chrono::system_clock::now());

    test_topic->test_Print();

    delete test_entry1;
    delete test_entry2;
    delete test_entry3;
    delete test_topic;
    // delete test_category;

}
