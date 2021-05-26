// comparing size, capacity and max_size
#include <iostream>
#include "../../../include/vector.hpp"

int main ()
{
 ft::vector<int> myvector;

 // set some content in the vector:
 for (int i=0; i<100; i++) myvector.push_back(i);

 std::cout << "size: " << myvector.size() << "\n";
 std::cout << "capacity: " << myvector.capacity() << "\n";
 return 0;
}