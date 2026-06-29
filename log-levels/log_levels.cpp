#include <string>

namespace log_line
{
    std::string message(std::string line)
    {
        int start = line.find(":") + 2;
        return line.substr(start, line.size() - start);
    }

    std::string log_level(std::string line)
    {
        return line.substr(1, line.find("]") - 1);
    }

    std::string reformat(std::string line)
    {
        return message(line) + " (" + log_level(line) + ")";
    }
} // namespace log_line
