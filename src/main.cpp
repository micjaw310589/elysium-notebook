// #include <iostream>

#include <iostream>

#include "entry.h"
using namespace std;

int main() {
    string name = "Lorem Ipsum";
    string body = "Lorem ipsum dolor sit amet consectetur adipiscing elit."
                  "Quisque faucibus ex sapien vitae pellentesque sem placerat."
                  "In id cursus mi pretium tellus duis convallis."
                  "Tempus leo eu aenean sed diam urna tempor."
                  "Pulvinar vivamus fringilla lacus nec metus bibendum egestas."
                  "Iaculis massa nisl malesuada lacinia integer nunc posuere."
                  "Ut hendrerit semper vel class aptent taciti sociosqu."
                  "Ad litora torquent per conubia nostra inceptos himenaeos.";

    auto* test = new Entry(body, name, chrono::system_clock::now());
    test->test_Print();
    delete test;

}
