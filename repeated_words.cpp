import std;

using namespace std;
import PPP;

int repeated_words()
{
    std::string previous;
    std::string current;

    std::string line;
    std::cout << "Enter a line of text (Ctrl+D to end):\n";
    std::getline(std::cin, line);

    int count = 0;

    for (int i = 0; i < line.size(); ++i) {
        if (line[i] == ' ' || line[i] == '\n' || line[i] == '\t') {
            if (!current.empty()) {
                if (previous == current) {
                    std::cout << "repeated word: " << current << '\n';
                    count++;
                }
                previous = current;
                current.clear();
            }
        } else {
            current += line[i];
        }
    }


    if (count == 0) {
        std::cout << "no repeated words\n";
    } else {
        std::cout << "total repeated words: " << count << '\n';
    }
}
