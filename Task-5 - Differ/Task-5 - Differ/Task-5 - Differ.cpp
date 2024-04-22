#include <iostream>
#include <vector>
using namespace std;
class Differ {
private:
    vector<int> sequence;

public:
    Differ(const vector<int>& seq) : sequence(seq) {}

    bool areElementsUnique() {
        for (size_t i = 0; i < sequence.size(); ++i) {
            for (size_t j = i + 1; j < sequence.size(); ++j) {
                if (sequence[i] == sequence[j]) {
                    return false; 
                }
            }
        }
        return true; 
    }
};

int main() {
    using namespace std;
    vector<int> sequence1 = { 1, 2, 3, 4, 5 };
    vector<int> sequence2 = { 1, 2, 3, 4, 4 };

    Differ differ1(sequence1);
    Differ differ2(sequence2);

    cout << "Sequence 1 has unique elements: " << boolalpha << differ1.areElementsUnique() << endl; 
    cout << "Sequence 2 has unique elements: " << boolalpha << differ2.areElementsUnique() << endl; 

    return 0;
}
