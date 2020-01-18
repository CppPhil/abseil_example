#include <iostream>
#include <string>
#include <absl/strings/str_join.h>
#include <absl/strings/str_split.h>

int main()
{
    const int a[] = { 1, 2, 3 };
    const std::string s{absl::StrJoin(a, "#")};
    std::cout << "s: " << s << '\n';

    const std::vector<absl::string_view> v{absl::StrSplit(s, '#')};
    
    for (absl::string_view e : v) {
        std::cout << e << '\n';
    }
}
