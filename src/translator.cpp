#include <iostream>
#include <sstream>
#include <set>
#include <map>

// Exo 1
std::set<std::string> make_exit_commands()
{
    std::set<std::string> set;
    set.emplace("q");
    set.emplace("quit");
    set.emplace("e");
    set.emplace("exit");
    return set;
}

int main()
{
    using namespace std;
    string input;
    string w1;
    string w2;
    set<string> set = make_exit_commands();
    map<string, string>
        map;
    while (true)
    {
        cin >> input;
        if (set.count(input))
        {
            return 0;
        }
        if (input == "add")
        {
            cin >> w1;
            cin >> w2;
            map.emplace(w1, w2);
            cout << w1 << " => " << w2 << endl;
        }
        if (input == "translate")
        {
            cin >> w1;
            if (map.count(w1))
            {
                cout << map.find(w1)->second << endl;
            }
            else
            {
                cout << "???" << endl;
            }
        }

        // stringstream inputStream(input);
        // while (!inputStream.eof())
        // {
        //     inputStream >> word;
        //     if (set.count(word))
        //     {
        //         return 0;
        //     }
        //     if (word == "add")
        //     {
        //         map.emplace(inputStream.get(), inputStream.get());
        //     }
        //     if (word == "translate")
        //     {
        //         map.find(inputStream.get());
        //     }
    }
    return 0;
}