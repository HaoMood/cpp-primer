#include <iostream>

int main()
{
    // #cur_val is the number we are counting
    // we will read new values into #val
    int cur_val = 0;
    int val = 0;

    // read first number and ensure that we have data to process
    if (std::cin >> cur_val) {
        int count = 1;  // store the count for the current value we are processing
        while (std::cin >> val) {   // read the remaining numbers
            if (val == cur_val) {   // if the values are the same
                ++ count;           // add 1 to #count
            }
            else {  // otherwise, print the count for the previous value
                std::cout << cur_val << " occurs " << count << " times" << std::endl;
                cur_val = val;      // remember the new value
                count = 1;          // reset the counter
            }
        }

        // remember to print the count for the last value in the file
        std::cout << cur_val << " occurs " << count << " times" << std::endl;
    }

    return 0;
}
