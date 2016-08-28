#include <iostream>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

#include <string>
#include "Sales_data.h"


int main()
{
    Sales_data data1, data2;
    double price = 0.0; // price per book,
                        // used to cal. total revenue

    cin >> data1._book_no >> data1._units_sold >> price;
    data1._revenue = data1._units_sold * price;

    cin >> data2._book_no >> data2._units_sold >> price;
    data2._revenue = data2._units_sold * price;

    if (data1._book_no != data2._book_no) {
        cerr << "Data must refer to the same ISBN" <<  endl;
        return -1;
    }

    unsigned total_cnt = data1._units_sold + data2._units_sold;
    double total_revenue = data1._revenue + data2._revenue;
    cout << data1._book_no << " " << total_cnt << " " 
         << total_revenue << " ";
    if (total_cnt != 0) {
        cout << total_revenue / total_cnt << endl;
    }
    else {
        cout << "(no sales)" << endl;
    }

    return 0;
}
