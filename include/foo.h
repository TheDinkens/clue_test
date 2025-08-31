#include <string>
#include <vector>

using namespace std;

struct Node{
    string id;
    vector<Node*> neighbors;
};

vector<strings> rooms = {"kitchen", "ballroom", "conservatory", "dining room", "hall", "billiard room", "lounge", "library", "study"};

