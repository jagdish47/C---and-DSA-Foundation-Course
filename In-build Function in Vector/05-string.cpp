// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string s = "Jagdish Kumawat";

//     cout << s.size() << endl;
//     cout << s.length() << endl;
//     cout << s.max_size() << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string str = "Hello";

//     // Append a character using append()
//     str.append(5, '!');

//     // Print the modified string
//     std::cout << "Modified string: " << str << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string str = "Hello";

//     // Append a substring using append()
//     std::string substr = ", World!464";
//     str.append(substr, 2, 10);

//     // Print the modified string
//     std::cout << "Modified string: " << str << std::endl;

//     return 0;
// }

#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello";

    // Insert a character at position 2 using insert()
    str.insert(2, 2, 'X');

    // Print the modified string
    std::cout << "Modified string: " << str << std::endl;

    return 0;
}