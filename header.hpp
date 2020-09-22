#include <string_view>

class HelloWorld {
public:
    constexpr static std::string_view print() {
        return "Hello World";
    }
};
