// STL Containers: Vector, list, queue, stack, map, set etc.

// Map:
// Associative container that stores key-value pairs.
// Allows efficient retrieval and modification of values based on keys.
// Keys are unique within the map.

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {

    // creation of unordered map
    // unordered_map<string, string> table;

    // creation of ordered map
    map<string, string> table;
    map<int, string> t2;

    t2.insert(make_pair(1, "Kuntal"));
    cout << t2.begin()->first << " -> " << t2.begin()->second << endl;

    // insertion
    table["in"] = "India";

    table.insert(make_pair("en", "England"));

    pair<string, string> p1;
    p1.first = "br";
    p1.second = "Brazil";
    table.insert(p1);

    // override existing key
    table["in"] = "Indonesia";

    // will NOT override (insert ignores duplicate key)
    table.insert(make_pair("in", "Indo"));

    pair<string, string> p2;
    p2.first = "in";
    p2.second = "Indo";
    table.insert(p2);   // fixed (was inserting p1 again)

    cout << "\nFirst element: "
         << table.begin()->first << " -> "
         << table.begin()->second << endl;

    // range-based loop
    cout << "\nPrint using range loop:\n";
    for (auto &p : table) {
        cout << p.first << " -> " << p.second << endl;
    }

    // iterator loop
    cout << "\nPrint using iterator:\n";
    map<string, string>::iterator it = table.begin();

    while (it != table.end()) {
        cout << it->first << ", " << it->second << endl;
        it++;
    }

    // accessing values
    cout << "\nAccess values:\n";
    cout << table["in"] << ", " << table.at("br") << endl;

    // find function
    auto track = table.find("in");
    if (track != table.end()) {
        cout << "find(): " << track->first << ", " << track->second << endl;
    }

    // erase element
    table.erase("in");

    // accessing erased key (will create new entry with empty string)
    cout << "\nAfter erase, table[\"in\"]: " << table["in"] << endl;

    // count
    cout << "count(): " << table.count("in") << " "
         << table.count("up") << endl;

    // empty and size
    cout << "Is empty: " << table.empty()
         << ", size: " << table.size() << endl;

    table.clear();

    cout << "After clear -> Is empty: " << table.empty()
         << ", size: " << table.size() << endl;

    return 0;
}